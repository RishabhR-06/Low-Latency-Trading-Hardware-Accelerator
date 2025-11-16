module trade_Z #(

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

    


    Preprocessor Preprocessor_mine (
        .clk(clk),
        .rst(rst),
        .data_5(),
        .data_10(),
        .data_20(N_mean),
        .data_50(),
        .data_100(),
        .data_200(),
        .current_data(),
        .sqr_mean(N_sqr_mean) 
    );

    // Z-score calculation
    assign variance = N_sqr_mean - (N_mean * N_mean);
    

    
    
endmodule
