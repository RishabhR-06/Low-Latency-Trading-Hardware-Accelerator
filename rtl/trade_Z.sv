module trade_Z #(
    parameter data_width = 16,
    parameter integer_bits = 10,
    parameter[data_width*2-1:0] Z_threshold = 100  // Z-score threshold scaled by 256;
    
)(
    input logic clk,
    input logic rst,
    input logic data_valid_pre,
    input logic[data_width-1:0] N_mean,
    input logic[data_width-1:0] current_data,
    input logic[data_width*2-1:0] N_sqr_mean,
    output logic buy_signal,
    output logic sell_signal,
    output logic data_valid_z
);

    logic[data_width*2-1:0] variance;
    logic[data_width-1:0] stddev;
    logic[data_width*2-1:0] temp;
    logic[data_width-1:0] delta;
    logic[data_width*2-1:0] delta_fixed;
    logic[data_width*2-1:0] z_score;
    logic buy_signal_next, sell_signal_next;
    logic data_valid_next;
    logic[data_width*2-1:0] int_sqr;


    parameter fractional_bits = data_width - integer_bits;


    // Z-score calculation
    assign variance = N_sqr_mean - (N_mean * N_mean);
    // using inbuilt func for nows
    // right shift to adjust for fixed point scaling

    assign int_sqr = (variance >> fractional_bits*2);

    rom #(
        .ADDRESS_WIDTH(20),
        .DATA_WIDTH(data_width*2),
        .mem_file("../memory/sqrt_rom.mem")
    ) sqrt_rom (
        .clk(clk),
        .addr(int_sqr[19:0]),
        .dout(temp)
    );

    assign stddev =  temp[data_width-1:0];
    // will create a square root hardware block and maybe division soon




    assign delta = (current_data > N_mean) ? (current_data - N_mean) : (N_mean - current_data);


    assign delta_fixed = {{data_width{1'b0}},delta} << 6; // left shift to adjust for fixed point scaling

    // 10.6 representation divider by 16 bit number to get z score
    assign z_score = (stddev != 0) ? ((delta_fixed) / {{data_width{1'b0}},stddev}) : {{data_width*2{1'b0}}};

    //compare Z score with threshold to generate signals


    assign buy_signal_next  = (z_score > Z_threshold) && (current_data < N_mean);
    assign sell_signal_next = (z_score > Z_threshold) && (current_data > N_mean);

    
    // again synchronising signals for TLU
    always_ff @( posedge clk ) begin 
        if (rst) begin
            buy_signal  <= 1'b0;
            sell_signal <= 1'b0;
            data_valid_next <= 1'b0;
            data_valid_z    <= 1'b0;
        end
        else begin
            data_valid_next <= data_valid_pre;
            data_valid_z <= data_valid_next;
            buy_signal  <= buy_signal_next;
            sell_signal <= sell_signal_next;
        end
    end

    
    
endmodule
