module TLU #(
    parameter data_width = 8
)
(
    input logic clk,
    input logic rst,
    input logic enable,
    input logic[data_width-1:0] data_in,
    output logic buy_signal,
    output logic sell_signal,
    output logic data_valid_end
);

    logic[data_width-1:0] data_5, data_10, data_20, data_50, data_100, data_200, current_data;
    logic[data_width*2-1:0] sqr_mean;
    logic buy_sma, sell_sma;
    logic buy_mean, sell_mean;
    logic buy_z, sell_z;

    // control signals
    logic data_valid;
    logic data_valid_sma;
    logic data_valid_mean;
    logic data_valid_z;

    // preprocessing module to get SMAs and squared mean
    Preprocessor #(
        .data_width(data_width)
    )preproc_inst(
        .clk(clk),
        .rst(rst),
        .enable(enable),
        .data_in(data_in),
        .data_5(data_5),
        .data_10(data_10),
        .data_20(data_20),
        .data_50(data_50),
        .data_100(data_100),
        .data_200(data_200),
        .sqr_mean(sqr_mean),
        .current_data(current_data),
        .data_valid(data_valid)
    );


    // trading strategy modules

    trade_SMA #(
        .threshold(17'd4096),
        .confluence_threshold(2'd2),  
        .data_width(data_width)   
    )trade_sma_inst (
        .clk(clk),
        .rst(rst),
        .data_valid_pre(data_valid),
        .data_5(data_5),
        .data_10(data_10),
        .data_20(data_20),
        .data_50(data_50),
        .data_100(data_100),
        .data_200(data_200),
        .buy_signal(buy_sma),
        .sell_signal(sell_sma),
        .data_valid_sma(data_valid_sma)
    );

    trade_MEAN #(
        .data_width(data_width)
    ) trade_mean_inst(
        .clk(clk),
        .rst(rst),
        .data_valid_pre(data_valid),
        .short_sma(data_10),
        .long_sma(data_50),
        .current_data(current_data),
        .buy_signal(buy_mean),
        .sell_signal(sell_mean),
        .data_valid_mean(data_valid_mean)
    );

    trade_Z #(
        .Z_threshold(32'b1 << 8),  // standard deviation threshold of 2
        .data_width(data_width)
    )trade_z_inst (
        .clk(clk),
        .rst(rst),
        .data_valid_pre(data_valid),
        .N_mean(data_20),
        .current_data(current_data),
        .N_sqr_mean(sqr_mean),
        .buy_signal(buy_z),
        .sell_signal(sell_z),
        .data_valid_z(data_valid_z)
    );


    // TLU logic to combine signals from different strategies
    logic [2:0] buy_score, sell_score;

    always_comb begin
        // different weights for different strategies
        buy_score  = (buy_mean? 3'd4 : 3'd0) //4
                    +(buy_sma? 3'd1 : 3'd0) //2
                    +(buy_z? 3'd2 : 3'd0); //1

        sell_score = (sell_mean? 3'd1 : 3'd0) 
                    + (sell_sma? 3'd1 : 3'd0) 
                    +(sell_z? 3'd1 : 3'd0);
    end

    // generating final buy/sell signals based on scores
    always_ff @(posedge clk) begin
        if (rst) begin
            buy_signal  <= 1'b0;
            sell_signal <= 1'b0;
        end else begin
            buy_signal  <= (buy_score  >= 2);
            sell_signal <= (sell_score >= 2);
            data_valid_end <= data_valid_z;
        end
    end
    

endmodule
