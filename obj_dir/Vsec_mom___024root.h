// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsec_mom.h for the primary calling header

#ifndef VERILATED_VSEC_MOM___024ROOT_H_
#define VERILATED_VSEC_MOM___024ROOT_H_  // guard

#include "verilated.h"

class Vsec_mom__Syms;

class Vsec_mom___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(data_in,7,0);
    VL_IN8(rst,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ sec_mom__DOT__sum;
    VlUnpacked<CData/*7:0*/, 4> sec_mom__DOT__Q;

    // INTERNAL VARIABLES
    Vsec_mom__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsec_mom___024root(Vsec_mom__Syms* symsp, const char* name);
    ~Vsec_mom___024root();
    VL_UNCOPYABLE(Vsec_mom___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
