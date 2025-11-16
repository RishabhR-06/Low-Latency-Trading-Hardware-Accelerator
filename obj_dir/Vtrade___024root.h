// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtrade.h for the primary calling header

#ifndef VERILATED_VTRADE___024ROOT_H_
#define VERILATED_VTRADE___024ROOT_H_  // guard

#include "verilated.h"

class Vtrade__Syms;

class Vtrade___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(buy_signal,0,0);
    VL_OUT8(sell_signal,0,0);
    CData/*7:0*/ trade__DOT__prev_5;
    CData/*7:0*/ trade__DOT__prev_10;
    CData/*7:0*/ trade__DOT__my_clean__DOT__rom_dout;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ trade__DOT__my_clean__DOT__rom_addr;
    SData/*15:0*/ __Vdly__trade__DOT__my_clean__DOT__rom_addr;
    IData/*31:0*/ trade__DOT__my_clean__DOT__win_5__DOT__sum;
    IData/*31:0*/ trade__DOT__my_clean__DOT__win_10__DOT__sum;
    VlUnpacked<CData/*7:0*/, 65536> trade__DOT__my_clean__DOT__my_rom__DOT__rom_array;
    VlUnpacked<CData/*7:0*/, 5> trade__DOT__my_clean__DOT__win_5__DOT__Q;
    VlUnpacked<CData/*7:0*/, 10> trade__DOT__my_clean__DOT__win_10__DOT__Q;

    // INTERNAL VARIABLES
    Vtrade__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtrade___024root(Vtrade__Syms* symsp, const char* name);
    ~Vtrade___024root();
    VL_UNCOPYABLE(Vtrade___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
