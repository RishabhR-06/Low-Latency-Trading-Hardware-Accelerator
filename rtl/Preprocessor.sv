module Preprocessor (
    input logic clk,
    input logic rst,
    input logic[7:0] data_in,
    output logic[7:0] data_5,
    output logic[7:0] data_10,
    output logic[7:0] data_20,
    output logic[7:0] data_50,
    output logic[7:0] data_100,
    output logic[7:0] data_200,
    output logic[7:0] current_data,
    output logic[15:0] sqr_mean
);
    // module carries out all preprocessing steps: SMAs and squared mean calculation
    // selected the windows based on common trading strategy timeframes

    
    sec_mom #(
        .window(20)
    ) sec_mom_mine (
        .data_in(data_in),
        .clk(clk),
        .rst(rst),
        .data_out(sqr_mean)
    );

    
    fixed_sma #(
        .window(5)
    ) win_5 (
        .data_in(data_in),
        .clk(clk),
        .rst(rst),
        .data_out(data_5)
    );

    fixed_sma #(
        .window(10)
    ) win_10 (
        .data_in(data_in),
        .clk(clk),
        .rst(rst),
        .data_out(data_10)
    );

    fixed_sma #(
        .window(20)
    ) win_20 (
        .data_in(data_in),
        .clk(clk),
        .rst(rst),
        .data_out(data_20)
    );

    fixed_sma #(
        .window(50)
    ) win_50 (
        .data_in(data_in),
        .clk(clk),
        .rst(rst),
        .data_out(data_50)
    );


    fixed_sma #(
        .window(100)
    ) win_100 (
        .data_in(data_in),
        .clk(clk),
        .rst(rst),
        .data_out(data_100)
    );


    fixed_sma #(
        .window(200)
    ) win_200 (
        .data_in(data_in),
        .clk(clk),
        .rst(rst),
        .data_out(data_200)
    );

    assign current_data = data_in;

    
endmodule

