// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_TLU.h for the primary calling header

#include "verilated.h"

#include "Vtop_TLU___024root.h"

extern const VlUnpacked<CData/*2:0*/, 64> Vtop_TLU__ConstPool__TABLE_h9bd5dc9b_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtop_TLU__ConstPool__TABLE_h4f3bf15d_0;

VL_ATTR_COLD void Vtop_TLU___024root___settle__TOP__0(Vtop_TLU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_TLU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_TLU___024root___settle__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->top_TLU__DOT__tlu_inst__DOT__sell_z) 
                     << 5U) | (((IData)(vlSelf->top_TLU__DOT__tlu_inst__DOT__sell_sma) 
                                << 4U) | (((IData)(vlSelf->top_TLU__DOT__tlu_inst__DOT__sell_mean) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top_TLU__DOT__tlu_inst__DOT__buy_z) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top_TLU__DOT__tlu_inst__DOT__buy_sma) 
                                               << 1U) 
                                              | (IData)(vlSelf->top_TLU__DOT__tlu_inst__DOT__buy_mean))))));
    vlSelf->top_TLU__DOT__tlu_inst__DOT__buy_score 
        = Vtop_TLU__ConstPool__TABLE_h9bd5dc9b_0[__Vtableidx1];
    vlSelf->top_TLU__DOT__tlu_inst__DOT__sell_score 
        = Vtop_TLU__ConstPool__TABLE_h4f3bf15d_0[__Vtableidx1];
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__data_in_sq 
        = (0xffffU & ((IData)(vlSelf->top_TLU__DOT__data_in) 
                      * (IData)(vlSelf->top_TLU__DOT__data_in)));
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_mean_inst__DOT__trend 
        = ((0xffU & VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_10__DOT__sum, (IData)(0xaU))) 
           > (0xffU & VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_50__DOT__sum, (IData)(0x32U))));
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_mean_inst__DOT__mid_range 
        = (0x7fU & ((VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_10__DOT__sum, (IData)(0xaU)) 
                     + VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_50__DOT__sum, (IData)(0x32U))) 
                    >> 1U));
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_z_inst__DOT__z_score 
        = ((0U != (0xffU & VL_RTOIROUND_I_D(sqrt(VL_ITOR_D_I(16, 
                                                             (0xffffU 
                                                              & (VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__sqr_sum, (IData)(0x14U)) 
                                                                 - 
                                                                 ((0xffU 
                                                                   & VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum, (IData)(0x14U))) 
                                                                  * 
                                                                  (0xffU 
                                                                   & VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum, (IData)(0x14U)))))))))))
            ? (0xffffU & VL_DIV_III(16, (0xff00U & 
                                         ((((IData)(vlSelf->top_TLU__DOT__data_in) 
                                            > (0xffU 
                                               & VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum, (IData)(0x14U))))
                                            ? ((IData)(vlSelf->top_TLU__DOT__data_in) 
                                               - VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum, (IData)(0x14U)))
                                            : (VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum, (IData)(0x14U)) 
                                               - (IData)(vlSelf->top_TLU__DOT__data_in))) 
                                          << 8U)), 
                                    (0xffU & VL_RTOIROUND_I_D(
                                                              sqrt(
                                                                   VL_ITOR_D_I(16, 
                                                                               (0xffffU 
                                                                                & (VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__sqr_sum, (IData)(0x14U)) 
                                                                                - 
                                                                                ((0xffU 
                                                                                & VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum, (IData)(0x14U))) 
                                                                                * 
                                                                                (0xffU 
                                                                                & VL_DIV_III(32, vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum, (IData)(0x14U))))))))))))
            : 0U);
}

VL_ATTR_COLD void Vtop_TLU___024root___initial__TOP__0(Vtop_TLU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_TLU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_TLU___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5de1ec3c__0;
    // Body
    VL_WRITEF("loading.rom\n");
    __Vtemp_h5de1ec3c__0[0U] = 0x2e6d656dU;
    __Vtemp_h5de1ec3c__0[1U] = 0x746f636bU;
    __Vtemp_h5de1ec3c__0[2U] = 0x73U;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5de1ec3c__0)
                 ,  &(vlSelf->top_TLU__DOT__my_rom__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop_TLU___024root___eval_initial(Vtop_TLU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_TLU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_TLU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vtop_TLU___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop_TLU___024root___eval_settle(Vtop_TLU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_TLU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_TLU___024root___eval_settle\n"); );
    // Body
    Vtop_TLU___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop_TLU___024root___final(Vtop_TLU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_TLU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_TLU___024root___final\n"); );
}

VL_ATTR_COLD void Vtop_TLU___024root___ctor_var_reset(Vtop_TLU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_TLU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_TLU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->buy_signal = VL_RAND_RESET_I(1);
    vlSelf->sell_signal = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->top_TLU__DOT__rom_addr = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top_TLU__DOT__my_rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_TLU__DOT__tlu_inst__DOT__buy_sma = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__sell_sma = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__buy_mean = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__sell_mean = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__buy_z = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__sell_z = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__buy_score = VL_RAND_RESET_I(3);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__sell_score = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__Q[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__sqr_sum = VL_RAND_RESET_I(32);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__sec_mom_mine__DOT__data_in_sq = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_5__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_5__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_10__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_10__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<20; ++__Vi0) {
        vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_20__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<50; ++__Vi0) {
        vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_50__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_50__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<100; ++__Vi0) {
        vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_100__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_100__DOT__sum = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<200; ++__Vi0) {
        vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_200__DOT__Q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_TLU__DOT__tlu_inst__DOT__preproc_inst__DOT__win_200__DOT__sum = VL_RAND_RESET_I(32);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_5 = VL_RAND_RESET_I(8);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_10 = VL_RAND_RESET_I(8);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_20 = VL_RAND_RESET_I(8);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_50 = VL_RAND_RESET_I(8);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_100 = VL_RAND_RESET_I(8);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__prev_200 = VL_RAND_RESET_I(8);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__confluence_rising = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_sma_inst__DOT__confluence_falling = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_mean_inst__DOT__trend = VL_RAND_RESET_I(1);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_mean_inst__DOT__mid_range = VL_RAND_RESET_I(8);
    vlSelf->top_TLU__DOT__tlu_inst__DOT__trade_z_inst__DOT__z_score = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__top_TLU__DOT__rom_addr = VL_RAND_RESET_I(16);
}
