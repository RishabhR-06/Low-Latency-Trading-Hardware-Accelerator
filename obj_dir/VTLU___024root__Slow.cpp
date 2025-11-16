// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTLU.h for the primary calling header

#include "verilated.h"

#include "VTLU__Syms.h"
#include "VTLU___024root.h"

void VTLU___024root___ctor_var_reset(VTLU___024root* vlSelf);

VTLU___024root::VTLU___024root(VTLU__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTLU___024root___ctor_var_reset(this);
}

void VTLU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTLU___024root::~VTLU___024root() {
}
