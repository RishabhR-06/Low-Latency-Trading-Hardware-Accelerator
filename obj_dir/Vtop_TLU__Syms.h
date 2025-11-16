// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_TLU__SYMS_H_
#define VERILATED_VTOP_TLU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_TLU.h"

// INCLUDE MODULE CLASSES
#include "Vtop_TLU___024root.h"

// SYMS CLASS (contains all model state)
class Vtop_TLU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_TLU* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_TLU___024root             TOP;

    // CONSTRUCTORS
    Vtop_TLU__Syms(VerilatedContext* contextp, const char* namep, Vtop_TLU* modelp);
    ~Vtop_TLU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
