// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsec_mom.h for the primary calling header

#include "verilated.h"

#include "Vsec_mom___024root.h"

VL_ATTR_COLD void Vsec_mom___024root___settle__TOP__0(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data_out = (0xffU & ((vlSelf->sec_mom__DOT__sum 
                                  * vlSelf->sec_mom__DOT__sum) 
                                 >> 2U));
}

VL_ATTR_COLD void Vsec_mom___024root___eval_initial(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vsec_mom___024root___eval_settle(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___eval_settle\n"); );
    // Body
    Vsec_mom___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vsec_mom___024root___final(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___final\n"); );
}

VL_ATTR_COLD void Vsec_mom___024root___ctor_var_reset(Vsec_mom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsec_mom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsec_mom___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data_in = VL_RAND_RESET_I(8);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->sec_mom__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->sec_mom__DOT__sum = VL_RAND_RESET_I(32);
}
