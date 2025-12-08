module top_TLU(
    input logic clk,
    input logic rst,
    output logic buy_signal,
    output logic sell_signal,
    output logic data_valid
);

    //inputting simulation data from ROM for testing
    // This style mimics how a cpu would read data from memory
    // In practice, data_in would come from an ADC or data feed interface

    // need to change the way this inputs into the tlu as
    //right now every clock cycle is a minute
    // where as the tlu works at a faster clock rate than data input rate
    //need to work out how to do this properly


    logic[7:0] data_in;
    logic[15:0] rom_addr;

    logic[15:0] counter;
    logic enable;



    rom #(
        .ADDRESS_WIDTH(16),
        .DATA_WIDTH(8)
    ) my_rom (
        .clk(clk),
        .addr(rom_addr),
        .dout(data_in)
    );

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            rom_addr <= 16'd0;
            counter <= 16'd0;
            enable <= 1'b0;
        end
        else if (counter == 16'd60 )begin
            rom_addr <= rom_addr + 16'd1;
            counter <= 16'd0;
            enable <= 1'b1;
        end
        else begin
            counter <= counter + 16'd1;
            enable <= 1'b0;
        end
    end



    TLU tlu_inst (
        .clk(clk),
        .rst(rst),
        .enable(enable),
        .data_in(data_in),
        .buy_signal(buy_signal),
        .sell_signal(sell_signal),
        .data_valid_end(data_valid)
    );

endmodule


