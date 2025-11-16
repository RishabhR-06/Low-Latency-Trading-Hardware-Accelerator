// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtrade_Z.h"
#include "Vtrade_Z__Syms.h"

//============================================================
// Constructors

Vtrade_Z::Vtrade_Z(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtrade_Z__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , buy_signal{vlSymsp->TOP.buy_signal}
    , sell_signal{vlSymsp->TOP.sell_signal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtrade_Z::Vtrade_Z(const char* _vcname__)
    : Vtrade_Z(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtrade_Z::~Vtrade_Z() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtrade_Z___024root___eval_initial(Vtrade_Z___024root* vlSelf);
void Vtrade_Z___024root___eval_settle(Vtrade_Z___024root* vlSelf);
void Vtrade_Z___024root___eval(Vtrade_Z___024root* vlSelf);
#ifdef VL_DEBUG
void Vtrade_Z___024root___eval_debug_assertions(Vtrade_Z___024root* vlSelf);
#endif  // VL_DEBUG
void Vtrade_Z___024root___final(Vtrade_Z___024root* vlSelf);

static void _eval_initial_loop(Vtrade_Z__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtrade_Z___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtrade_Z___024root___eval_settle(&(vlSymsp->TOP));
        Vtrade_Z___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtrade_Z::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtrade_Z::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtrade_Z___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtrade_Z___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtrade_Z::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtrade_Z::final() {
    Vtrade_Z___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtrade_Z::hierName() const { return vlSymsp->name(); }
const char* Vtrade_Z::modelName() const { return "Vtrade_Z"; }
unsigned Vtrade_Z::threads() const { return 1; }
