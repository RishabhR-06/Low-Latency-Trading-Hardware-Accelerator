// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTLU__SYMS_H_
#define VERILATED_VTLU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTLU.h"

// INCLUDE MODULE CLASSES
#include "VTLU___024root.h"

// SYMS CLASS (contains all model state)
class VTLU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTLU* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTLU___024root                 TOP;

    // CONSTRUCTORS
    VTLU__Syms(VerilatedContext* contextp, const char* namep, VTLU* modelp);
    ~VTLU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
