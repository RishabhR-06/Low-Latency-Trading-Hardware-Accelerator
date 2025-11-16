module fixed_sma #(
    parameter window = 4
)
(
    input logic [7:0] data_in,
    input logic clk,
    input logic rst,
    output logic [7:0] data_out
);

    logic [7:0] Q[window-1:0];
    logic [31:0] sum;
    logic [31:0] avg;
    // Module implementation goes here
    always_ff @( posedge clk ) begin
        if (rst) begin
            sum <= 32'b0;
            Q <= '{default:8'b0};
        end else begin
            sum <= sum + {{(32-8){1'b0}},data_in} - {{(32-8){1'b0}},Q[window-1]};
            Q[window-1:1] <= Q[window-2:0];
            Q[0] <= data_in;
        end         
    end
    assign avg = sum / window;
    assign data_out = avg[7:0];
    
endmodule

