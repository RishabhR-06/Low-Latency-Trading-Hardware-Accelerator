// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfixed_sma.h"
#include "Vfixed_sma__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfixed_sma::Vfixed_sma(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfixed_sma__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfixed_sma::Vfixed_sma(const char* _vcname__)
    : Vfixed_sma(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfixed_sma::~Vfixed_sma() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vfixed_sma___024root___eval_initial(Vfixed_sma___024root* vlSelf);
void Vfixed_sma___024root___eval_settle(Vfixed_sma___024root* vlSelf);
void Vfixed_sma___024root___eval(Vfixed_sma___024root* vlSelf);
#ifdef VL_DEBUG
void Vfixed_sma___024root___eval_debug_assertions(Vfixed_sma___024root* vlSelf);
#endif  // VL_DEBUG
void Vfixed_sma___024root___final(Vfixed_sma___024root* vlSelf);

static void _eval_initial_loop(Vfixed_sma__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vfixed_sma___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vfixed_sma___024root___eval_settle(&(vlSymsp->TOP));
        Vfixed_sma___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vfixed_sma::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfixed_sma::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfixed_sma___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vfixed_sma___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vfixed_sma::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vfixed_sma::final() {
    Vfixed_sma___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfixed_sma::hierName() const { return vlSymsp->name(); }
const char* Vfixed_sma::modelName() const { return "Vfixed_sma"; }
unsigned Vfixed_sma::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vfixed_sma::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfixed_sma___024root__trace_init_top(Vfixed_sma___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfixed_sma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfixed_sma___024root*>(voidSelf);
    Vfixed_sma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vfixed_sma___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vfixed_sma___024root__trace_register(Vfixed_sma___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfixed_sma::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfixed_sma___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
