// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_Z.h for the primary calling header

#include "verilated.h"

#include "Vtrade_Z___024root.h"

VL_INLINE_OPT void Vtrade_Z___024root___combo__TOP__0(Vtrade_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_Z___024root___combo__TOP__0\n"); );
    // Init
    SData/*15:0*/ trade_Z__DOT__z_score;
    // Body
    trade_Z__DOT__z_score = ((0U != (0xffU & VL_RTOIROUND_I_D(
                                                              sqrt(
                                                                   VL_ITOR_D_I(16, 
                                                                               (0xffffU 
                                                                                & ((IData)(vlSelf->N_sqr_mean) 
                                                                                - 
                                                                                ((IData)(vlSelf->N_mean) 
                                                                                * (IData)(vlSelf->N_mean)))))))))
                              ? (0xffffU & VL_DIV_III(16, 
                                                      (0xff00U 
                                                       & ((((IData)(vlSelf->current_data) 
                                                            > (IData)(vlSelf->N_mean))
                                                            ? 
                                                           ((IData)(vlSelf->current_data) 
                                                            - (IData)(vlSelf->N_mean))
                                                            : 
                                                           ((IData)(vlSelf->N_mean) 
                                                            - (IData)(vlSelf->current_data))) 
                                                          << 8U)), 
                                                      (0xffU 
                                                       & VL_RTOIROUND_I_D(
                                                                          sqrt(
                                                                               VL_ITOR_D_I(16, 
                                                                                (0xffffU 
                                                                                & ((IData)(vlSelf->N_sqr_mean) 
                                                                                - 
                                                                                ((IData)(vlSelf->N_mean) 
                                                                                * (IData)(vlSelf->N_mean))))))))))
                              : 0U);
    vlSelf->buy_signal = ((0x1f4U < (IData)(trade_Z__DOT__z_score)) 
                          & ((IData)(vlSelf->current_data) 
                             < (IData)(vlSelf->N_mean)));
    vlSelf->sell_signal = ((0x1f4U < (IData)(trade_Z__DOT__z_score)) 
                           & ((IData)(vlSelf->current_data) 
                              > (IData)(vlSelf->N_mean)));
}

void Vtrade_Z___024root___eval(Vtrade_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_Z___024root___eval\n"); );
    // Body
    Vtrade_Z___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vtrade_Z___024root___eval_debug_assertions(Vtrade_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_Z___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
