// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsec_mom.h for the primary calling header

#include "verilated.h"

#include "Vsec_mom__Syms.h"
#include "Vsec_mom___024root.h"

void Vsec_mom___024root___ctor_var_reset(Vsec_mom___024root* vlSelf);

Vsec_mom___024root::Vsec_mom___024root(Vsec_mom__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsec_mom___024root___ctor_var_reset(this);
}

void Vsec_mom___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsec_mom___024root::~Vsec_mom___024root() {
}
