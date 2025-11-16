// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfixed_sma.h for the primary calling header

#include "verilated.h"

#include "Vfixed_sma__Syms.h"
#include "Vfixed_sma___024root.h"

void Vfixed_sma___024root___ctor_var_reset(Vfixed_sma___024root* vlSelf);

Vfixed_sma___024root::Vfixed_sma___024root(Vfixed_sma__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfixed_sma___024root___ctor_var_reset(this);
}

void Vfixed_sma___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vfixed_sma___024root::~Vfixed_sma___024root() {
}
