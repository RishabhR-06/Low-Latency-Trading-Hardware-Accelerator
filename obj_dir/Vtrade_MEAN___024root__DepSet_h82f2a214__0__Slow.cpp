// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_MEAN.h for the primary calling header

#include "verilated.h"

#include "Vtrade_MEAN___024root.h"

VL_ATTR_COLD void Vtrade_MEAN___024root___settle__TOP__0(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ trade_MEAN__DOT__trend;
    CData/*7:0*/ trade_MEAN__DOT__mid_range;
    // Body
    trade_MEAN__DOT__trend = ((0xffU & VL_DIV_III(32, vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU))) 
                              > (0xffU & VL_DIV_III(32, vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U))));
    trade_MEAN__DOT__mid_range = (0x7fU & ((VL_DIV_III(32, vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU)) 
                                            + VL_DIV_III(32, vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U))) 
                                           >> 1U));
    vlSelf->buy_signal = ((IData)(trade_MEAN__DOT__trend) 
                          & ((IData)(vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout) 
                             < ((5U < (IData)(trade_MEAN__DOT__mid_range))
                                 ? (0xffU & ((IData)(trade_MEAN__DOT__mid_range) 
                                             - (IData)(5U)))
                                 : 0U)));
    vlSelf->sell_signal = ((~ (IData)(trade_MEAN__DOT__trend)) 
                           & ((IData)(vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout) 
                              > (0xffU & ((IData)(5U) 
                                          + (IData)(trade_MEAN__DOT__mid_range)))));
}

VL_ATTR_COLD void Vtrade_MEAN___024root___initial__TOP__0(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5de1ec3c__0;
    // Body
    VL_WRITEF("loading.rom\n");
    __Vtemp_h5de1ec3c__0[0U] = 0x2e6d656dU;
    __Vtemp_h5de1ec3c__0[1U] = 0x746f636bU;
    __Vtemp_h5de1ec3c__0[2U] = 0x73U;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5de1ec3c__0)
                 ,  &(vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtrade_MEAN___024root___eval_initial(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vtrade_MEAN___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtrade_MEAN___024root___eval_settle(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___eval_settle\n"); );
    // Body
    Vtrade_MEAN___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtrade_MEAN___024root___final(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___final\n"); );
}

VL_ATTR_COLD void Vtrade_MEAN___024root___ctor_var_reset(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->buy_signal = VL_RAND_RESET_I(1);
    vlSelf->sell_signal = VL_RAND_RESET_I(1);
    vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout = VL_RAND_RESET_I(8);
    vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<50; ++__Vi0) {
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr = VL_RAND_RESET_I(16);
}
