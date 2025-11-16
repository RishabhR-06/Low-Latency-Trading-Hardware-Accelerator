// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_TLU.h for the primary calling header

#include "verilated.h"

#include "Vtop_TLU__Syms.h"
#include "Vtop_TLU___024root.h"

void Vtop_TLU___024root___ctor_var_reset(Vtop_TLU___024root* vlSelf);

Vtop_TLU___024root::Vtop_TLU___024root(Vtop_TLU__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_TLU___024root___ctor_var_reset(this);
}

void Vtop_TLU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_TLU___024root::~Vtop_TLU___024root() {
}
