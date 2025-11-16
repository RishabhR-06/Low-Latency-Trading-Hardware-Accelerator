// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTLU.h"
#include "VTLU__Syms.h"

//============================================================
// Constructors

VTLU::VTLU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTLU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , buy_signal{vlSymsp->TOP.buy_signal}
    , sell_signal{vlSymsp->TOP.sell_signal}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTLU::VTLU(const char* _vcname__)
    : VTLU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTLU::~VTLU() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTLU___024root___eval_initial(VTLU___024root* vlSelf);
void VTLU___024root___eval_settle(VTLU___024root* vlSelf);
void VTLU___024root___eval(VTLU___024root* vlSelf);
#ifdef VL_DEBUG
void VTLU___024root___eval_debug_assertions(VTLU___024root* vlSelf);
#endif  // VL_DEBUG
void VTLU___024root___final(VTLU___024root* vlSelf);

static void _eval_initial_loop(VTLU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTLU___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTLU___024root___eval_settle(&(vlSymsp->TOP));
        VTLU___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTLU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTLU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTLU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTLU___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VTLU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTLU::final() {
    VTLU___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTLU::hierName() const { return vlSymsp->name(); }
const char* VTLU::modelName() const { return "VTLU"; }
unsigned VTLU::threads() const { return 1; }
