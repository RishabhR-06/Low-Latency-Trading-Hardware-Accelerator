module TLU (
    input logic clk,
    input logic rst,
    input logic[7:0] data_in,
    output logic buy_signal,
    output logic sell_signal
);

    logic[7:0] data_5, data_10, data_20, data_50, data_100, data_200, current_data;
    logic[15:0] sqr_mean;
    logic buy_sma, sell_sma;
    logic buy_mean, sell_mean;
    logic buy_z, sell_z;

    // preprocessing module to get SMAs and squared mean
    Preprocessor preproc_inst (
        .clk(clk),
        .rst(rst),
        .data_in(data_in),
        .data_5(data_5),
        .data_10(data_10),
        .data_20(data_20),
        .data_50(data_50),
        .data_100(data_100),
        .data_200(data_200),
        .current_data(current_data),
        .sqr_mean(sqr_mean)
    );


    // trading strategy modules

    trade_SMA #(
        .threshold(9'd64),
        .confluence_threshold(2'd2)     
    )trade_sma_inst (
        .clk(clk),
        .rst(rst),
        .data_5(data_5),
        .data_10(data_10),
        .data_20(data_20),
        .data_50(data_50),
        .data_100(data_100),
        .data_200(data_200),
        .buy_signal(buy_sma),
        .sell_signal(sell_sma)
    );

    trade_MEAN trade_mean_inst (
        .clk(clk),
        .rst(rst),
        .short_sma(data_10),
        .long_sma(data_50),
        .current_data(current_data),
        .buy_signal(buy_mean),
        .sell_signal(sell_mean)
    );

    trade_Z #(
        .Z_threshold(16'd512)  // standard deviation threshold of 2
    )trade_z_inst (
        .clk(clk),
        .rst(rst),
        .N_mean(data_20),
        .current_data(current_data),
        .N_sqr_mean(sqr_mean),
        .buy_signal(buy_z),
        .sell_signal(sell_z)
    );


    // TLU logic to combine signals from different strategies
    logic [2:0] buy_score, sell_score;

    always_comb begin
        // different weights for different strategies
        buy_score  = (buy_mean? 3'd4 : 3'd0)
                    +(buy_sma? 3'd2 : 3'd0)
                    +(buy_z? 3'd1 : 3'd0); 

        sell_score = (sell_mean? 3'd2 : 3'd0) 
                    + (sell_sma? 3'd2 : 3'd0) 
                    +(sell_z? 3'd1 : 3'd0);
    end

    // generating final buy/sell signals based on scores
    always_ff @(posedge clk) begin
        if (rst) begin
            buy_signal  <= 1'b0;
            sell_signal <= 1'b0;
        end else begin
            buy_signal  <= (buy_score  >= 3);
            sell_signal <= (sell_score >= 3);
        end
    end
    

endmodule
