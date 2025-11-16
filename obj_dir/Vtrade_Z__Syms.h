// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRADE_Z__SYMS_H_
#define VERILATED_VTRADE_Z__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtrade_Z.h"

// INCLUDE MODULE CLASSES
#include "Vtrade_Z___024root.h"

// SYMS CLASS (contains all model state)
class Vtrade_Z__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtrade_Z* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtrade_Z___024root             TOP;

    // CONSTRUCTORS
    Vtrade_Z__Syms(VerilatedContext* contextp, const char* namep, Vtrade_Z* modelp);
    ~Vtrade_Z__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
