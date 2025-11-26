module sec_mom #(
    parameter window = 4
)
(
    input logic [7:0] data_in,
    input logic clk,
    input logic rst,
    output logic [15:0] data_out
);

    logic [15:0] Q[window-1:0];
    logic [31:0] sqr_sum;
    logic [31:0] avg;
    logic [15:0] data_in_sq;
    // very similar to fixed_sma but calculates the mean of the squared inputs
    assign data_in_sq = data_in * data_in;
    always_ff @( posedge clk ) begin
        if (rst) begin
            sqr_sum <= 32'b0;
            Q <= '{default:16'b0};
        end else begin
            sqr_sum <= sqr_sum + {{(32-16){1'b0}},data_in_sq} - {{(32-16){1'b0}},Q[window-1]};
            Q[window-1:1] <= Q[window-2:0];
            Q[0] <= data_in_sq;
        end         
    end
    
    assign avg = sqr_sum / window;
    assign data_out = avg[15:0];
    
endmodule

