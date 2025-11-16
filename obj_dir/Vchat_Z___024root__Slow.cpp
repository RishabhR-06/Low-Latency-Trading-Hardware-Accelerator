// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchat_Z.h for the primary calling header

#include "verilated.h"

#include "Vchat_Z__Syms.h"
#include "Vchat_Z___024root.h"

void Vchat_Z___024root___ctor_var_reset(Vchat_Z___024root* vlSelf);

Vchat_Z___024root::Vchat_Z___024root(Vchat_Z__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vchat_Z___024root___ctor_var_reset(this);
}

void Vchat_Z___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vchat_Z___024root::~Vchat_Z___024root() {
}
