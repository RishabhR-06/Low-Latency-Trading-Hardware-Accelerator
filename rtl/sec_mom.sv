module sec_mom #(
    parameter window = 4
    parameter data_width = 8
)
(
    input logic [data_width-1:0] data_in,
    input logic clk,
    input logic enable,
    input logic rst,
    output logic [data_width*2-1:0] data_out,
    output logic data_valid
);

    logic [data_width*2-1:0] Q[window-1:0];
    logic [data_width*4-1:0] sqr_sum;
    logic [data_width*4-1:0] avg;
    logic [data_width*2-1:0] data_in_sq;
    // very similar to fixed_sma but calculates the mean of the squared inputs
    assign data_in_sq = data_in * data_in;
    always_ff @( posedge clk ) begin
        if (rst) begin
            sqr_sum <= {data_width*4{1'b0}};
            Q <= '{default: 0};
            data_valid <= 1'b0;
        end else if (enable) begin
            sqr_sum <= sqr_sum + {{(data_width*2){1'b0}},data_in_sq} - {{(data_width*2){1'b0}},Q[window-1]};
            Q[window-1:1] <= Q[window-2:0];
            Q[0] <= data_in_sq;
        end else begin
            data_valid <= 1'b0;
        end    
    end
    
    assign avg = sqr_sum / window;
    assign data_out = avg[data_width*2-1:0];
    
endmodule

