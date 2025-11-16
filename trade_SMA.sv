module trade_SMA #(
    parameter [8:0] threshold = 9'd77,
    parameter [1:0] confluence_threshold = 2'd3
)(
    input logic clk,
    input logic rst,
    input logic[7:0] data_5,
    input logic[7:0] data_10,
    input logic[7:0] data_20,
    input logic[7:0] data_50,
    input logic[7:0] data_100,
    input logic[7:0] data_200,
    output logic buy_signal,
    output logic sell_signal
);
    logic [7:0] prev_5, prev_10, prev_20, prev_50, prev_100, prev_200;
    logic rising_5, rising_10, rising_20, rising_50, rising_100, rising_200;
    logic falling_5, falling_10, falling_20, falling_50, falling_100, falling_200;
    logic [8:0] up_score, down_score;
    
    logic strong_uptrend, strong_downtrend;
    logic confluence_rising, confluence_falling;

    logic buy_signal_next, sell_signal_next;

    always_ff @( posedge clk ) begin
        if (rst) begin
            prev_5 <= 8'b0;
            prev_10 <= 8'b0;
            prev_20 <= 8'b0;
            prev_50 <= 8'b0;
            prev_100 <= 8'b0;
            prev_200 <= 8'b0;
        end
        else begin 
            prev_5 <= data_5;
            prev_10 <= data_10;
            prev_20 <= data_20;
            prev_50 <= data_50;
            prev_100 <= data_100;
            prev_200 <= data_200;
        end  
    end 

    always_comb begin
        rising_5   = data_5   > prev_5;
        rising_10  = data_10  > prev_10;
        rising_20  = data_20  > prev_20;
        rising_50  = data_50  > prev_50;
        rising_100 = data_100 > prev_100;
        rising_200 = data_200 > prev_200;        
       
    end

    always_comb begin
        falling_5   = data_5   < prev_5; 
        falling_10  = data_10  < prev_10;
        falling_20  = data_20  < prev_20;
        falling_50  = data_50  < prev_50;
        falling_100 = data_100 < prev_100;
        falling_200 = data_200 < prev_200;  
        
    end   


    assign up_score   = (data_5 - data_20) + (data_10 - data_50);
    assign down_score = (data_20 - data_5) + (data_50 - data_10);
    assign strong_uptrend   = up_score > threshold;
    assign strong_downtrend = down_score > threshold;

    always_ff @( posedge clk ) begin 
        if (rst) begin
            confluence_rising <= 1'b0;
            confluence_falling <= 1'b0;
        end
        else begin
            confluence_rising <= (rising_5 + rising_10 + rising_20 + rising_50 + rising_100 + rising_200) >= confluence_threshold;
            confluence_falling <= (falling_5 + falling_10 + falling_20 + falling_50 + falling_100 + falling_200) >= confluence_threshold;
        end
    end

    assign buy_signal_next  = strong_uptrend && confluence_rising;
    assign sell_signal_next = strong_downtrend && confluence_falling;
    
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
