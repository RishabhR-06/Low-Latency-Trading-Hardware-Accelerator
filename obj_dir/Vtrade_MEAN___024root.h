// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtrade_MEAN.h for the primary calling header

#ifndef VERILATED_VTRADE_MEAN___024ROOT_H_
#define VERILATED_VTRADE_MEAN___024ROOT_H_  // guard

#include "verilated.h"

class Vtrade_MEAN__Syms;

class Vtrade_MEAN___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(short_sma,7,0);
    VL_IN8(long_sma,7,0);
    VL_IN8(current_data,7,0);
    VL_OUT8(buy_signal,0,0);
    VL_OUT8(sell_signal,0,0);

    // INTERNAL VARIABLES
    Vtrade_MEAN__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtrade_MEAN___024root(Vtrade_MEAN__Syms* symsp, const char* name);
    ~Vtrade_MEAN___024root();
    VL_UNCOPYABLE(Vtrade_MEAN___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
