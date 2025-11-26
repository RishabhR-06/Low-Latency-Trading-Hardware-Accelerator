module trade_Z #(
    parameter[15:0] Z_threshold = 16'd100  // Z-score threshold scaled by 256;
)(
    input logic clk,
    input logic rst,
    input logic[7:0] N_mean,
    input logic[7:0] current_data,
    input logic[15:0] N_sqr_mean,
    output logic buy_signal,
    output logic sell_signal
);

    logic[15:0] variance;
    logic[7:0] stddev;
    logic[31:0] temp;
    logic[7:0] delta;
    logic[15:0] delta_fixed;
    logic[15:0] z_score;
    logic buy_signal_next, sell_signal_next;




    // Z-score calculation
    assign variance = N_sqr_mean - (N_mean * N_mean);
    // using inbuilt func for nows
    assign temp = int'($sqrt(variance));
    assign stddev =  temp[7:0];
    // will create a square root hardware block and maybe division soon



    assign delta = (current_data > N_mean) ? (current_data - N_mean) : (N_mean - current_data);
    assign delta_fixed = {8'b0,delta} << 8; // Scale delta by 256 for fixed-point division
    assign z_score = (stddev != 0) ? ((delta_fixed) / {8'b0,stddev}) : 16'd0;

    //compare Z score with threshold to generate signals
    assign buy_signal_next  = (z_score > Z_threshold) && (current_data < N_mean);
    assign sell_signal_next = (z_score > Z_threshold) && (current_data > N_mean);

    
    // again synchronising signals for TLU
    always_ff @( posedge clk ) begin 
        if (rst) begin
            buy_signal  <= 1'b0;
            sell_signal <= 1'b0;
        end
        else begin
            buy_signal  <= buy_signal_next;
            sell_signal <= sell_signal_next;
        end
    end

    
    
endmodule
