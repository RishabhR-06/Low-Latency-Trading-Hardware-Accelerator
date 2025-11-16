// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtrade_SMA.h for the primary calling header

#include "verilated.h"

#include "Vtrade_SMA__Syms.h"
#include "Vtrade_SMA___024root.h"

void Vtrade_SMA___024root___ctor_var_reset(Vtrade_SMA___024root* vlSelf);

Vtrade_SMA___024root::Vtrade_SMA___024root(Vtrade_SMA__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtrade_SMA___024root___ctor_var_reset(this);
}

void Vtrade_SMA___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtrade_SMA___024root::~Vtrade_SMA___024root() {
}
