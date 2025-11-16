module trade_MEAN #(
    parameter threshold = 8'd5
)(
    input logic clk,
    input logic rst,
    output logic buy_signal,
    output logic sell_signal
);

    logic [7:0] short_sma, long_sma, current_data;
    logic trend;
    logic [7:0] mid_range;
    logic [7:0] upper_bound, lower_bound;

    Preprocessor Preprocessor_mine (
        .clk(clk),
        .rst(rst),
        .data_5(),
        .data_10(short_sma),
        .data_20(),
        .data_50(long_sma),
        .data_100(),
        .data_200(),
        .current_data(current_data)
    );


    assign trend = short_sma>long_sma;
    assign mid_range = (short_sma + long_sma) >> 1;
    assign upper_bound = mid_range + threshold;
    assign lower_bound = (mid_range > threshold) ? (mid_range - threshold) : 0;

    assign buy_signal  = trend  && (current_data < lower_bound);
    assign sell_signal = !trend && (current_data > upper_bound);


    
endmodule
