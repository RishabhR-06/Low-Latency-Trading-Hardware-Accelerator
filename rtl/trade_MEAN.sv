module trade_MEAN #(
    parameter threshold = 8'd5
    parameter data_width = 8
)(
    input logic clk,
    input logic rst,
    input logic data_valid_pre,
    input logic[data_width-1:0] short_sma,
    input logic[data_width-1:0] long_sma,
    input logic[data_width-1:0] current_data,
    output logic buy_signal,
    output logic sell_signal,
    output logic data_valid_mean
);

    logic trend;
    logic [data_width-1:0] mid_range;
    logic [data_width-1:0] upper_bound, lower_bound;
    logic buy_signal_next, sell_signal_next;



    // Mean reversion logic
    assign trend = short_sma>long_sma;
    assign mid_range = (short_sma + long_sma) >> 1;
    assign upper_bound = mid_range + threshold;
    assign lower_bound = (mid_range > threshold) ? (mid_range - threshold) : 0;

    assign buy_signal_next  = trend  && (current_data < lower_bound);
    assign sell_signal_next = !trend && (current_data > upper_bound);


    // again synchronising signals for TLU
    always_ff @( posedge clk ) begin 
        if (rst) begin
            buy_signal  <= 1'b0;
            sell_signal <= 1'b0;
        end
        else begin
            buy_signal  <= buy_signal_next;
            sell_signal <= sell_signal_next;
            data_valid_mean <= data_valid_pre;
        end
    end


    
endmodule
