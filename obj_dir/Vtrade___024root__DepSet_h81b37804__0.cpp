// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade.h for the primary calling header

#include "verilated.h"

#include "Vtrade___024root.h"

VL_INLINE_OPT void Vtrade___024root___sequent__TOP__0(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__trade__DOT__my_clean__DOT__rom_addr 
        = vlSelf->trade__DOT__my_clean__DOT__rom_addr;
    vlSelf->__Vdly__trade__DOT__my_clean__DOT__rom_addr 
        = ((IData)(vlSelf->rst) ? 0U : (0xffffU & ((IData)(1U) 
                                                   + (IData)(vlSelf->trade__DOT__my_clean__DOT__rom_addr))));
}

VL_INLINE_OPT void Vtrade___024root___sequent__TOP__1(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__buy_signal;
    CData/*0:0*/ __Vdly__sell_signal;
    IData/*31:0*/ __Vdly__trade__DOT__my_clean__DOT__win_5__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade__DOT__my_clean__DOT__win_5__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v5;
    CData/*0:0*/ __Vdlyvset__trade__DOT__my_clean__DOT__win_5__DOT__Q__v5;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v6;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v7;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v8;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v9;
    IData/*31:0*/ __Vdly__trade__DOT__my_clean__DOT__win_10__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade__DOT__my_clean__DOT__win_10__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v10;
    CData/*0:0*/ __Vdlyvset__trade__DOT__my_clean__DOT__win_10__DOT__Q__v10;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v11;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v12;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v13;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v14;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v15;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v16;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v17;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v18;
    CData/*7:0*/ __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v19;
    // Body
    __Vdly__sell_signal = vlSelf->sell_signal;
    __Vdly__buy_signal = vlSelf->buy_signal;
    __Vdly__trade__DOT__my_clean__DOT__win_5__DOT__sum 
        = vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__sum;
    __Vdly__trade__DOT__my_clean__DOT__win_10__DOT__sum 
        = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__sum;
    __Vdlyvset__trade__DOT__my_clean__DOT__win_5__DOT__Q__v0 = 0U;
    __Vdlyvset__trade__DOT__my_clean__DOT__win_5__DOT__Q__v5 = 0U;
    __Vdlyvset__trade__DOT__my_clean__DOT__win_10__DOT__Q__v0 = 0U;
    __Vdlyvset__trade__DOT__my_clean__DOT__win_10__DOT__Q__v10 = 0U;
    if (vlSelf->rst) {
        __Vdly__buy_signal = 0U;
        __Vdly__sell_signal = 0U;
        __Vdly__trade__DOT__my_clean__DOT__win_5__DOT__sum = 0U;
        __Vdlyvset__trade__DOT__my_clean__DOT__win_5__DOT__Q__v0 = 1U;
        __Vdly__trade__DOT__my_clean__DOT__win_10__DOT__sum = 0U;
        __Vdlyvset__trade__DOT__my_clean__DOT__win_10__DOT__Q__v0 = 1U;
        vlSelf->trade__DOT__prev_5 = 0U;
        vlSelf->trade__DOT__prev_10 = 0U;
    } else {
        if ((((IData)(vlSelf->trade__DOT__prev_5) < (IData)(vlSelf->trade__DOT__prev_10)) 
             & ((0xffU & VL_DIV_III(32, vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__sum, (IData)(5U))) 
                > (0xffU & VL_DIV_III(32, vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__sum, (IData)(0xaU)))))) {
            __Vdly__buy_signal = 1U;
            __Vdly__sell_signal = 0U;
        } else if ((((IData)(vlSelf->trade__DOT__prev_5) 
                     > (IData)(vlSelf->trade__DOT__prev_10)) 
                    & ((0xffU & VL_DIV_III(32, vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__sum, (IData)(5U))) 
                       < (0xffU & VL_DIV_III(32, vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__sum, (IData)(0xaU)))))) {
            __Vdly__buy_signal = 0U;
            __Vdly__sell_signal = 1U;
        } else {
            __Vdly__buy_signal = vlSelf->buy_signal;
            __Vdly__sell_signal = vlSelf->sell_signal;
        }
        __Vdly__trade__DOT__my_clean__DOT__win_5__DOT__sum 
            = ((vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__sum 
                + (IData)(vlSelf->trade__DOT__my_clean__DOT__rom_dout)) 
               - vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q
               [4U]);
        __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v5 
            = vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q
            [3U];
        __Vdlyvset__trade__DOT__my_clean__DOT__win_5__DOT__Q__v5 = 1U;
        __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v6 
            = vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q
            [2U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v7 
            = vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q
            [1U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v8 
            = vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q
            [0U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v9 
            = vlSelf->trade__DOT__my_clean__DOT__rom_dout;
        __Vdly__trade__DOT__my_clean__DOT__win_10__DOT__sum 
            = ((vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__sum 
                + (IData)(vlSelf->trade__DOT__my_clean__DOT__rom_dout)) 
               - vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
               [9U]);
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v10 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [8U];
        __Vdlyvset__trade__DOT__my_clean__DOT__win_10__DOT__Q__v10 = 1U;
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v11 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [7U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v12 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [6U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v13 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [5U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v14 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [4U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v15 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [3U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v16 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [2U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v17 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [1U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v18 
            = vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q
            [0U];
        __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v19 
            = vlSelf->trade__DOT__my_clean__DOT__rom_dout;
        vlSelf->trade__DOT__prev_5 = (0xffU & VL_DIV_III(32, vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__sum, (IData)(5U)));
        vlSelf->trade__DOT__prev_10 = (0xffU & VL_DIV_III(32, vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__sum, (IData)(0xaU)));
    }
    vlSelf->buy_signal = __Vdly__buy_signal;
    vlSelf->sell_signal = __Vdly__sell_signal;
    if (__Vdlyvset__trade__DOT__my_clean__DOT__win_5__DOT__Q__v0) {
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[4U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[3U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[2U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[1U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__trade__DOT__my_clean__DOT__win_5__DOT__Q__v5) {
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[4U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v5;
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[3U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v6;
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[2U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v7;
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[1U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v8;
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[0U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_5__DOT__Q__v9;
    }
    if (__Vdlyvset__trade__DOT__my_clean__DOT__win_10__DOT__Q__v0) {
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[9U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[8U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[7U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[6U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[5U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[4U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[3U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[2U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[1U] = 0U;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__trade__DOT__my_clean__DOT__win_10__DOT__Q__v10) {
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[9U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v10;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[8U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v11;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[7U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v12;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[6U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v13;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[5U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v14;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[4U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v15;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[3U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v16;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[2U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v17;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[1U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v18;
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[0U] 
            = __Vdlyvval__trade__DOT__my_clean__DOT__win_10__DOT__Q__v19;
    }
    vlSelf->trade__DOT__my_clean__DOT__rom_dout = vlSelf->trade__DOT__my_clean__DOT__my_rom__DOT__rom_array
        [vlSelf->trade__DOT__my_clean__DOT__rom_addr];
    vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__sum 
        = __Vdly__trade__DOT__my_clean__DOT__win_5__DOT__sum;
    vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__sum 
        = __Vdly__trade__DOT__my_clean__DOT__win_10__DOT__sum;
}

VL_INLINE_OPT void Vtrade___024root___sequent__TOP__2(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->trade__DOT__my_clean__DOT__rom_addr = vlSelf->__Vdly__trade__DOT__my_clean__DOT__rom_addr;
}

void Vtrade___024root___eval(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtrade___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtrade___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtrade___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtrade___024root___eval_debug_assertions(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
