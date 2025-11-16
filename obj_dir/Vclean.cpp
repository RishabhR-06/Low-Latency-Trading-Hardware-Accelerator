// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclean.h"
#include "Vclean__Syms.h"

//============================================================
// Constructors

Vclean::Vclean(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclean__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_5{vlSymsp->TOP.data_5}
    , data_10{vlSymsp->TOP.data_10}
    , data_20{vlSymsp->TOP.data_20}
    , data_50{vlSymsp->TOP.data_50}
    , data_100{vlSymsp->TOP.data_100}
    , data_200{vlSymsp->TOP.data_200}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclean::Vclean(const char* _vcname__)
    : Vclean(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclean::~Vclean() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vclean___024root___eval_initial(Vclean___024root* vlSelf);
void Vclean___024root___eval_settle(Vclean___024root* vlSelf);
void Vclean___024root___eval(Vclean___024root* vlSelf);
#ifdef VL_DEBUG
void Vclean___024root___eval_debug_assertions(Vclean___024root* vlSelf);
#endif  // VL_DEBUG
void Vclean___024root___final(Vclean___024root* vlSelf);

static void _eval_initial_loop(Vclean__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vclean___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vclean___024root___eval_settle(&(vlSymsp->TOP));
        Vclean___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vclean::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclean::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclean___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vclean___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vclean::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vclean::final() {
    Vclean___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclean::hierName() const { return vlSymsp->name(); }
const char* Vclean::modelName() const { return "Vclean"; }
unsigned Vclean::threads() const { return 1; }
