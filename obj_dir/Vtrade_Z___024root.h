// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtrade_Z.h for the primary calling header

#ifndef VERILATED_VTRADE_Z___024ROOT_H_
#define VERILATED_VTRADE_Z___024ROOT_H_  // guard

#include "verilated.h"

class Vtrade_Z__Syms;

class Vtrade_Z___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(N_mean,7,0);
    VL_IN8(current_data,7,0);
    VL_OUT8(buy_signal,0,0);
    VL_OUT8(sell_signal,0,0);
    VL_IN16(N_sqr_mean,15,0);

    // INTERNAL VARIABLES
    Vtrade_Z__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtrade_Z___024root(Vtrade_Z__Syms* symsp, const char* name);
    ~Vtrade_Z___024root();
    VL_UNCOPYABLE(Vtrade_Z___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
