// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRADE_SMA__SYMS_H_
#define VERILATED_VTRADE_SMA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtrade_SMA.h"

// INCLUDE MODULE CLASSES
#include "Vtrade_SMA___024root.h"

// SYMS CLASS (contains all model state)
class Vtrade_SMA__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtrade_SMA* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtrade_SMA___024root           TOP;

    // CONSTRUCTORS
    Vtrade_SMA__Syms(VerilatedContext* contextp, const char* namep, Vtrade_SMA* modelp);
    ~Vtrade_SMA__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
