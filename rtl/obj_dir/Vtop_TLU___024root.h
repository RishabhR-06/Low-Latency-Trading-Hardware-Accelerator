// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_TLU.h for the primary calling header

#ifndef VERILATED_VTOP_TLU___024ROOT_H_
#define VERILATED_VTOP_TLU___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_TLU__Syms;

class Vtop_TLU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(buy_signal,0,0);
    VL_OUT8(sell_signal,0,0);
    VL_OUT8(data_valid,0,0);
    CData/*0:0*/ top_TLU__DOT__enable;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__buy_sma;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__sell_sma;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__buy_mean;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__sell_mean;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__buy_z;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__sell_z;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__data_valid;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__data_valid_z;
    CData/*2:0*/ top_TLU__DOT__tlu_inst__DOT__buy_score;
    CData/*2:0*/ top_TLU__DOT__tlu_inst__DOT__sell_score;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__confluence_rising;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__confluence_falling;
    CData/*0:0*/ top_TLU__DOT__tlu_inst__DOT__trade_mean_inst__DOT__trend;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ top_TLU__DOT__data_in;
    SData/*15:0*/ top_TLU__DOT__rom_addr;
    SData/*15:0*/ top_TLU__DOT__counter;
    SData/*15:0*/ top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_5;
    SData/*15:0*/ top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_10;
    SData/*15:0*/ top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_20;
    SData/*15:0*/ top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_50;
    SData/*15:0*/ top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_100;
    SData/*15:0*/ top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_200;
    SData/*15:0*/ top_TLU__DOT__tlu_inst__DOT__trade_mean_inst__DOT__mid_range;
    IData/*31:0*/ top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__data_in_sq;
    IData/*31:0*/ top_TLU__DOT__tlu_inst__DOT__trade_z_inst__DOT__z_score;
    QData/*63:0*/ top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__sqr_sum;
    QData/*63:0*/ top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_5__DOT__sum;
    QData/*63:0*/ top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_10__DOT__sum;
    QData/*63:0*/ top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum;
    QData/*63:0*/ top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_50__DOT__sum;
    QData/*63:0*/ top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_100__DOT__sum;
    QData/*63:0*/ top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_200__DOT__sum;
    VlUnpacked<SData/*15:0*/, 65536> top_TLU__DOT__my_rom__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 20> top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__Q;
    VlUnpacked<SData/*15:0*/, 5> top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_5__DOT__Q;
    VlUnpacked<SData/*15:0*/, 10> top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_10__DOT__Q;
    VlUnpacked<SData/*15:0*/, 20> top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__Q;
    VlUnpacked<SData/*15:0*/, 50> top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_50__DOT__Q;
    VlUnpacked<SData/*15:0*/, 100> top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_100__DOT__Q;
    VlUnpacked<SData/*15:0*/, 200> top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_200__DOT__Q;

    // INTERNAL VARIABLES
    Vtop_TLU__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_TLU___024root(Vtop_TLU__Syms* symsp, const char* name);
    ~Vtop_TLU___024root();
    VL_UNCOPYABLE(Vtop_TLU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
