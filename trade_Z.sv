module trade_Z #(
    parameter[15:0] Z_threshold = 16'd230  // Z-score threshold scaled by 256;
)(
    input logic clk,
    input logic rst,
    output logic buy_signal,
    output logic sell_signal
);

    logic[7:0] N_mean;
    logic[15:0] N_sqr_mean;
    logic[15:0] variance;
    logic[7:0] stddev;
    logic[31:0] temp;
    logic[7:0] current_data;
    logic[7:0] delta;
    logic[15:0] delta_fixed;
    logic[15:0] z_score;
    


    Preprocessor Preprocessor_mine (
        .clk(clk),
        .rst(rst),
        .data_5(),
        .data_10(),
        .data_20(N_mean),
        .data_50(),
        .data_100(),
        .data_200(),
        .current_data(current_data),
        .sqr_mean(N_sqr_mean) 
    );

    // Z-score calculation
    assign variance = N_sqr_mean - (N_mean * N_mean);
    // using inbuilt func for nows
    assign temp = int'($sqrt(variance));
    assign stddev =  temp[7:0];
    // will create a square root hardware block soon



    assign delta = (current_data > N_mean) ? (current_data - N_mean) : (N_mean - current_data);
    assign delta_fixed = {8'b0,delta} << 8; // Scale delta by 256 for fixed-point division
    assign z_score = (stddev != 0) ? ((delta_fixed) / {8'b0,stddev}) : 16'd0;

    assign buy_signal  = (z_score > Z_threshold) && (current_data < N_mean);
    assign sell_signal = (z_score > Z_threshold) && (current_data > N_mean);

    
    


    
    
endmodule
