module rom #(
    parameter ADDRESS_WIDTH = 16,
    parameter DATA_WIDTH = 8,
    parameter mem_file = "../memory/stock.mem"
)(
    input logic clk,
    input logic[ADDRESS_WIDTH-1:0] addr,
    output logic[DATA_WIDTH-1:0] dout
);
    logic[DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];
    
    initial begin
        $display("loading.rom");
        $readmemh(mem_file, rom_array);
    end

    always_ff @(posedge clk) begin
        dout<= rom_array[addr];
    end


    
endmodule

