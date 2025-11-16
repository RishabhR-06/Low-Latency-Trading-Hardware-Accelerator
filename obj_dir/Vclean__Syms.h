// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLEAN__SYMS_H_
#define VERILATED_VCLEAN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vclean.h"

// INCLUDE MODULE CLASSES
#include "Vclean___024root.h"

// SYMS CLASS (contains all model state)
class Vclean__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclean* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclean___024root               TOP;

    // CONSTRUCTORS
    Vclean__Syms(VerilatedContext* contextp, const char* namep, Vclean* modelp);
    ~Vclean__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
