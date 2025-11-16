// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfixed_sma__Syms.h"


VL_ATTR_COLD void Vfixed_sma___024root__trace_init_sub__TOP__0(Vfixed_sma___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+6,"data_in", false,-1, 31,0);
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"rst", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 31,0);
    tracep->pushNamePrefix("fixed_sma ");
    tracep->declBus(c+6,"data_in", false,-1, 31,0);
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+8,"rst", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"Q", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vfixed_sma___024root__trace_init_top(Vfixed_sma___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root__trace_init_top\n"); );
    // Body
    Vfixed_sma___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfixed_sma___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfixed_sma___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfixed_sma___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfixed_sma___024root__trace_register(Vfixed_sma___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vfixed_sma___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vfixed_sma___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vfixed_sma___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfixed_sma___024root__trace_full_sub_0(Vfixed_sma___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfixed_sma___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root__trace_full_top_0\n"); );
    // Init
    Vfixed_sma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfixed_sma___024root*>(voidSelf);
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfixed_sma___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfixed_sma___024root__trace_full_sub_0(Vfixed_sma___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->fixed_sma__DOT__Q[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->fixed_sma__DOT__Q[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->fixed_sma__DOT__Q[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->fixed_sma__DOT__Q[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->fixed_sma__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->data_in),32);
    bufp->fullBit(oldp+7,(vlSelf->clk));
    bufp->fullBit(oldp+8,(vlSelf->rst));
    bufp->fullIData(oldp+9,(vlSelf->data_out),32);
}
