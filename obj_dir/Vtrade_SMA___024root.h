// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtrade_SMA.h for the primary calling header

#ifndef VERILATED_VTRADE_SMA___024ROOT_H_
#define VERILATED_VTRADE_SMA___024ROOT_H_  // guard

#include "verilated.h"

class Vtrade_SMA__Syms;

class Vtrade_SMA___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(buy_signal,0,0);
    VL_OUT8(sell_signal,0,0);
    CData/*7:0*/ trade_SMA__DOT__prev_5;
    CData/*7:0*/ trade_SMA__DOT__prev_10;
    CData/*7:0*/ trade_SMA__DOT__prev_20;
    CData/*7:0*/ trade_SMA__DOT__prev_50;
    CData/*7:0*/ trade_SMA__DOT__prev_100;
    CData/*7:0*/ trade_SMA__DOT__prev_200;
    CData/*0:0*/ trade_SMA__DOT__confluence_rising;
    CData/*0:0*/ trade_SMA__DOT__confluence_falling;
    CData/*7:0*/ trade_SMA__DOT__Preprocessor_mine__DOT__rom_dout;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ trade_SMA__DOT__Preprocessor_mine__DOT__rom_addr;
    IData/*31:0*/ trade_SMA__DOT__Preprocessor_mine__DOT__win_5__DOT__sum;
    IData/*31:0*/ trade_SMA__DOT__Preprocessor_mine__DOT__win_10__DOT__sum;
    IData/*31:0*/ trade_SMA__DOT__Preprocessor_mine__DOT__win_20__DOT__sum;
    IData/*31:0*/ trade_SMA__DOT__Preprocessor_mine__DOT__win_50__DOT__sum;
    IData/*31:0*/ trade_SMA__DOT__Preprocessor_mine__DOT__win_100__DOT__sum;
    IData/*31:0*/ trade_SMA__DOT__Preprocessor_mine__DOT__win_200__DOT__sum;
    VlUnpacked<CData/*7:0*/, 65536> trade_SMA__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array;
    VlUnpacked<CData/*7:0*/, 5> trade_SMA__DOT__Preprocessor_mine__DOT__win_5__DOT__Q;
    VlUnpacked<CData/*7:0*/, 10> trade_SMA__DOT__Preprocessor_mine__DOT__win_10__DOT__Q;
    VlUnpacked<CData/*7:0*/, 20> trade_SMA__DOT__Preprocessor_mine__DOT__win_20__DOT__Q;
    VlUnpacked<CData/*7:0*/, 50> trade_SMA__DOT__Preprocessor_mine__DOT__win_50__DOT__Q;
    VlUnpacked<CData/*7:0*/, 100> trade_SMA__DOT__Preprocessor_mine__DOT__win_100__DOT__Q;
    VlUnpacked<CData/*7:0*/, 200> trade_SMA__DOT__Preprocessor_mine__DOT__win_200__DOT__Q;

    // INTERNAL VARIABLES
    Vtrade_SMA__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtrade_SMA___024root(Vtrade_SMA__Syms* symsp, const char* name);
    ~Vtrade_SMA___024root();
    VL_UNCOPYABLE(Vtrade_SMA___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
