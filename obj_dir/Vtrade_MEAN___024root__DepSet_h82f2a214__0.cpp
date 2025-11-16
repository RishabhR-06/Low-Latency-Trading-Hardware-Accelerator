// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_MEAN.h for the primary calling header

#include "verilated.h"

#include "Vtrade_MEAN___024root.h"

VL_INLINE_OPT void Vtrade_MEAN___024root___sequent__TOP__0(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr 
        = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr;
    vlSelf->__Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr 
        = ((IData)(vlSelf->rst) ? 0U : (0xffffU & ((IData)(1U) 
                                                   + (IData)(vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr))));
}

VL_INLINE_OPT void Vtrade_MEAN___024root___sequent__TOP__1(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ trade_MEAN__DOT__trend;
    CData/*7:0*/ trade_MEAN__DOT__mid_range;
    IData/*31:0*/ __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v10;
    CData/*0:0*/ __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v10;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v11;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v12;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v13;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v14;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v15;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v16;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v17;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v18;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v19;
    IData/*31:0*/ __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v50;
    CData/*0:0*/ __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v50;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v51;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v52;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v53;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v54;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v55;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v56;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v57;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v58;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v59;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v60;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v61;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v62;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v63;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v64;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v65;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v66;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v67;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v68;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v69;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v70;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v71;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v72;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v73;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v74;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v75;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v76;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v77;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v78;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v79;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v80;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v81;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v82;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v83;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v84;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v85;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v86;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v87;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v88;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v89;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v90;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v91;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v92;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v93;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v94;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v95;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v96;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v97;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v98;
    CData/*7:0*/ __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v99;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum 
        = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum;
    __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v10 = 0U;
    __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum 
        = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum;
    __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v50 = 0U;
    if (vlSelf->rst) {
        __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum = 0U;
        __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v0 = 1U;
        __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum = 0U;
        __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v0 = 1U;
    } else {
        __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum 
            = ((vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum 
                + (IData)(vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
               [9U]);
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v10 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [8U];
        __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v10 = 1U;
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v11 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [7U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v12 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [6U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v13 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [5U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v14 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [4U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v15 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [3U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v16 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [2U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v17 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [1U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v18 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q
            [0U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v19 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout;
        __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum 
            = ((vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum 
                + (IData)(vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
               [0x31U]);
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v50 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x30U];
        __Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v50 = 1U;
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v51 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x2fU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v52 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x2eU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v53 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x2dU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v54 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x2cU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v55 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x2bU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v56 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x2aU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v57 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x29U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v58 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x28U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v59 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x27U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v60 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x26U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v61 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x25U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v62 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x24U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v63 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x23U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v64 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x22U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v65 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x21U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v66 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x20U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v67 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x1fU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v68 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x1eU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v69 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x1dU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v70 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x1cU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v71 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x1bU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v72 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x1aU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v73 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x19U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v74 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x18U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v75 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x17U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v76 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x16U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v77 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x15U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v78 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x14U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v79 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x13U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v80 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x12U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v81 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x11U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v82 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0x10U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v83 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0xfU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v84 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0xeU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v85 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0xdU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v86 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0xcU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v87 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0xbU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v88 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0xaU];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v89 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [9U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v90 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [8U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v91 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [7U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v92 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [6U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v93 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [5U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v94 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [4U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v95 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [3U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v96 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [2U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v97 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [1U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v98 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q
            [0U];
        __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v99 
            = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout;
    }
    if (__Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v0) {
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[9U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[8U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[7U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[6U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[5U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[4U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[3U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[2U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[1U] = 0U;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v10) {
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[9U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v10;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[8U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v11;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[7U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v12;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[6U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v13;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[5U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v14;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[4U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v15;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[3U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v16;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[2U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v17;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[1U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v18;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q[0U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__Q__v19;
    }
    vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum 
        = __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_10__DOT__sum;
    if (__Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x31U)) {
            vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v50) {
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x31U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v50;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x30U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v51;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x2fU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v52;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x2eU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v53;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x2dU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v54;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x2cU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v55;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x2bU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v56;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x2aU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v57;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x29U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v58;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x28U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v59;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x27U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v60;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x26U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v61;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x25U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v62;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x24U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v63;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x23U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v64;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x22U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v65;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x21U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v66;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x20U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v67;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x1fU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v68;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x1eU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v69;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x1dU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v70;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x1cU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v71;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x1bU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v72;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x1aU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v73;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x19U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v74;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x18U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v75;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x17U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v76;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x16U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v77;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x15U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v78;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x14U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v79;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x13U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v80;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x12U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v81;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x11U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v82;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0x10U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v83;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0xfU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v84;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0xeU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v85;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0xdU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v86;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0xcU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v87;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0xbU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v88;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0xaU] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v89;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[9U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v90;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[8U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v91;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[7U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v92;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[6U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v93;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[5U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v94;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[4U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v95;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[3U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v96;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[2U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v97;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[1U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v98;
        vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q[0U] 
            = __Vdlyvval__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__Q__v99;
    }
    vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum 
        = __Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__win_50__DOT__sum;
    vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_dout 
        = vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__my_rom__DOT__rom_array
        [vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr];
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

VL_INLINE_OPT void Vtrade_MEAN___024root___sequent__TOP__2(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr 
        = vlSelf->__Vdly__trade_MEAN__DOT__Preprocessor_mine__DOT__rom_addr;
}

void Vtrade_MEAN___024root___eval(Vtrade_MEAN___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_MEAN__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_MEAN___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtrade_MEAN___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtrade_MEAN___024root___sequent__TOP__1(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtrade_MEAN___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
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
