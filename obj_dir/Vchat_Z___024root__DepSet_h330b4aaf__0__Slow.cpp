// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchat_Z.h for the primary calling header

#include "verilated.h"

#include "Vchat_Z___024root.h"

VL_ATTR_COLD void Vchat_Z___024root___settle__TOP__0(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___settle__TOP__0\n"); );
    // Init
    SData/*15:0*/ trade_Z__DOT__variance;
    CData/*7:0*/ trade_Z__DOT__stddev;
    IData/*23:0*/ trade_Z__DOT__z_score_fixed;
    // Body
    trade_Z__DOT__variance = (0xffffU & (VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum, (IData)(0x14U)) 
                                         - ((0xffU 
                                             & VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))) 
                                            * (0xffU 
                                               & VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))))));
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__data_in_sq 
        = (0xffffU & ((IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout) 
                      * (IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout)));
    trade_Z__DOT__stddev = ((0U == (0xffU & ((IData)(trade_Z__DOT__variance) 
                                             >> 8U)))
                             ? (0xffU & (IData)(trade_Z__DOT__variance))
                             : 0xffU);
    trade_Z__DOT__z_score_fixed = ((0U != (IData)(trade_Z__DOT__stddev))
                                    ? (0xffffffU & 
                                       VL_DIV_III(24, 
                                                  (0xff0000U 
                                                   & ((((IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout) 
                                                        > 
                                                        (0xffU 
                                                         & VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))))
                                                        ? 
                                                       ((IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout) 
                                                        - 
                                                        VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U)))
                                                        : 
                                                       (VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U)) 
                                                        - (IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout))) 
                                                      << 0x10U)), (IData)(trade_Z__DOT__stddev)))
                                    : 0U);
    vlSelf->buy_signal = ((0x200U < trade_Z__DOT__z_score_fixed) 
                          & ((IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout) 
                             < (0xffU & VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U)))));
    vlSelf->sell_signal = ((0x200U < trade_Z__DOT__z_score_fixed) 
                           & ((IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout) 
                              > (0xffU & VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U)))));
}

VL_ATTR_COLD void Vchat_Z___024root___initial__TOP__0(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5de1ec3c__0;
    // Body
    VL_WRITEF("loading.rom\n");
    __Vtemp_h5de1ec3c__0[0U] = 0x2e6d656dU;
    __Vtemp_h5de1ec3c__0[1U] = 0x746f636bU;
    __Vtemp_h5de1ec3c__0[2U] = 0x73U;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5de1ec3c__0)
                 ,  &(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vchat_Z___024root___eval_initial(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vchat_Z___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vchat_Z___024root___eval_settle(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___eval_settle\n"); );
    // Body
    Vchat_Z___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vchat_Z___024root___final(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___final\n"); );
}

VL_ATTR_COLD void Vchat_Z___024root___ctor_var_reset(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->buy_signal = VL_RAND_RESET_I(1);
    vlSelf->sell_signal = VL_RAND_RESET_I(1);
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout = VL_RAND_RESET_I(8);
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_addr = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum = VL_RAND_RESET_I(32);
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__data_in_sq = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__trade_Z__DOT__Preprocessor_mine__DOT__rom_addr = VL_RAND_RESET_I(16);
}
