// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtrade_MEAN.h"
#include "Vtrade_MEAN__Syms.h"

//============================================================
// Constructors

Vtrade_MEAN::Vtrade_MEAN(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtrade_MEAN__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , buy_signal{vlSymsp->TOP.buy_signal}
    , sell_signal{vlSymsp->TOP.sell_signal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtrade_MEAN::Vtrade_MEAN(const char* _vcname__)
    : Vtrade_MEAN(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtrade_MEAN::~Vtrade_MEAN() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtrade_MEAN___024root___eval_initial(Vtrade_MEAN___024root* vlSelf);
void Vtrade_MEAN___024root___eval_settle(Vtrade_MEAN___024root* vlSelf);
void Vtrade_MEAN___024root___eval(Vtrade_MEAN___024root* vlSelf);
#ifdef VL_DEBUG
void Vtrade_MEAN___024root___eval_debug_assertions(Vtrade_MEAN___024root* vlSelf);
#endif  // VL_DEBUG
void Vtrade_MEAN___024root___final(Vtrade_MEAN___024root* vlSelf);

static void _eval_initial_loop(Vtrade_MEAN__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtrade_MEAN___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtrade_MEAN___024root___eval_settle(&(vlSymsp->TOP));
        Vtrade_MEAN___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtrade_MEAN::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtrade_MEAN::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtrade_MEAN___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtrade_MEAN___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtrade_MEAN::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtrade_MEAN::final() {
    Vtrade_MEAN___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtrade_MEAN::hierName() const { return vlSymsp->name(); }
const char* Vtrade_MEAN::modelName() const { return "Vtrade_MEAN"; }
unsigned Vtrade_MEAN::threads() const { return 1; }
