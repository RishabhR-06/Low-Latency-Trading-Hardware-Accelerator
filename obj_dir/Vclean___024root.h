// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclean.h for the primary calling header

#ifndef VERILATED_VCLEAN___024ROOT_H_
#define VERILATED_VCLEAN___024ROOT_H_  // guard

#include "verilated.h"

class Vclean__Syms;

class Vclean___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(data_5,7,0);
    VL_OUT8(data_10,7,0);
    VL_OUT8(data_20,7,0);
    VL_OUT8(data_50,7,0);
    VL_OUT8(data_100,7,0);
    VL_OUT8(data_200,7,0);
    CData/*7:0*/ clean__DOT__rom_dout;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ clean__DOT__rom_addr;
    SData/*15:0*/ __Vdly__clean__DOT__rom_addr;
    IData/*31:0*/ clean__DOT__win_5__DOT__sum;
    IData/*31:0*/ clean__DOT__win_10__DOT__sum;
    IData/*31:0*/ clean__DOT__win_20__DOT__sum;
    IData/*31:0*/ clean__DOT__win_50__DOT__sum;
    IData/*31:0*/ clean__DOT__win_100__DOT__sum;
    IData/*31:0*/ clean__DOT__win_200__DOT__sum;
    VlUnpacked<CData/*7:0*/, 65536> clean__DOT__my_rom__DOT__rom_array;
    VlUnpacked<CData/*7:0*/, 5> clean__DOT__win_5__DOT__Q;
    VlUnpacked<CData/*7:0*/, 10> clean__DOT__win_10__DOT__Q;
    VlUnpacked<CData/*7:0*/, 20> clean__DOT__win_20__DOT__Q;
    VlUnpacked<CData/*7:0*/, 50> clean__DOT__win_50__DOT__Q;
    VlUnpacked<CData/*7:0*/, 100> clean__DOT__win_100__DOT__Q;
    VlUnpacked<CData/*7:0*/, 200> clean__DOT__win_200__DOT__Q;

    // INTERNAL VARIABLES
    Vclean__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclean___024root(Vclean__Syms* symsp, const char* name);
    ~Vclean___024root();
    VL_UNCOPYABLE(Vclean___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
