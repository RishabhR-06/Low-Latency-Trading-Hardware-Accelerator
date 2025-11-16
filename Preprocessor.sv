module Preprocessor (
    input logic clk,
    input logic rst,
    output logic[7:0] data_5,
    output logic[7:0] data_10,
    output logic[7:0] data_20,
    output logic[7:0] data_50,
    output logic[7:0] data_100,
    output logic[7:0] data_200,
    output logic[7:0] current_data,
    output logic[15:0] sqr_mean 
);
    // Instantiate ROM
    logic [7:0] rom_dout;
    logic [15:0] rom_addr;
    
    rom #(
        .ADDRESS_WIDTH(16),
        .DATA_WIDTH(8)
    ) my_rom (
        .clk(clk),
        .addr(rom_addr),
        .dout(rom_dout)
    );

    sec_mom #(
        .window(20)
    ) sec_mom_mine (
        .data_in(rom_dout),
        .clk(clk),
        .rst(rst),
        .data_out(sqr_mean)  // Unused output
    );

    
    fixed_sma #(
        .window(5)
    ) win_5 (
        .data_in(rom_dout),
        .clk(clk),
        .rst(rst),
        .data_out(data_5)
    );

    fixed_sma #(
        .window(10)
    ) win_10 (
        .data_in(rom_dout),
        .clk(clk),
        .rst(rst),
        .data_out(data_10)
    );

    fixed_sma #(
        .window(20)
    ) win_20 (
        .data_in(rom_dout),
        .clk(clk),
        .rst(rst),
        .data_out(data_20)
    );

    fixed_sma #(
        .window(50)
    ) win_50 (
        .data_in(rom_dout),
        .clk(clk),
        .rst(rst),
        .data_out(data_50)
    );


    fixed_sma #(
        .window(100)
    ) win_100 (
        .data_in(rom_dout),
        .clk(clk),
        .rst(rst),
        .data_out(data_100)
    );


    fixed_sma #(
        .window(200)
    ) win_200 (
        .data_in(rom_dout),
        .clk(clk),
        .rst(rst),
        .data_out(data_200)
    );

    assign current_data = rom_dout;

    // Address generation logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            rom_addr <= 16'd0;
        end else begin
            rom_addr <= rom_addr + 16'd1;
        end
    end



    
endmodule

