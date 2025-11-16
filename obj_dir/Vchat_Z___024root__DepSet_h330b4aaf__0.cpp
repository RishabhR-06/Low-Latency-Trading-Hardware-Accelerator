// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchat_Z.h for the primary calling header

#include "verilated.h"

#include "Vchat_Z___024root.h"

VL_INLINE_OPT void Vchat_Z___024root___sequent__TOP__0(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__trade_Z__DOT__Preprocessor_mine__DOT__rom_addr 
        = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_addr;
    vlSelf->__Vdly__trade_Z__DOT__Preprocessor_mine__DOT__rom_addr 
        = ((IData)(vlSelf->rst) ? 0U : (0xffffU & ((IData)(1U) 
                                                   + (IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_addr))));
}

VL_INLINE_OPT void Vchat_Z___024root___sequent__TOP__1(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ trade_Z__DOT__variance;
    CData/*7:0*/ trade_Z__DOT__stddev;
    IData/*23:0*/ trade_Z__DOT__z_score_fixed;
    IData/*31:0*/ __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum;
    CData/*0:0*/ __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v0;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v20;
    CData/*0:0*/ __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v20;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v21;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v22;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v23;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v24;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v25;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v26;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v27;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v28;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v29;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v30;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v31;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v32;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v33;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v34;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v35;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v36;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v37;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v38;
    SData/*15:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v39;
    IData/*31:0*/ __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v20;
    CData/*0:0*/ __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v20;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v21;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v22;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v23;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v24;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v25;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v26;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v27;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v28;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v29;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v30;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v31;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v32;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v33;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v34;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v35;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v36;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v37;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v38;
    CData/*7:0*/ __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v39;
    // Body
    __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum 
        = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum;
    __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum 
        = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum;
    __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v20 = 0U;
    __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v20 = 0U;
    if (vlSelf->rst) {
        __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum = 0U;
        __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v0 = 1U;
        __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum = 0U;
        __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v0 = 1U;
    } else {
        __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum 
            = ((vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum 
                + (IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__data_in_sq)) 
               - vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
               [0x13U]);
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v20 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0x12U];
        __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v20 = 1U;
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v21 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0x11U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v22 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0x10U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v23 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0xfU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v24 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0xeU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v25 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0xdU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v26 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0xcU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v27 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0xbU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v28 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0xaU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v29 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [9U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v30 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [8U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v31 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [7U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v32 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [6U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v33 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [5U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v34 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [4U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v35 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [3U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v36 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [2U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v37 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [1U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v38 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q
            [0U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v39 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__data_in_sq;
        __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum 
            = ((vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum 
                + (IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
               [0x13U]);
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v20 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0x12U];
        __Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v20 = 1U;
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v21 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0x11U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v22 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0x10U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v23 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0xfU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v24 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0xeU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v25 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0xdU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v26 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0xcU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v27 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0xbU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v28 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0xaU];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v29 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [9U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v30 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [8U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v31 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [7U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v32 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [6U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v33 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [5U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v34 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [4U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v35 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [3U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v36 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [2U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v37 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [1U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v38 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q
            [0U];
        __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v39 
            = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout;
    }
    if (__Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v0) {
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0x13U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0x12U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0x11U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0x10U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xfU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xeU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xdU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xcU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xbU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xaU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[9U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[8U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[7U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[6U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[5U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[4U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[3U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[2U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[1U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v20) {
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0x13U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v20;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0x12U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v21;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0x11U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v22;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0x10U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v23;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xfU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v24;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xeU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v25;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xdU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v26;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xcU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v27;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xbU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v28;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0xaU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v29;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[9U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v30;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[8U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v31;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[7U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v32;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[6U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v33;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[5U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v34;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[4U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v35;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[3U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v36;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[2U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v37;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[1U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v38;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q[0U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__Q__v39;
    }
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum 
        = __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum;
    if (__Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v0) {
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0x13U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0x12U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0x11U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0x10U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xfU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xeU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xdU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xcU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xbU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xaU] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[9U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[8U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[7U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[6U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[5U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[4U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[3U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[2U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[1U] = 0U;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v20) {
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0x13U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v20;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0x12U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v21;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0x11U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v22;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0x10U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v23;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xfU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v24;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xeU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v25;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xdU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v26;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xcU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v27;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xbU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v28;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0xaU] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v29;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[9U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v30;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[8U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v31;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[7U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v32;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[6U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v33;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[5U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v34;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[4U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v35;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[3U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v36;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[2U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v37;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[1U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v38;
        vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q[0U] 
            = __Vdlyvval__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__Q__v39;
    }
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum 
        = __Vdly__trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum;
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout 
        = vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array
        [vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_addr];
    trade_Z__DOT__variance = (0xffffU & (VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__sqr_sum, (IData)(0x14U)) 
                                         - ((0xffU 
                                             & VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))) 
                                            * (0xffU 
                                               & VL_DIV_III(32, vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))))));
    trade_Z__DOT__stddev = ((0U == (0xffU & ((IData)(trade_Z__DOT__variance) 
                                             >> 8U)))
                             ? (0xffU & (IData)(trade_Z__DOT__variance))
                             : 0xffU);
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__sec_mom_mine__DOT__data_in_sq 
        = (0xffffU & ((IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout) 
                      * (IData)(vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_dout)));
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

VL_INLINE_OPT void Vchat_Z___024root___sequent__TOP__2(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->trade_Z__DOT__Preprocessor_mine__DOT__rom_addr 
        = vlSelf->__Vdly__trade_Z__DOT__Preprocessor_mine__DOT__rom_addr;
}

void Vchat_Z___024root___eval(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vchat_Z___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vchat_Z___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vchat_Z___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vchat_Z___024root___eval_debug_assertions(Vchat_Z___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchat_Z__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchat_Z___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
