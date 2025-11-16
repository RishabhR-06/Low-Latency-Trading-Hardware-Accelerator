// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfixed_sma.h for the primary calling header

#ifndef VERILATED_VFIXED_SMA___024ROOT_H_
#define VERILATED_VFIXED_SMA___024ROOT_H_  // guard

#include "verilated.h"

class Vfixed_sma__Syms;

class Vfixed_sma___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(data_in,31,0);
    VL_OUT(data_out,31,0);
    IData/*31:0*/ fixed_sma__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 4> fixed_sma__DOT__Q;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vfixed_sma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfixed_sma___024root(Vfixed_sma__Syms* symsp, const char* name);
    ~Vfixed_sma___024root();
    VL_UNCOPYABLE(Vfixed_sma___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
