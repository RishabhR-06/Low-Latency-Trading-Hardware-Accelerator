// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_SMA.h for the primary calling header

#include "verilated.h"

#include "Vtrade_SMA___024root.h"

VL_ATTR_COLD void Vtrade_SMA___024root___initial__TOP__0(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5de1ec3c__0;
    // Body
    VL_WRITEF("loading.rom\n");
    __Vtemp_h5de1ec3c__0[0U] = 0x2e6d656dU;
    __Vtemp_h5de1ec3c__0[1U] = 0x746f636bU;
    __Vtemp_h5de1ec3c__0[2U] = 0x73U;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5de1ec3c__0)
                 ,  &(vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtrade_SMA___024root___settle__TOP__0(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->buy_signal = ((0x4dU < (0x1ffU & (((0xffU 
                                                & VL_DIV_III(32, vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_5__DOT__sum, (IData)(5U))) 
                                               - (0xffU 
                                                  & VL_DIV_III(32, vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U)))) 
                                              + ((0xffU 
                                                  & VL_DIV_III(32, vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU))) 
                                                 - 
                                                 (0xffU 
                                                  & VL_DIV_III(32, vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U))))))) 
                          & (IData)(vlSelf->trade_SMA__DOT__confluence_rising));
    vlSelf->sell_signal = ((0x4dU < (0x1ffU & (((0xffU 
                                                 & VL_DIV_III(32, vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))) 
                                                - (0xffU 
                                                   & VL_DIV_III(32, vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_5__DOT__sum, (IData)(5U)))) 
                                               + ((0xffU 
                                                   & VL_DIV_III(32, vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U))) 
                                                  - 
                                                  (0xffU 
                                                   & VL_DIV_III(32, vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU))))))) 
                           & (IData)(vlSelf->trade_SMA__DOT__confluence_falling));
}

VL_ATTR_COLD void Vtrade_SMA___024root___eval_initial(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vtrade_SMA___024root___initial__TOP__0(vlSelf);
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
    vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__rom_dout = VL_RAND_RESET_I(8);
    vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__rom_addr = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_5__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_5__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_10__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_20__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<50; ++__Vi0) {
        vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_50__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<100; ++__Vi0) {
        vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_100__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_100__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<200; ++__Vi0) {
        vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_200__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_SMA__DOT__Preprocessor_mine__DOT__win_200__DOT__sum = VL_RAND_RESET_I(32);
}
