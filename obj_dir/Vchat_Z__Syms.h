// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCHAT_Z__SYMS_H_
#define VERILATED_VCHAT_Z__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vchat_Z.h"

// INCLUDE MODULE CLASSES
#include "Vchat_Z___024root.h"

// SYMS CLASS (contains all model state)
class Vchat_Z__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vchat_Z* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vchat_Z___024root              TOP;

    // CONSTRUCTORS
    Vchat_Z__Syms(VerilatedContext* contextp, const char* namep, Vchat_Z* modelp);
    ~Vchat_Z__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
