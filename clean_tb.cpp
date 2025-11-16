#include <verilated.h>
#include "Vclean.h"
#include <fstream>
#include <iostream>
#include <iomanip>

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vclean* top = new Vclean;

    // Open 6 memory files for each SMA output
    std::ofstream file_5("output_5.mem");
    std::ofstream file_10("output_10.mem");
    std::ofstream file_20("output_20.mem");
    std::ofstream file_50("output_50.mem");
    std::ofstream file_100("output_100.mem");
    std::ofstream file_200("output_200.mem");

    if (!file_5.is_open() || !file_10.is_open() || !file_20.is_open() ||
        !file_50.is_open() || !file_100.is_open() || !file_200.is_open()) {
        std::cerr << "Error opening one or more output files!" << std::endl;
        return 1;
    }

    // Simulation parameters
    const int NUM_CYCLES = 10000; // Number of clock cycles to simulate
    top->rst = 1;
    top->clk = 0;

    // Apply reset for 2 cycles
    for (int i = 0; i < 2; i++) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }
    top->rst = 0;

    // Main simulation loop
    for (int cycle = 0; cycle < NUM_CYCLES; cycle++) {
        // Rising edge
        top->clk = 1;
        top->eval();

        // Write each output in hex (2-digit)
        file_5   << std::hex << std::setw(2) << std::setfill('0') << (int)top->data_5   << std::endl;
        file_10  << std::hex << std::setw(2) << std::setfill('0') << (int)top->data_10  << std::endl;
        file_20  << std::hex << std::setw(2) << std::setfill('0') << (int)top->data_20  << std::endl;
        file_50  << std::hex << std::setw(2) << std::setfill('0') << (int)top->data_50  << std::endl;
        file_100 << std::hex << std::setw(2) << std::setfill('0') << (int)top->data_100 << std::endl;
        file_200 << std::hex << std::setw(2) << std::setfill('0') << (int)top->data_200 << std::endl;

        // Falling edge
        top->clk = 0;
        top->eval();
    }

    // Close files
    file_5.close();
    file_10.close();
    file_20.close();
    file_50.close();
    file_100.close();
    file_200.close();

    delete top;
    return 0;
}
