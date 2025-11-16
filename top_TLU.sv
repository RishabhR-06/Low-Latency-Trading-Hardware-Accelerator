module top_TLU(
    input logic clk,
    input logic rst,
    output logic buy_signal,
    output logic sell_signal
);

    logic[7:0] data_in;
    logic[15:0] rom_addr;

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
        end
        else begin
            rom_addr <= rom_addr + 16'd1;
        end
    end

    

    TLU tlu_inst (
        .clk(clk),
        .rst(rst),
        .data_in(data_in),
        .buy_signal(buy_signal),
        .sell_signal(sell_signal)
    );

endmodule


