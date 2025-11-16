// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfixed_sma__Syms.h"


void Vfixed_sma___024root__trace_chg_sub_0(Vfixed_sma___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfixed_sma___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root__trace_chg_top_0\n"); );
    // Init
    Vfixed_sma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfixed_sma___024root*>(voidSelf);
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfixed_sma___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vfixed_sma___024root__trace_chg_sub_0(Vfixed_sma___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->fixed_sma__DOT__Q[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->fixed_sma__DOT__Q[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->fixed_sma__DOT__Q[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->fixed_sma__DOT__Q[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->fixed_sma__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgIData(oldp+5,(vlSelf->data_in),32);
    bufp->chgBit(oldp+6,(vlSelf->clk));
    bufp->chgBit(oldp+7,(vlSelf->rst));
    bufp->chgIData(oldp+8,(vlSelf->data_out),32);
}

void Vfixed_sma___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfixed_sma___024root__trace_cleanup\n"); );
    // Init
    Vfixed_sma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfixed_sma___024root*>(voidSelf);
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
