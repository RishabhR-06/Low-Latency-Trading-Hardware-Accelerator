// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vchat_Z.h"
#include "Vchat_Z__Syms.h"

//============================================================
// Constructors

Vchat_Z::Vchat_Z(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vchat_Z__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , buy_signal{vlSymsp->TOP.buy_signal}
    , sell_signal{vlSymsp->TOP.sell_signal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vchat_Z::Vchat_Z(const char* _vcname__)
    : Vchat_Z(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vchat_Z::~Vchat_Z() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vchat_Z___024root___eval_initial(Vchat_Z___024root* vlSelf);
void Vchat_Z___024root___eval_settle(Vchat_Z___024root* vlSelf);
void Vchat_Z___024root___eval(Vchat_Z___024root* vlSelf);
#ifdef VL_DEBUG
void Vchat_Z___024root___eval_debug_assertions(Vchat_Z___024root* vlSelf);
#endif  // VL_DEBUG
void Vchat_Z___024root___final(Vchat_Z___024root* vlSelf);

static void _eval_initial_loop(Vchat_Z__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vchat_Z___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vchat_Z___024root___eval_settle(&(vlSymsp->TOP));
        Vchat_Z___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vchat_Z::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vchat_Z::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vchat_Z___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vchat_Z___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vchat_Z::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vchat_Z::final() {
    Vchat_Z___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vchat_Z::hierName() const { return vlSymsp->name(); }
const char* Vchat_Z::modelName() const { return "Vchat_Z"; }
unsigned Vchat_Z::threads() const { return 1; }
