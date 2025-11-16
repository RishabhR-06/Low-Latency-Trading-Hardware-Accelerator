// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_SMA.h for the primary calling header

#include "verilated.h"

#include "Vtrade_SMA___024root.h"

VL_ATTR_COLD void Vtrade_SMA___024root___settle__TOP__0(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->buy_signal = ((0x4dU < (0x1ffU & (((IData)(vlSelf->data_5) 
                                               - (IData)(vlSelf->data_20)) 
                                              + ((IData)(vlSelf->data_10) 
                                                 - (IData)(vlSelf->data_50))))) 
                          & (IData)(vlSelf->trade_SMA__DOT__confluence_rising));
    vlSelf->sell_signal = ((0x4dU < (0x1ffU & (((IData)(vlSelf->data_20) 
                                                - (IData)(vlSelf->data_5)) 
                                               + ((IData)(vlSelf->data_50) 
                                                  - (IData)(vlSelf->data_10))))) 
                           & (IData)(vlSelf->trade_SMA__DOT__confluence_falling));
}

VL_ATTR_COLD void Vtrade_SMA___024root___eval_initial(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtrade_SMA___024root___eval_settle(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___eval_settle\n"); );
    // Body
    Vtrade_SMA___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtrade_SMA___024root___final(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___final\n"); );
}

VL_ATTR_COLD void Vtrade_SMA___024root___ctor_var_reset(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->data_5 = VL_RAND_RESET_I(8);
    vlSelf->data_10 = VL_RAND_RESET_I(8);
    vlSelf->data_20 = VL_RAND_RESET_I(8);
    vlSelf->data_50 = VL_RAND_RESET_I(8);
    vlSelf->data_100 = VL_RAND_RESET_I(8);
    vlSelf->data_200 = VL_RAND_RESET_I(8);
    vlSelf->buy_signal = VL_RAND_RESET_I(1);
    vlSelf->sell_signal = VL_RAND_RESET_I(1);
    vlSelf->trade_SMA__DOT__prev_5 = VL_RAND_RESET_I(8);
    vlSelf->trade_SMA__DOT__prev_10 = VL_RAND_RESET_I(8);
    vlSelf->trade_SMA__DOT__prev_20 = VL_RAND_RESET_I(8);
    vlSelf->trade_SMA__DOT__prev_50 = VL_RAND_RESET_I(8);
    vlSelf->trade_SMA__DOT__prev_100 = VL_RAND_RESET_I(8);
    vlSelf->trade_SMA__DOT__prev_200 = VL_RAND_RESET_I(8);
    vlSelf->trade_SMA__DOT__confluence_rising = VL_RAND_RESET_I(1);
    vlSelf->trade_SMA__DOT__confluence_falling = VL_RAND_RESET_I(1);
}
