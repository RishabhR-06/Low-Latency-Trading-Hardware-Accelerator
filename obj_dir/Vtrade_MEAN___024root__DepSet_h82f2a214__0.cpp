// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_MEAN.h for the primary calling header

#include "verilated.h"

#include "Vtrade_MEAN___024root.h"

VL_INLINE_OPT void Vtrade_MEAN___024root___combo__TOP__0(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___combo__TOP__0\n"); );
    // Init
    CData/*0:0*/ trade_MEAN__DOT__trend;
    CData/*7:0*/ trade_MEAN__DOT__mid_range;
    // Body
    trade_MEAN__DOT__trend = ((IData)(vlSelf->short_sma) 
                              > (IData)(vlSelf->long_sma));
    trade_MEAN__DOT__mid_range = (0x7fU & (((IData)(vlSelf->short_sma) 
                                            + (IData)(vlSelf->long_sma)) 
                                           >> 1U));
    vlSelf->buy_signal = ((IData)(trade_MEAN__DOT__trend) 
                          & ((IData)(vlSelf->current_data) 
                             < ((5U < (IData)(trade_MEAN__DOT__mid_range))
                                 ? (0xffU & ((IData)(trade_MEAN__DOT__mid_range) 
                                             - (IData)(5U)))
                                 : 0U)));
    vlSelf->sell_signal = ((~ (IData)(trade_MEAN__DOT__trend)) 
                           & ((IData)(vlSelf->current_data) 
                              > (0xffU & ((IData)(5U) 
                                          + (IData)(trade_MEAN__DOT__mid_range)))));
}

void Vtrade_MEAN___024root___eval(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___eval\n"); );
    // Body
    Vtrade_MEAN___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vtrade_MEAN___024root___eval_debug_assertions(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
