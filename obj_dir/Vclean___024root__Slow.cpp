// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclean.h for the primary calling header

#include "verilated.h"

#include "Vclean__Syms.h"
#include "Vclean___024root.h"

void Vclean___024root___ctor_var_reset(Vclean___024root* vlSelf);

Vclean___024root::Vclean___024root(Vclean__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vclean___024root___ctor_var_reset(this);
}

void Vclean___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vclean___024root::~Vclean___024root() {
}
