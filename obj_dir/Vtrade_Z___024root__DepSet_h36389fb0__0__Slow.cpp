// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_Z.h for the primary calling header

#include "verilated.h"

#include "Vtrade_Z___024root.h"

VL_ATTR_COLD void Vtrade_Z___024root___eval_initial(Vtrade_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_Z___024root___eval_initial\n"); );
}

void Vtrade_Z___024root___combo__TOP__0(Vtrade_Z___024root* vlSelf);

VL_ATTR_COLD void Vtrade_Z___024root___eval_settle(Vtrade_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_Z___024root___eval_settle\n"); );
    // Body
    Vtrade_Z___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtrade_Z___024root___final(Vtrade_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_Z___024root___final\n"); );
}

VL_ATTR_COLD void Vtrade_Z___024root___ctor_var_reset(Vtrade_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_Z___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->N_mean = VL_RAND_RESET_I(8);
    vlSelf->current_data = VL_RAND_RESET_I(8);
    vlSelf->N_sqr_mean = VL_RAND_RESET_I(16);
    vlSelf->buy_signal = VL_RAND_RESET_I(1);
    vlSelf->sell_signal = VL_RAND_RESET_I(1);
}
