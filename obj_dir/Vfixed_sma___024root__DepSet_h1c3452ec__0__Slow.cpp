// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfixed_sma.h for the primary calling header

#include "verilated.h"

#include "Vfixed_sma___024root.h"

VL_ATTR_COLD void Vfixed_sma___024root___settle__TOP__0(Vfixed_sma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data_out = ((((vlSelf->fixed_sma__DOT__Q
                           [3U] + vlSelf->fixed_sma__DOT__Q
                           [2U]) + vlSelf->fixed_sma__DOT__Q
                          [1U]) + vlSelf->fixed_sma__DOT__Q
                         [0U]) >> 2U);
}

VL_ATTR_COLD void Vfixed_sma___024root___eval_initial(Vfixed_sma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vfixed_sma___024root___eval_settle(Vfixed_sma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root___eval_settle\n"); );
    // Body
    Vfixed_sma___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vfixed_sma___024root___final(Vfixed_sma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root___final\n"); );
}

VL_ATTR_COLD void Vfixed_sma___024root___ctor_var_reset(Vfixed_sma___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data_in = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->fixed_sma__DOT__Q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->fixed_sma__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
