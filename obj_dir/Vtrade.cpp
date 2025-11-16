// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtrade.h"
#include "Vtrade__Syms.h"

//============================================================
// Constructors

Vtrade::Vtrade(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtrade__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , buy_signal{vlSymsp->TOP.buy_signal}
    , sell_signal{vlSymsp->TOP.sell_signal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtrade::Vtrade(const char* _vcname__)
    : Vtrade(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtrade::~Vtrade() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtrade___024root___eval_initial(Vtrade___024root* vlSelf);
void Vtrade___024root___eval_settle(Vtrade___024root* vlSelf);
void Vtrade___024root___eval(Vtrade___024root* vlSelf);
#ifdef VL_DEBUG
void Vtrade___024root___eval_debug_assertions(Vtrade___024root* vlSelf);
#endif  // VL_DEBUG
void Vtrade___024root___final(Vtrade___024root* vlSelf);

static void _eval_initial_loop(Vtrade__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtrade___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtrade___024root___eval_settle(&(vlSymsp->TOP));
        Vtrade___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtrade::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtrade::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtrade___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtrade___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtrade::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtrade::final() {
    Vtrade___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtrade::hierName() const { return vlSymsp->name(); }
const char* Vtrade::modelName() const { return "Vtrade"; }
unsigned Vtrade::threads() const { return 1; }
