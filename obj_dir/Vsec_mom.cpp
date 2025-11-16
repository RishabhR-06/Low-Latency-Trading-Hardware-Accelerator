// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsec_mom.h"
#include "Vsec_mom__Syms.h"

//============================================================
// Constructors

Vsec_mom::Vsec_mom(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsec_mom__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , data_in{vlSymsp->TOP.data_in}
    , rst{vlSymsp->TOP.rst}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsec_mom::Vsec_mom(const char* _vcname__)
    : Vsec_mom(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsec_mom::~Vsec_mom() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsec_mom___024root___eval_initial(Vsec_mom___024root* vlSelf);
void Vsec_mom___024root___eval_settle(Vsec_mom___024root* vlSelf);
void Vsec_mom___024root___eval(Vsec_mom___024root* vlSelf);
#ifdef VL_DEBUG
void Vsec_mom___024root___eval_debug_assertions(Vsec_mom___024root* vlSelf);
#endif  // VL_DEBUG
void Vsec_mom___024root___final(Vsec_mom___024root* vlSelf);

static void _eval_initial_loop(Vsec_mom__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsec_mom___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsec_mom___024root___eval_settle(&(vlSymsp->TOP));
        Vsec_mom___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsec_mom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsec_mom::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsec_mom___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsec_mom___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vsec_mom::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsec_mom::final() {
    Vsec_mom___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsec_mom::hierName() const { return vlSymsp->name(); }
const char* Vsec_mom::modelName() const { return "Vsec_mom"; }
unsigned Vsec_mom::threads() const { return 1; }
