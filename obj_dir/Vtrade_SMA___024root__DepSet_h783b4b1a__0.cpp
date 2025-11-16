// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_SMA.h for the primary calling header

#include "verilated.h"

#include "Vtrade_SMA___024root.h"

VL_INLINE_OPT void Vtrade_SMA___024root___sequent__TOP__0(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->trade_SMA__DOT__confluence_falling = ((~ (IData)(vlSelf->rst)) 
                                                  & (3U 
                                                     <= 
                                                     (3U 
                                                      & (((((((IData)(vlSelf->data_5) 
                                                              < (IData)(vlSelf->trade_SMA__DOT__prev_5)) 
                                                             + 
                                                             ((IData)(vlSelf->data_10) 
                                                              < (IData)(vlSelf->trade_SMA__DOT__prev_10))) 
                                                            + 
                                                            ((IData)(vlSelf->data_20) 
                                                             < (IData)(vlSelf->trade_SMA__DOT__prev_20))) 
                                                           + 
                                                           ((IData)(vlSelf->data_50) 
                                                            < (IData)(vlSelf->trade_SMA__DOT__prev_50))) 
                                                          + 
                                                          ((IData)(vlSelf->data_100) 
                                                           < (IData)(vlSelf->trade_SMA__DOT__prev_100))) 
                                                         + 
                                                         ((IData)(vlSelf->data_200) 
                                                          < (IData)(vlSelf->trade_SMA__DOT__prev_200))))));
    vlSelf->trade_SMA__DOT__confluence_rising = ((~ (IData)(vlSelf->rst)) 
                                                 & (3U 
                                                    <= 
                                                    (3U 
                                                     & (((((((IData)(vlSelf->data_5) 
                                                             > (IData)(vlSelf->trade_SMA__DOT__prev_5)) 
                                                            + 
                                                            ((IData)(vlSelf->data_10) 
                                                             > (IData)(vlSelf->trade_SMA__DOT__prev_10))) 
                                                           + 
                                                           ((IData)(vlSelf->data_20) 
                                                            > (IData)(vlSelf->trade_SMA__DOT__prev_20))) 
                                                          + 
                                                          ((IData)(vlSelf->data_50) 
                                                           > (IData)(vlSelf->trade_SMA__DOT__prev_50))) 
                                                         + 
                                                         ((IData)(vlSelf->data_100) 
                                                          > (IData)(vlSelf->trade_SMA__DOT__prev_100))) 
                                                        + 
                                                        ((IData)(vlSelf->data_200) 
                                                         > (IData)(vlSelf->trade_SMA__DOT__prev_200))))));
    if (vlSelf->rst) {
        vlSelf->trade_SMA__DOT__prev_5 = 0U;
        vlSelf->trade_SMA__DOT__prev_10 = 0U;
        vlSelf->trade_SMA__DOT__prev_20 = 0U;
        vlSelf->trade_SMA__DOT__prev_50 = 0U;
        vlSelf->trade_SMA__DOT__prev_100 = 0U;
        vlSelf->trade_SMA__DOT__prev_200 = 0U;
    } else {
        vlSelf->trade_SMA__DOT__prev_5 = vlSelf->data_5;
        vlSelf->trade_SMA__DOT__prev_10 = vlSelf->data_10;
        vlSelf->trade_SMA__DOT__prev_20 = vlSelf->data_20;
        vlSelf->trade_SMA__DOT__prev_50 = vlSelf->data_50;
        vlSelf->trade_SMA__DOT__prev_100 = vlSelf->data_100;
        vlSelf->trade_SMA__DOT__prev_200 = vlSelf->data_200;
    }
}

VL_INLINE_OPT void Vtrade_SMA___024root___combo__TOP__0(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->sell_signal = ((0x4dU < (0x1ffU & (((IData)(vlSelf->data_20) 
                                                - (IData)(vlSelf->data_5)) 
                                               + ((IData)(vlSelf->data_50) 
                                                  - (IData)(vlSelf->data_10))))) 
                           & (IData)(vlSelf->trade_SMA__DOT__confluence_falling));
    vlSelf->buy_signal = ((0x4dU < (0x1ffU & (((IData)(vlSelf->data_5) 
                                               - (IData)(vlSelf->data_20)) 
                                              + ((IData)(vlSelf->data_10) 
                                                 - (IData)(vlSelf->data_50))))) 
                          & (IData)(vlSelf->trade_SMA__DOT__confluence_rising));
}

void Vtrade_SMA___024root___eval(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtrade_SMA___024root___sequent__TOP__0(vlSelf);
    }
    Vtrade_SMA___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtrade_SMA___024root___eval_debug_assertions(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
