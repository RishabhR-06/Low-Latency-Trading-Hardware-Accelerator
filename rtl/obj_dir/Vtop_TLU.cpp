// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_TLU.h"
#include "Vtop_TLU__Syms.h"

//============================================================
// Constructors

Vtop_TLU::Vtop_TLU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_TLU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , buy_signal{vlSymsp->TOP.buy_signal}
    , sell_signal{vlSymsp->TOP.sell_signal}
    , data_valid{vlSymsp->TOP.data_valid}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_TLU::Vtop_TLU(const char* _vcname__)
    : Vtop_TLU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_TLU::~Vtop_TLU() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop_TLU___024root___eval_initial(Vtop_TLU___024root* vlSelf);
void Vtop_TLU___024root___eval_settle(Vtop_TLU___024root* vlSelf);
void Vtop_TLU___024root___eval(Vtop_TLU___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop_TLU___024root___eval_debug_assertions(Vtop_TLU___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_TLU___024root___final(Vtop_TLU___024root* vlSelf);

static void _eval_initial_loop(Vtop_TLU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop_TLU___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop_TLU___024root___eval_settle(&(vlSymsp->TOP));
        Vtop_TLU___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtop_TLU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_TLU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_TLU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop_TLU___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtop_TLU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop_TLU::final() {
    Vtop_TLU___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_TLU::hierName() const { return vlSymsp->name(); }
const char* Vtop_TLU::modelName() const { return "Vtop_TLU"; }
unsigned Vtop_TLU::threads() const { return 1; }
