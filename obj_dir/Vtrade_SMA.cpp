// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtrade_SMA.h"
#include "Vtrade_SMA__Syms.h"

//============================================================
// Constructors

Vtrade_SMA::Vtrade_SMA(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtrade_SMA__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_5{vlSymsp->TOP.data_5}
    , data_10{vlSymsp->TOP.data_10}
    , data_20{vlSymsp->TOP.data_20}
    , data_50{vlSymsp->TOP.data_50}
    , data_100{vlSymsp->TOP.data_100}
    , data_200{vlSymsp->TOP.data_200}
    , buy_signal{vlSymsp->TOP.buy_signal}
    , sell_signal{vlSymsp->TOP.sell_signal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtrade_SMA::Vtrade_SMA(const char* _vcname__)
    : Vtrade_SMA(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtrade_SMA::~Vtrade_SMA() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtrade_SMA___024root___eval_initial(Vtrade_SMA___024root* vlSelf);
void Vtrade_SMA___024root___eval_settle(Vtrade_SMA___024root* vlSelf);
void Vtrade_SMA___024root___eval(Vtrade_SMA___024root* vlSelf);
#ifdef VL_DEBUG
void Vtrade_SMA___024root___eval_debug_assertions(Vtrade_SMA___024root* vlSelf);
#endif  // VL_DEBUG
void Vtrade_SMA___024root___final(Vtrade_SMA___024root* vlSelf);

static void _eval_initial_loop(Vtrade_SMA__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtrade_SMA___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtrade_SMA___024root___eval_settle(&(vlSymsp->TOP));
        Vtrade_SMA___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtrade_SMA::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtrade_SMA::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtrade_SMA___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtrade_SMA___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtrade_SMA::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtrade_SMA::final() {
    Vtrade_SMA___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtrade_SMA::hierName() const { return vlSymsp->name(); }
const char* Vtrade_SMA::modelName() const { return "Vtrade_SMA"; }
unsigned Vtrade_SMA::threads() const { return 1; }
