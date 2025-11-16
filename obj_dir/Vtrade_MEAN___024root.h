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
    VL_OUT8(buy_signal,0,0);
    VL_OUT8(sell_signal,0,0);
    CData/*7:0*/ trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr;
    SData/*15:0*/ __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr;
    IData/*31:0*/ trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum;
    IData/*31:0*/ trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum;
    VlUnpacked<CData/*7:0*/, 65536> trade_MEAN__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array;
    VlUnpacked<CData/*7:0*/, 10> trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q;
    VlUnpacked<CData/*7:0*/, 50> trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q;

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
