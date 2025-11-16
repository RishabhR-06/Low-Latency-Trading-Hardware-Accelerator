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
    VL_OUT8(buy_signal,0,0);
    VL_OUT8(sell_signal,0,0);
    CData/*7:0*/ trade_Z__DOT__Preprocessor_mine__DOT__rom_dout;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ trade_Z__DOT__Preprocessor_mine__DOT__rom_addr;
    SData/*15:0*/ trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__data_in_sq;
    SData/*15:0*/ __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__rom_addr;
    IData/*31:0*/ trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum;
    IData/*31:0*/ trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum;
    VlUnpacked<CData/*7:0*/, 65536> trade_Z__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array;
    VlUnpacked<SData/*15:0*/, 20> trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q;
    VlUnpacked<CData/*7:0*/, 20> trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q;

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
