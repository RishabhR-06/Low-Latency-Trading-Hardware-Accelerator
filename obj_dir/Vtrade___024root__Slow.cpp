// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade.h for the primary calling header

#include "verilated.h"

#include "Vtrade__Syms.h"
#include "Vtrade___024root.h"

void Vtrade___024root___ctor_var_reset(Vtrade___024root* vlSelf);

Vtrade___024root::Vtrade___024root(Vtrade__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtrade___024root___ctor_var_reset(this);
}

void Vtrade___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtrade___024root::~Vtrade___024root() {
}
