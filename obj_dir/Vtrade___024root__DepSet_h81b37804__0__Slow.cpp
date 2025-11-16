// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade.h for the primary calling header

#include "verilated.h"

#include "Vtrade___024root.h"

VL_ATTR_COLD void Vtrade___024root___initial__TOP__0(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5de1ec3c__0;
    // Body
    VL_WRITEF("loading.rom\n");
    __Vtemp_h5de1ec3c__0[0U] = 0x2e6d656dU;
    __Vtemp_h5de1ec3c__0[1U] = 0x746f636bU;
    __Vtemp_h5de1ec3c__0[2U] = 0x73U;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5de1ec3c__0)
                 ,  &(vlSelf->trade__DOT__my_clean__DOT__my_rom__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtrade___024root___eval_initial(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vtrade___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtrade___024root___eval_settle(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vtrade___024root___final(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___final\n"); );
}

VL_ATTR_COLD void Vtrade___024root___ctor_var_reset(Vtrade___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->buy_signal = VL_RAND_RESET_I(1);
    vlSelf->sell_signal = VL_RAND_RESET_I(1);
    vlSelf->trade__DOT__prev_5 = VL_RAND_RESET_I(8);
    vlSelf->trade__DOT__prev_10 = VL_RAND_RESET_I(8);
    vlSelf->trade__DOT__my_clean__DOT__rom_dout = VL_RAND_RESET_I(8);
    vlSelf->trade__DOT__my_clean__DOT__rom_addr = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->trade__DOT__my_clean__DOT__my_rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade__DOT__my_clean__DOT__win_5__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade__DOT__my_clean__DOT__win_10__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__trade__DOT__my_clean__DOT__rom_addr = VL_RAND_RESET_I(16);
}
