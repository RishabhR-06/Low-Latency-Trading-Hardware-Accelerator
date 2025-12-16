module Preprocessor #(
    parameter data_width = 8
)
(
    input logic clk,
    input logic rst,
    input logic[data_width-1:0] data_in,
    input logic enable,
    output logic[data_width-1:0] data_5,
    output logic[data_width-1:0] data_10,
    output logic[data_width-1:0] data_20,
    output logic[data_width-1:0] data_50,
    output logic[data_width-1:0] data_100,
    output logic[data_width-1:0] data_200,
    output logic[data_width*2-1:0] sqr_mean,
    output logic[data_width-1:0] current_data,
    output logic data_valid
);
    // module carries out all preprocessing steps: SMAs and squared mean calculation
    // selected the windows based on common trading strategy timeframes

    logic unused;
    
    sec_mom #(
        .window(20),
        .data_width(data_width)
    ) sec_mom_mine (
        .data_in(data_in),
        .clk(clk),
        .enable(enable),
        .rst(rst),
        .data_out(sqr_mean),
        .data_valid(unused) // unused output
    );

    
    fixed_sma #(
        .window(5),
        .data_width(data_width)
    ) win_5 (
        .data_in(data_in),
        .clk(clk),
        .enable(enable),
        .rst(rst),
        .data_out(data_5),
        .data_valid(data_valid) // unused output
    );

    fixed_sma #(
        .window(10),
        .data_width(data_width)
    ) win_10 (
        .data_in(data_in),
        .clk(clk),
        .enable(enable),
        .rst(rst),
        .data_out(data_10),
        .data_valid(unused) // unused output
    );

    fixed_sma #(
        .window(20),
        .data_width(data_width)
    ) win_20 (
        .data_in(data_in),
        .clk(clk),
        .enable(enable),
        .rst(rst),
        .data_out(data_20),
        .data_valid(unused) // unused output
    );

    fixed_sma #(
        .window(50),
        .data_width(data_width)
    ) win_50 (
        .data_in(data_in),
        .clk(clk),
        .enable(enable),
        .rst(rst),
        .data_out(data_50),
        .data_valid(unused) // unused output
    );

    //remove all the below i don't think i need them

    fixed_sma #(
        .window(100),
        .data_width(data_width)
    ) win_100 (
        .data_in(data_in),
        .clk(clk),
        .enable(enable),
        .rst(rst),
        .data_out(data_100),
        .data_valid(unused) // unused output
    );


    fixed_sma #(
        .window(200),
        .data_width(data_width)
    ) win_200 (
        .data_in(data_in),
        .clk(clk),
        .enable(enable),
        .rst(rst),
        .data_out(data_200),
        .data_valid(unused) // unused output
    );

    assign current_data = data_in;
    
endmodule

