// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsec_mom.h for the primary calling header

#include "verilated.h"

#include "Vsec_mom___024root.h"

VL_INLINE_OPT void Vsec_mom___024root___sequent__TOP__0(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__sec_mom__DOT__sqr_sum;
    CData/*0:0*/ __Vdlyvset__sec_mom__DOT__Q__v0;
    SData/*15:0*/ __Vdlyvval__sec_mom__DOT__Q__v4;
    CData/*0:0*/ __Vdlyvset__sec_mom__DOT__Q__v4;
    SData/*15:0*/ __Vdlyvval__sec_mom__DOT__Q__v5;
    SData/*15:0*/ __Vdlyvval__sec_mom__DOT__Q__v6;
    SData/*15:0*/ __Vdlyvval__sec_mom__DOT__Q__v7;
    // Body
    __Vdly__sec_mom__DOT__sqr_sum = vlSelf->sec_mom__DOT__sqr_sum;
    __Vdlyvset__sec_mom__DOT__Q__v0 = 0U;
    __Vdlyvset__sec_mom__DOT__Q__v4 = 0U;
    if (vlSelf->rst) {
        __Vdly__sec_mom__DOT__sqr_sum = 0U;
        __Vdlyvset__sec_mom__DOT__Q__v0 = 1U;
    } else {
        __Vdly__sec_mom__DOT__sqr_sum = ((vlSelf->sec_mom__DOT__sqr_sum 
                                          + (IData)(vlSelf->sec_mom__DOT__data_in_sq)) 
                                         - vlSelf->sec_mom__DOT__Q
                                         [3U]);
        __Vdlyvval__sec_mom__DOT__Q__v4 = vlSelf->sec_mom__DOT__Q
            [2U];
        __Vdlyvset__sec_mom__DOT__Q__v4 = 1U;
        __Vdlyvval__sec_mom__DOT__Q__v5 = vlSelf->sec_mom__DOT__Q
            [1U];
        __Vdlyvval__sec_mom__DOT__Q__v6 = vlSelf->sec_mom__DOT__Q
            [0U];
        __Vdlyvval__sec_mom__DOT__Q__v7 = vlSelf->sec_mom__DOT__data_in_sq;
    }
    if (__Vdlyvset__sec_mom__DOT__Q__v0) {
        vlSelf->sec_mom__DOT__Q[3U] = 0U;
        vlSelf->sec_mom__DOT__Q[2U] = 0U;
        vlSelf->sec_mom__DOT__Q[1U] = 0U;
        vlSelf->sec_mom__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__sec_mom__DOT__Q__v4) {
        vlSelf->sec_mom__DOT__Q[3U] = __Vdlyvval__sec_mom__DOT__Q__v4;
        vlSelf->sec_mom__DOT__Q[2U] = __Vdlyvval__sec_mom__DOT__Q__v5;
        vlSelf->sec_mom__DOT__Q[1U] = __Vdlyvval__sec_mom__DOT__Q__v6;
        vlSelf->sec_mom__DOT__Q[0U] = __Vdlyvval__sec_mom__DOT__Q__v7;
    }
    vlSelf->sec_mom__DOT__sqr_sum = __Vdly__sec_mom__DOT__sqr_sum;
    vlSelf->data_out = (0xffffU & (vlSelf->sec_mom__DOT__sqr_sum 
                                   >> 2U));
}

VL_INLINE_OPT void Vsec_mom___024root___combo__TOP__0(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->sec_mom__DOT__data_in_sq = (0xffffU & ((IData)(vlSelf->data_in) 
                                                   * (IData)(vlSelf->data_in)));
}

void Vsec_mom___024root___eval(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsec_mom___024root___sequent__TOP__0(vlSelf);
    }
    Vsec_mom___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vsec_mom___024root___eval_debug_assertions(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
