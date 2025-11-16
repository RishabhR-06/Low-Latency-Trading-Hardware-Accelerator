// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_SMA.h for the primary calling header

#include "verilated.h"

#include "Vtrade_SMA___024root.h"

VL_INLINE_OPT void Vtrade_SMA___024root___sequent__TOP__0(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v5;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v5;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v6;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v7;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v8;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v9;
    IData/*31:0*/ __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v10;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v10;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v11;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v12;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v13;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v14;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v15;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v16;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v17;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v18;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v19;
    IData/*31:0*/ __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v20;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v20;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v21;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v22;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v23;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v24;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v25;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v26;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v27;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v28;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v29;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v30;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v31;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v32;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v33;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v34;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v35;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v36;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v37;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v38;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v39;
    IData/*31:0*/ __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v50;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v50;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v51;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v52;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v53;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v54;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v55;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v56;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v57;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v58;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v59;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v60;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v61;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v62;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v63;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v64;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v65;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v66;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v67;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v68;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v69;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v70;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v71;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v72;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v73;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v74;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v75;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v76;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v77;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v78;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v79;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v80;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v81;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v82;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v83;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v84;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v85;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v86;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v87;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v88;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v89;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v90;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v91;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v92;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v93;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v94;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v95;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v96;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v97;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v98;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v99;
    IData/*31:0*/ __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v100;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v100;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v101;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v102;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v103;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v104;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v105;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v106;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v107;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v108;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v109;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v110;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v111;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v112;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v113;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v114;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v115;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v116;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v117;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v118;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v119;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v120;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v121;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v122;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v123;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v124;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v125;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v126;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v127;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v128;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v129;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v130;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v131;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v132;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v133;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v134;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v135;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v136;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v137;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v138;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v139;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v140;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v141;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v142;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v143;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v144;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v145;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v146;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v147;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v148;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v149;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v150;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v151;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v152;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v153;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v154;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v155;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v156;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v157;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v158;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v159;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v160;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v161;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v162;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v163;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v164;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v165;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v166;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v167;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v168;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v169;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v170;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v171;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v172;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v173;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v174;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v175;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v176;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v177;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v178;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v179;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v180;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v181;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v182;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v183;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v184;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v185;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v186;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v187;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v188;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v189;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v190;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v191;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v192;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v193;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v194;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v195;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v196;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v197;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v198;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v199;
    IData/*31:0*/ __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v0;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v200;
    CData/*0:0*/ __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v200;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v201;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v202;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v203;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v204;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v205;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v206;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v207;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v208;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v209;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v210;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v211;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v212;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v213;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v214;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v215;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v216;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v217;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v218;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v219;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v220;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v221;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v222;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v223;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v224;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v225;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v226;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v227;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v228;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v229;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v230;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v231;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v232;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v233;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v234;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v235;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v236;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v237;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v238;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v239;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v240;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v241;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v242;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v243;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v244;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v245;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v246;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v247;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v248;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v249;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v250;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v251;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v252;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v253;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v254;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v255;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v256;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v257;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v258;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v259;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v260;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v261;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v262;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v263;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v264;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v265;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v266;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v267;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v268;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v269;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v270;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v271;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v272;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v273;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v274;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v275;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v276;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v277;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v278;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v279;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v280;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v281;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v282;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v283;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v284;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v285;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v286;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v287;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v288;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v289;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v290;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v291;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v292;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v293;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v294;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v295;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v296;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v297;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v298;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v299;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v300;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v301;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v302;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v303;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v304;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v305;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v306;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v307;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v308;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v309;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v310;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v311;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v312;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v313;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v314;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v315;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v316;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v317;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v318;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v319;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v320;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v321;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v322;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v323;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v324;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v325;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v326;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v327;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v328;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v329;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v330;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v331;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v332;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v333;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v334;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v335;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v336;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v337;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v338;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v339;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v340;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v341;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v342;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v343;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v344;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v345;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v346;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v347;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v348;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v349;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v350;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v351;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v352;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v353;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v354;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v355;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v356;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v357;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v358;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v359;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v360;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v361;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v362;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v363;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v364;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v365;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v366;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v367;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v368;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v369;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v370;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v371;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v372;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v373;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v374;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v375;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v376;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v377;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v378;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v379;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v380;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v381;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v382;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v383;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v384;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v385;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v386;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v387;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v388;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v389;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v390;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v391;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v392;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v393;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v394;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v395;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v396;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v397;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v398;
    CData/*7:0*/ __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v399;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum 
        = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum;
    __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum 
        = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v5 = 0U;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v10 = 0U;
    __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum 
        = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v20 = 0U;
    __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum 
        = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v50 = 0U;
    __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum 
        = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v100 = 0U;
    __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum 
        = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v0 = 0U;
    __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v200 = 0U;
    vlSelf->trade_SMA__DOT__confluence_falling = ((~ (IData)(vlSelf->rst)) 
                                                  & (3U 
                                                     <= 
                                                     (3U 
                                                      & (((((((0xffU 
                                                               & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum, (IData)(5U))) 
                                                              < (IData)(vlSelf->trade_SMA__DOT__prev_5)) 
                                                             + 
                                                             ((0xffU 
                                                               & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU))) 
                                                              < (IData)(vlSelf->trade_SMA__DOT__prev_10))) 
                                                            + 
                                                            ((0xffU 
                                                              & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))) 
                                                             < (IData)(vlSelf->trade_SMA__DOT__prev_20))) 
                                                           + 
                                                           ((0xffU 
                                                             & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U))) 
                                                            < (IData)(vlSelf->trade_SMA__DOT__prev_50))) 
                                                          + 
                                                          ((0xffU 
                                                            & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum, (IData)(0x64U))) 
                                                           < (IData)(vlSelf->trade_SMA__DOT__prev_100))) 
                                                         + 
                                                         ((0xffU 
                                                           & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum, (IData)(0xc8U))) 
                                                          < (IData)(vlSelf->trade_SMA__DOT__prev_200))))));
    vlSelf->trade_SMA__DOT__confluence_rising = ((~ (IData)(vlSelf->rst)) 
                                                 & (3U 
                                                    <= 
                                                    (3U 
                                                     & (((((((0xffU 
                                                              & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum, (IData)(5U))) 
                                                             > (IData)(vlSelf->trade_SMA__DOT__prev_5)) 
                                                            + 
                                                            ((0xffU 
                                                              & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU))) 
                                                             > (IData)(vlSelf->trade_SMA__DOT__prev_10))) 
                                                           + 
                                                           ((0xffU 
                                                             & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))) 
                                                            > (IData)(vlSelf->trade_SMA__DOT__prev_20))) 
                                                          + 
                                                          ((0xffU 
                                                            & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U))) 
                                                           > (IData)(vlSelf->trade_SMA__DOT__prev_50))) 
                                                         + 
                                                         ((0xffU 
                                                           & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum, (IData)(0x64U))) 
                                                          > (IData)(vlSelf->trade_SMA__DOT__prev_100))) 
                                                        + 
                                                        ((0xffU 
                                                          & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum, (IData)(0xc8U))) 
                                                         > (IData)(vlSelf->trade_SMA__DOT__prev_200))))));
    if (vlSelf->rst) {
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum = 0U;
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v0 = 1U;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum = 0U;
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v0 = 1U;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum = 0U;
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v0 = 1U;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum = 0U;
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v0 = 1U;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum = 0U;
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v0 = 1U;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum = 0U;
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v0 = 1U;
        vlSelf->trade_SMA__DOT__prev_100 = 0U;
        vlSelf->trade_SMA__DOT__prev_200 = 0U;
        vlSelf->trade_SMA__DOT__prev_5 = 0U;
        vlSelf->trade_SMA__DOT__prev_10 = 0U;
        vlSelf->trade_SMA__DOT__prev_20 = 0U;
        vlSelf->trade_SMA__DOT__prev_50 = 0U;
    } else {
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum 
            = ((vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum 
                + (IData)(vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q
               [4U]);
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v5 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q
            [3U];
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v5 = 1U;
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v6 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q
            [2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v7 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q
            [1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v8 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q
            [0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v9 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum 
            = ((vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum 
                + (IData)(vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
               [9U]);
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v10 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [8U];
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v10 = 1U;
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v11 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [7U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v12 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [6U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v13 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [5U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v14 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [4U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v15 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [3U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v16 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v17 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v18 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q
            [0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v19 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum 
            = ((vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum 
                + (IData)(vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
               [0x13U]);
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v20 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0x12U];
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v20 = 1U;
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v21 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0x11U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v22 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0x10U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v23 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0xfU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v24 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0xeU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v25 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0xdU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v26 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0xcU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v27 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0xbU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v28 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0xaU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v29 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [9U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v30 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [8U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v31 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [7U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v32 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [6U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v33 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [5U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v34 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [4U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v35 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [3U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v36 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v37 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v38 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q
            [0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v39 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum 
            = ((vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum 
                + (IData)(vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
               [0x31U]);
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v50 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x30U];
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v50 = 1U;
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v51 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x2fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v52 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x2eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v53 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x2dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v54 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x2cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v55 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x2bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v56 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x2aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v57 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x29U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v58 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x28U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v59 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x27U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v60 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x26U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v61 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x25U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v62 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x24U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v63 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x23U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v64 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x22U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v65 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x21U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v66 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x20U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v67 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x1fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v68 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x1eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v69 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x1dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v70 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x1cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v71 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x1bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v72 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x1aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v73 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x19U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v74 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x18U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v75 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x17U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v76 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x16U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v77 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x15U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v78 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x14U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v79 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x13U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v80 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x12U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v81 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x11U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v82 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0x10U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v83 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0xfU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v84 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0xeU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v85 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0xdU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v86 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0xcU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v87 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0xbU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v88 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0xaU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v89 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [9U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v90 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [8U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v91 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [7U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v92 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [6U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v93 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [5U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v94 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [4U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v95 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [3U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v96 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v97 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v98 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q
            [0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v99 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum 
            = ((vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum 
                + (IData)(vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
               [0x63U]);
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v100 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x62U];
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v100 = 1U;
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v101 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x61U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v102 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x60U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v103 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x5fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v104 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x5eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v105 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x5dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v106 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x5cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v107 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x5bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v108 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x5aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v109 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x59U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v110 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x58U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v111 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x57U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v112 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x56U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v113 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x55U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v114 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x54U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v115 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x53U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v116 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x52U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v117 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x51U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v118 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x50U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v119 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x4fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v120 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x4eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v121 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x4dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v122 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x4cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v123 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x4bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v124 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x4aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v125 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x49U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v126 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x48U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v127 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x47U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v128 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x46U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v129 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x45U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v130 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x44U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v131 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x43U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v132 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x42U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v133 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x41U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v134 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x40U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v135 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x3fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v136 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x3eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v137 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x3dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v138 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x3cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v139 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x3bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v140 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x3aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v141 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x39U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v142 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x38U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v143 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x37U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v144 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x36U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v145 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x35U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v146 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x34U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v147 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x33U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v148 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x32U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v149 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x31U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v150 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x30U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v151 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x2fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v152 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x2eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v153 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x2dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v154 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x2cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v155 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x2bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v156 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x2aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v157 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x29U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v158 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x28U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v159 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x27U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v160 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x26U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v161 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x25U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v162 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x24U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v163 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x23U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v164 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x22U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v165 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x21U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v166 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x20U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v167 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x1fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v168 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x1eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v169 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x1dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v170 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x1cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v171 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x1bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v172 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x1aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v173 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x19U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v174 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x18U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v175 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x17U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v176 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x16U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v177 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x15U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v178 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x14U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v179 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x13U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v180 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x12U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v181 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x11U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v182 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0x10U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v183 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0xfU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v184 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0xeU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v185 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0xdU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v186 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0xcU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v187 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0xbU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v188 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0xaU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v189 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [9U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v190 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [8U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v191 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [7U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v192 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [6U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v193 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [5U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v194 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [4U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v195 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [3U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v196 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v197 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v198 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q
            [0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v199 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout;
        __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum 
            = ((vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum 
                + (IData)(vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout)) 
               - vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
               [0xc7U]);
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v200 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xc6U];
        __Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v200 = 1U;
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v201 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xc5U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v202 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xc4U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v203 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xc3U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v204 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xc2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v205 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xc1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v206 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xc0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v207 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xbfU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v208 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xbeU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v209 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xbdU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v210 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xbcU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v211 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xbbU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v212 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xbaU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v213 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb9U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v214 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb8U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v215 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb7U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v216 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb6U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v217 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb5U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v218 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb4U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v219 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb3U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v220 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v221 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v222 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xb0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v223 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xafU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v224 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xaeU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v225 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xadU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v226 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xacU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v227 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xabU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v228 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xaaU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v229 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa9U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v230 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa8U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v231 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa7U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v232 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa6U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v233 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa5U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v234 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa4U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v235 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa3U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v236 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v237 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v238 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xa0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v239 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x9fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v240 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x9eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v241 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x9dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v242 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x9cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v243 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x9bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v244 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x9aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v245 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x99U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v246 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x98U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v247 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x97U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v248 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x96U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v249 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x95U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v250 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x94U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v251 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x93U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v252 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x92U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v253 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x91U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v254 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x90U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v255 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x8fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v256 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x8eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v257 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x8dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v258 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x8cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v259 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x8bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v260 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x8aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v261 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x89U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v262 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x88U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v263 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x87U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v264 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x86U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v265 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x85U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v266 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x84U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v267 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x83U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v268 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x82U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v269 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x81U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v270 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x80U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v271 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x7fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v272 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x7eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v273 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x7dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v274 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x7cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v275 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x7bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v276 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x7aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v277 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x79U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v278 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x78U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v279 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x77U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v280 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x76U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v281 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x75U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v282 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x74U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v283 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x73U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v284 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x72U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v285 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x71U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v286 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x70U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v287 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x6fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v288 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x6eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v289 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x6dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v290 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x6cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v291 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x6bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v292 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x6aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v293 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x69U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v294 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x68U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v295 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x67U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v296 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x66U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v297 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x65U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v298 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x64U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v299 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x63U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v300 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x62U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v301 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x61U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v302 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x60U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v303 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x5fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v304 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x5eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v305 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x5dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v306 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x5cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v307 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x5bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v308 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x5aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v309 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x59U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v310 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x58U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v311 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x57U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v312 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x56U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v313 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x55U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v314 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x54U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v315 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x53U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v316 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x52U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v317 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x51U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v318 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x50U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v319 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x4fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v320 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x4eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v321 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x4dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v322 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x4cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v323 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x4bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v324 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x4aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v325 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x49U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v326 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x48U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v327 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x47U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v328 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x46U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v329 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x45U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v330 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x44U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v331 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x43U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v332 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x42U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v333 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x41U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v334 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x40U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v335 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x3fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v336 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x3eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v337 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x3dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v338 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x3cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v339 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x3bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v340 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x3aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v341 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x39U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v342 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x38U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v343 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x37U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v344 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x36U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v345 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x35U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v346 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x34U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v347 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x33U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v348 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x32U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v349 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x31U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v350 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x30U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v351 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x2fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v352 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x2eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v353 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x2dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v354 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x2cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v355 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x2bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v356 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x2aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v357 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x29U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v358 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x28U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v359 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x27U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v360 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x26U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v361 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x25U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v362 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x24U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v363 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x23U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v364 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x22U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v365 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x21U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v366 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x20U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v367 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x1fU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v368 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x1eU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v369 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x1dU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v370 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x1cU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v371 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x1bU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v372 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x1aU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v373 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x19U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v374 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x18U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v375 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x17U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v376 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x16U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v377 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x15U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v378 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x14U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v379 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x13U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v380 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x12U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v381 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x11U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v382 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0x10U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v383 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xfU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v384 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xeU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v385 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xdU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v386 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xcU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v387 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xbU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v388 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0xaU];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v389 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [9U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v390 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [8U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v391 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [7U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v392 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [6U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v393 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [5U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v394 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [4U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v395 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [3U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v396 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [2U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v397 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [1U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v398 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q
            [0U];
        __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v399 
            = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout;
        vlSelf->trade_SMA__DOT__prev_100 = (0xffU & 
                                            VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum, (IData)(0x64U)));
        vlSelf->trade_SMA__DOT__prev_200 = (0xffU & 
                                            VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum, (IData)(0xc8U)));
        vlSelf->trade_SMA__DOT__prev_5 = (0xffU & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum, (IData)(5U)));
        vlSelf->trade_SMA__DOT__prev_10 = (0xffU & 
                                           VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU)));
        vlSelf->trade_SMA__DOT__prev_20 = (0xffU & 
                                           VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U)));
        vlSelf->trade_SMA__DOT__prev_50 = (0xffU & 
                                           VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U)));
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v0) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[4U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[3U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[2U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[1U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v5) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v5;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v6;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v7;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v8;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q[0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__Q__v9;
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v0) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[9U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[8U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[7U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[6U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[5U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[4U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[3U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[2U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[1U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v10) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[9U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v10;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[8U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v11;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[7U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v12;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[6U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v13;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[5U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v14;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v15;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v16;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v17;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v18;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q[0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__Q__v19;
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v0) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0x13U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0x12U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0x11U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0x10U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xfU] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xeU] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xdU] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xcU] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xbU] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xaU] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[9U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[8U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[7U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[6U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[5U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[4U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[3U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[2U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[1U] = 0U;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0U] = 0U;
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v20) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0x13U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v20;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0x12U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v21;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0x11U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v22;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0x10U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v23;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xfU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v24;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xeU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v25;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xdU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v26;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xcU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v27;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xbU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v28;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0xaU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v29;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[9U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v30;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[8U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v31;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[7U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v32;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[6U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v33;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[5U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v34;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v35;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v36;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v37;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v38;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q[0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__Q__v39;
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x31U)) {
            vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v50) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x31U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v50;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x30U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v51;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x2fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v52;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x2eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v53;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x2dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v54;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x2cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v55;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x2bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v56;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x2aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v57;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x29U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v58;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x28U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v59;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x27U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v60;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x26U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v61;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x25U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v62;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x24U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v63;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x23U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v64;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x22U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v65;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x21U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v66;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x20U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v67;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x1fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v68;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x1eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v69;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x1dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v70;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x1cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v71;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x1bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v72;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x1aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v73;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x19U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v74;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x18U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v75;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x17U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v76;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x16U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v77;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x15U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v78;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x14U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v79;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x13U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v80;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x12U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v81;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x11U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v82;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0x10U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v83;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0xfU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v84;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0xeU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v85;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0xdU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v86;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0xcU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v87;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0xbU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v88;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0xaU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v89;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[9U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v90;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[8U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v91;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[7U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v92;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[6U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v93;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[5U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v94;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v95;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v96;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v97;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v98;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q[0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__Q__v99;
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x63U)) {
            vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v100) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x63U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v100;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x62U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v101;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x61U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v102;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x60U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v103;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x5fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v104;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x5eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v105;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x5dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v106;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x5cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v107;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x5bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v108;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x5aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v109;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x59U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v110;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x58U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v111;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x57U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v112;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x56U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v113;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x55U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v114;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x54U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v115;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x53U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v116;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x52U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v117;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x51U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v118;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x50U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v119;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x4fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v120;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x4eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v121;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x4dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v122;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x4cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v123;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x4bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v124;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x4aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v125;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x49U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v126;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x48U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v127;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x47U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v128;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x46U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v129;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x45U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v130;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x44U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v131;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x43U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v132;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x42U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v133;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x41U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v134;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x40U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v135;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x3fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v136;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x3eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v137;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x3dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v138;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x3cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v139;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x3bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v140;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x3aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v141;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x39U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v142;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x38U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v143;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x37U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v144;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x36U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v145;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x35U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v146;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x34U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v147;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x33U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v148;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x32U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v149;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x31U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v150;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x30U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v151;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x2fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v152;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x2eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v153;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x2dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v154;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x2cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v155;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x2bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v156;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x2aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v157;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x29U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v158;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x28U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v159;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x27U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v160;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x26U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v161;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x25U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v162;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x24U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v163;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x23U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v164;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x22U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v165;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x21U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v166;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x20U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v167;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x1fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v168;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x1eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v169;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x1dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v170;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x1cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v171;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x1bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v172;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x1aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v173;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x19U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v174;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x18U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v175;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x17U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v176;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x16U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v177;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x15U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v178;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x14U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v179;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x13U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v180;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x12U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v181;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x11U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v182;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0x10U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v183;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0xfU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v184;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0xeU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v185;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0xdU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v186;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0xcU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v187;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0xbU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v188;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0xaU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v189;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[9U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v190;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[8U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v191;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[7U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v192;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[6U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v193;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[5U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v194;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v195;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v196;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v197;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v198;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q[0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__Q__v199;
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xc7U)) {
            vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v200) {
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xc7U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v200;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xc6U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v201;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xc5U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v202;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xc4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v203;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xc3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v204;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xc2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v205;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xc1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v206;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xc0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v207;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xbfU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v208;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xbeU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v209;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xbdU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v210;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xbcU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v211;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xbbU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v212;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xbaU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v213;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb9U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v214;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb8U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v215;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb7U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v216;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb6U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v217;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb5U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v218;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v219;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v220;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v221;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v222;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xb0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v223;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xafU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v224;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xaeU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v225;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xadU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v226;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xacU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v227;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xabU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v228;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xaaU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v229;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa9U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v230;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa8U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v231;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa7U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v232;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa6U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v233;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa5U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v234;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v235;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v236;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v237;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v238;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xa0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v239;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x9fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v240;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x9eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v241;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x9dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v242;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x9cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v243;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x9bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v244;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x9aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v245;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x99U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v246;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x98U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v247;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x97U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v248;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x96U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v249;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x95U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v250;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x94U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v251;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x93U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v252;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x92U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v253;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x91U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v254;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x90U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v255;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x8fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v256;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x8eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v257;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x8dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v258;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x8cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v259;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x8bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v260;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x8aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v261;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x89U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v262;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x88U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v263;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x87U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v264;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x86U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v265;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x85U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v266;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x84U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v267;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x83U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v268;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x82U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v269;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x81U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v270;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x80U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v271;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x7fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v272;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x7eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v273;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x7dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v274;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x7cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v275;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x7bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v276;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x7aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v277;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x79U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v278;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x78U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v279;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x77U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v280;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x76U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v281;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x75U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v282;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x74U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v283;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x73U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v284;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x72U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v285;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x71U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v286;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x70U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v287;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x6fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v288;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x6eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v289;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x6dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v290;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x6cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v291;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x6bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v292;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x6aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v293;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x69U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v294;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x68U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v295;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x67U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v296;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x66U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v297;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x65U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v298;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x64U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v299;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x63U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v300;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x62U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v301;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x61U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v302;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x60U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v303;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x5fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v304;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x5eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v305;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x5dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v306;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x5cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v307;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x5bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v308;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x5aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v309;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x59U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v310;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x58U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v311;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x57U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v312;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x56U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v313;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x55U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v314;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x54U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v315;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x53U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v316;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x52U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v317;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x51U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v318;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x50U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v319;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x4fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v320;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x4eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v321;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x4dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v322;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x4cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v323;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x4bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v324;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x4aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v325;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x49U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v326;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x48U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v327;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x47U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v328;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x46U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v329;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x45U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v330;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x44U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v331;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x43U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v332;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x42U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v333;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x41U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v334;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x40U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v335;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x3fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v336;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x3eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v337;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x3dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v338;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x3cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v339;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x3bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v340;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x3aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v341;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x39U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v342;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x38U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v343;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x37U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v344;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x36U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v345;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x35U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v346;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x34U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v347;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x33U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v348;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x32U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v349;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x31U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v350;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x30U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v351;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x2fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v352;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x2eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v353;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x2dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v354;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x2cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v355;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x2bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v356;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x2aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v357;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x29U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v358;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x28U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v359;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x27U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v360;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x26U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v361;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x25U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v362;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x24U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v363;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x23U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v364;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x22U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v365;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x21U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v366;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x20U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v367;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x1fU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v368;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x1eU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v369;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x1dU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v370;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x1cU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v371;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x1bU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v372;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x1aU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v373;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x19U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v374;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x18U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v375;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x17U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v376;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x16U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v377;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x15U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v378;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x14U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v379;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x13U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v380;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x12U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v381;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x11U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v382;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0x10U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v383;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xfU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v384;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xeU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v385;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xdU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v386;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xcU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v387;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xbU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v388;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0xaU] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v389;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[9U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v390;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[8U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v391;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[7U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v392;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[6U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v393;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[5U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v394;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[4U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v395;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[3U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v396;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[2U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v397;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[1U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v398;
        vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q[0U] 
            = __Vdlyvval__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__Q__v399;
    }
    vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_dout 
        = vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__my_rom__DOT__rom_array
        [vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_addr];
    vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum 
        = __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_100__DOT__sum;
    vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum 
        = __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_200__DOT__sum;
    vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum 
        = __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum;
    vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum 
        = __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum;
    vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum 
        = __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum;
    vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum 
        = __Vdly__trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum;
    vlSelf->buy_signal = ((0x4dU < (0x1ffU & (((0xffU 
                                                & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum, (IData)(5U))) 
                                               - (0xffU 
                                                  & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U)))) 
                                              + ((0xffU 
                                                  & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU))) 
                                                 - 
                                                 (0xffU 
                                                  & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U))))))) 
                          & (IData)(vlSelf->trade_SMA__DOT__confluence_rising));
    vlSelf->sell_signal = ((0x4dU < (0x1ffU & (((0xffU 
                                                 & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_20__DOT__sum, (IData)(0x14U))) 
                                                - (0xffU 
                                                   & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_5__DOT__sum, (IData)(5U)))) 
                                               + ((0xffU 
                                                   & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_50__DOT__sum, (IData)(0x32U))) 
                                                  - 
                                                  (0xffU 
                                                   & VL_DIV_III(32, vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__win_10__DOT__sum, (IData)(0xaU))))))) 
                           & (IData)(vlSelf->trade_SMA__DOT__confluence_falling));
}

VL_INLINE_OPT void Vtrade_SMA___024root___sequent__TOP__1(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_addr 
        = ((IData)(vlSelf->rst) ? 0U : (0xffffU & ((IData)(1U) 
                                                   + (IData)(vlSelf->trade_SMA__DOT__SMA_preprocessor_mine__DOT__rom_addr))));
}

void Vtrade_SMA___024root___eval(Vtrade_SMA___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtrade_SMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtrade_SMA___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtrade_SMA___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtrade_SMA___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
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
