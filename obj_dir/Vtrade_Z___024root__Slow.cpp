// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_Z.h for the primary calling header

#include "verilated.h"

#include "Vtrade_Z__Syms.h"
#include "Vtrade_Z___024root.h"

void Vtrade_Z___024root___ctor_var_reset(Vtrade_Z___024root* vlSelf);

Vtrade_Z___024root::Vtrade_Z___024root(Vtrade_Z__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtrade_Z___024root___ctor_var_reset(this);
}

void Vtrade_Z___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtrade_Z___024root::~Vtrade_Z___024root() {
}
