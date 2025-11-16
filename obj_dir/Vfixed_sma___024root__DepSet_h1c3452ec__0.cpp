// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfixed_sma.h for the primary calling header

#include "verilated.h"

#include "Vfixed_sma___024root.h"

VL_INLINE_OPT void Vfixed_sma___024root___sequent__TOP__0(Vfixed_sma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__fixed_sma__DOT__Q__v0;
    IData/*31:0*/ __Vdlyvval__fixed_sma__DOT__Q__v4;
    CData/*0:0*/ __Vdlyvset__fixed_sma__DOT__Q__v4;
    IData/*31:0*/ __Vdlyvval__fixed_sma__DOT__Q__v5;
    IData/*31:0*/ __Vdlyvval__fixed_sma__DOT__Q__v6;
    IData/*31:0*/ __Vdlyvval__fixed_sma__DOT__Q__v7;
    // Body
    __Vdlyvset__fixed_sma__DOT__Q__v0 = 0U;
    __Vdlyvset__fixed_sma__DOT__Q__v4 = 0U;
    if (vlSelf->rst) {
        vlSelf->fixed_sma__DOT__unnamedblk1__DOT__i = 4U;
        __Vdlyvset__fixed_sma__DOT__Q__v0 = 1U;
    } else {
        __Vdlyvval__fixed_sma__DOT__Q__v4 = vlSelf->fixed_sma__DOT__Q
            [2U];
        __Vdlyvset__fixed_sma__DOT__Q__v4 = 1U;
        __Vdlyvval__fixed_sma__DOT__Q__v5 = vlSelf->fixed_sma__DOT__Q
            [1U];
        __Vdlyvval__fixed_sma__DOT__Q__v6 = vlSelf->fixed_sma__DOT__Q
            [0U];
        __Vdlyvval__fixed_sma__DOT__Q__v7 = vlSelf->data_in;
    }
    if (__Vdlyvset__fixed_sma__DOT__Q__v0) {
        vlSelf->fixed_sma__DOT__Q[0U] = 0U;
        vlSelf->fixed_sma__DOT__Q[1U] = 0U;
        vlSelf->fixed_sma__DOT__Q[2U] = 0U;
        vlSelf->fixed_sma__DOT__Q[3U] = 0U;
    }
    if (__Vdlyvset__fixed_sma__DOT__Q__v4) {
        vlSelf->fixed_sma__DOT__Q[3U] = __Vdlyvval__fixed_sma__DOT__Q__v4;
        vlSelf->fixed_sma__DOT__Q[2U] = __Vdlyvval__fixed_sma__DOT__Q__v5;
        vlSelf->fixed_sma__DOT__Q[1U] = __Vdlyvval__fixed_sma__DOT__Q__v6;
        vlSelf->fixed_sma__DOT__Q[0U] = __Vdlyvval__fixed_sma__DOT__Q__v7;
    }
    vlSelf->data_out = ((((vlSelf->fixed_sma__DOT__Q
                           [3U] + vlSelf->fixed_sma__DOT__Q
                           [2U]) + vlSelf->fixed_sma__DOT__Q
                          [1U]) + vlSelf->fixed_sma__DOT__Q
                         [0U]) >> 2U);
}

void Vfixed_sma___024root___eval(Vfixed_sma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vfixed_sma___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vfixed_sma___024root___eval_debug_assertions(Vfixed_sma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
