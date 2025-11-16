// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSEC_MOM__SYMS_H_
#define VERILATED_VSEC_MOM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsec_mom.h"

// INCLUDE MODULE CLASSES
#include "Vsec_mom___024root.h"

// SYMS CLASS (contains all model state)
class Vsec_mom__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsec_mom* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsec_mom___024root             TOP;

    // CONSTRUCTORS
    Vsec_mom__Syms(VerilatedContext* contextp, const char* namep, Vsec_mom* modelp);
    ~Vsec_mom__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
