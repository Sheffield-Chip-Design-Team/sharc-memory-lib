// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ block_ram_model_wtb__DOT__clk;
    CData/*7:0*/ block_ram_model_wtb__DOT__addr;
    CData/*0:0*/ block_ram_model_wtb__DOT__en;
    CData/*0:0*/ block_ram_model_wtb__DOT__wr_en;
    CData/*0:0*/ block_ram_model_wtb__DOT____Vtogcov__clk;
    CData/*7:0*/ block_ram_model_wtb__DOT____Vtogcov__addr;
    CData/*0:0*/ block_ram_model_wtb__DOT____Vtogcov__en;
    CData/*0:0*/ block_ram_model_wtb__DOT____Vtogcov__wr_en;
    CData/*0:0*/ block_ram_model_wtb__DOT__dut__DOT__clk;
    CData/*7:0*/ block_ram_model_wtb__DOT__dut__DOT__addr;
    CData/*0:0*/ block_ram_model_wtb__DOT__dut__DOT__en;
    CData/*0:0*/ block_ram_model_wtb__DOT__dut__DOT__wr_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__block_ram_model_wtb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ block_ram_model_wtb__DOT__wdata;
    IData/*31:0*/ block_ram_model_wtb__DOT__wstrb;
    IData/*31:0*/ block_ram_model_wtb__DOT__rdata;
    IData/*31:0*/ block_ram_model_wtb__DOT____Vtogcov__wdata;
    IData/*31:0*/ block_ram_model_wtb__DOT____Vtogcov__wstrb;
    IData/*31:0*/ block_ram_model_wtb__DOT____Vtogcov__rdata;
    IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__wdata;
    IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__wstrb;
    IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__rdata;
    IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__i;
    IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> block_ram_model_wtb__DOT__dut__DOT__mem;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*7:0*/ block_ram_model_wtb__DOT__dut__DOT__MEM_FILE = 0U;
    static constexpr IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__ADDR_WIDTH = 8U;
    static constexpr IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__DATA_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__INIT_VALUE = 0U;
    static constexpr IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__RAM_WORDS = 0x0000000aU;
    static constexpr IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__BSTRB_WIDTH = 4U;
    static constexpr IData/*31:0*/ block_ram_model_wtb__DOT__dut__DOT__MAX_RAM_SIZE = 0x00000100U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
