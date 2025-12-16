module fixed_sma #(
    parameter window = 4,
    parameter data_width = 8
)
(
    input logic [data_width-1:0] data_in,
    input logic clk,
    input logic rst,
    input logic enable,
    output logic [data_width-1:0] data_out,
    output logic data_valid
);

    logic [data_width-1:0] Q[window-1:0];
    logic [data_width*4-1:0] sum;
    logic [data_width*4-1:0] avg;
    // Module implementation goes here
    always_ff @( posedge clk ) begin
        if (rst) begin
            sum <= {{data_width*4{1'b0}}};
            Q <= '{default: 0};
            data_valid <= 1'b0;
        end 
        else if (enable) begin
            // Uses a sliding window to maintain the sum of the last 'window' inputs saves resources
            sum <= sum + {{(data_width*3){1'b0}},data_in} - {{(data_width*3){1'b0}},Q[window-1]}; 
            Q[window-1:1] <= Q[window-2:0];
            Q[0] <= data_in; 
            data_valid <= 1'b1;
        end 
        else begin
            data_valid <= 1'b0;
        end         
    end

    // considered using only powers of 2 for window size to use bit shifting and save resources
    // but decided against it for flexibility and strategy purposes

    assign avg = sum / window; // needs to be pipelined for higher frequencies as division is latency heavy
    assign data_out = avg[data_width-1:0];
    
endmodule

