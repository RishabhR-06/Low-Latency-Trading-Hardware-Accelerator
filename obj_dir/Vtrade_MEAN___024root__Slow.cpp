// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_MEAN.h for the primary calling header

#include "verilated.h"

#include "Vtrade_MEAN__Syms.h"
#include "Vtrade_MEAN___024root.h"

void Vtrade_MEAN___024root___ctor_var_reset(Vtrade_MEAN___024root* vlSelf);

Vtrade_MEAN___024root::Vtrade_MEAN___024root(Vtrade_MEAN__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtrade_MEAN___024root___ctor_var_reset(this);
}

void Vtrade_MEAN___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtrade_MEAN___024root::~Vtrade_MEAN___024root() {
}
