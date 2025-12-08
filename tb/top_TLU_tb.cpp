#include <verilated.h>
#include "Vtop_TLU.h"
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vtop_TLU* top = new Vtop_TLU;

    std::string mem_folder = "../memory/";

    // Open memory files to log buy/sell signals
    std::ofstream buy_file(mem_folder + "buy_signal.mem");
    std::ofstream sell_file(mem_folder + "sell_signal.mem");

    if (!buy_file.is_open() || !sell_file.is_open()) {
        std::cerr << "Error opening output files!" << std::endl;
        return 1;
    }

    const int NUM_CYCLES = 2500*60;
    top->rst = 1;
    top->clk = 0;

    // Apply reset for 2 clock cycles
    for (int i = 0; i < 2; i++) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }
    top->rst = 0;

    int valid_count = 0;

    // Main simulation loop
    for (int cycle = 0; cycle < NUM_CYCLES; cycle++) {
        // Rising edge
        top->clk = 1;
        top->eval();

        // Only write outputs on rising edge when data_valid is high
        if (top->data_valid) {
            buy_file  << (int)top->buy_signal  << std::endl;
            sell_file << (int)top->sell_signal << std::endl;
            valid_count++;
        }

        // Falling edge
        top->clk = 0;
        top->eval();
    }

    std::cout << "Valid samples written: " << valid_count << std::endl;

    buy_file.close();
    sell_file.close();
    delete top;
    return 0;
}
