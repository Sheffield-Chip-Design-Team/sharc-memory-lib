// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.block_ram_model_wtb__DOT__clk) 
         ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__clk 
            = vlSelfRef.block_ram_model_wtb__DOT__clk;
    }
    if (((IData)(vlSelfRef.block_ram_model_wtb__DOT__en) 
         ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__en))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__en 
            = vlSelfRef.block_ram_model_wtb__DOT__en;
    }
    if (((IData)(vlSelfRef.block_ram_model_wtb__DOT__wr_en) 
         ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wr_en 
            = vlSelfRef.block_ram_model_wtb__DOT__wr_en;
    }
    vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__clk 
        = vlSelfRef.block_ram_model_wtb__DOT__clk;
    vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__addr 
        = vlSelfRef.block_ram_model_wtb__DOT__addr;
    vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__wdata 
        = vlSelfRef.block_ram_model_wtb__DOT__wdata;
    vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__wstrb 
        = vlSelfRef.block_ram_model_wtb__DOT__wstrb;
    vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__en 
        = vlSelfRef.block_ram_model_wtb__DOT__en;
    vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__wr_en 
        = vlSelfRef.block_ram_model_wtb__DOT__wr_en;
    if ((1U & ((IData)(vlSelfRef.block_ram_model_wtb__DOT__addr) 
               ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr 
            = ((0xfeU & (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)) 
               | (1U & (IData)(vlSelfRef.block_ram_model_wtb__DOT__addr)));
    }
    if ((2U & ((IData)(vlSelfRef.block_ram_model_wtb__DOT__addr) 
               ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr 
            = ((0xfdU & (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)) 
               | (2U & (IData)(vlSelfRef.block_ram_model_wtb__DOT__addr)));
    }
    if ((4U & ((IData)(vlSelfRef.block_ram_model_wtb__DOT__addr) 
               ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr 
            = ((0xfbU & (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)) 
               | (4U & (IData)(vlSelfRef.block_ram_model_wtb__DOT__addr)));
    }
    if ((8U & ((IData)(vlSelfRef.block_ram_model_wtb__DOT__addr) 
               ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr 
            = ((0xf7U & (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)) 
               | (8U & (IData)(vlSelfRef.block_ram_model_wtb__DOT__addr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.block_ram_model_wtb__DOT__addr) 
                  ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr 
            = ((0xefU & (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)) 
               | (0x10U & (IData)(vlSelfRef.block_ram_model_wtb__DOT__addr)));
    }
    if ((0x20U & ((IData)(vlSelfRef.block_ram_model_wtb__DOT__addr) 
                  ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr 
            = ((0xdfU & (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)) 
               | (0x20U & (IData)(vlSelfRef.block_ram_model_wtb__DOT__addr)));
    }
    if ((0x40U & ((IData)(vlSelfRef.block_ram_model_wtb__DOT__addr) 
                  ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr 
            = ((0xbfU & (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)) 
               | (0x40U & (IData)(vlSelfRef.block_ram_model_wtb__DOT__addr)));
    }
    if ((0x80U & ((IData)(vlSelfRef.block_ram_model_wtb__DOT__addr) 
                  ^ (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr 
            = ((0x7fU & (IData)(vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__addr)) 
               | (0x80U & (IData)(vlSelfRef.block_ram_model_wtb__DOT__addr)));
    }
    if ((1U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffffffeU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (1U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((2U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffffffdU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (2U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((4U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffffffbU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (4U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((8U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffffff7U & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (8U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x10U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffffffefU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x10U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x20U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffffffdfU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x20U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x40U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffffffbfU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x40U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x80U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffffff7fU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x80U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x100U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffffeffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x100U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x200U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffffdffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x200U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x400U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffffbffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x400U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x800U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffff7ffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x800U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x1000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffffefffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x1000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x2000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffffdfffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x2000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x4000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffffbfffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x4000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x8000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffff7fffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x8000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x10000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffeffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x10000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x20000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffdffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x20000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x40000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfffbffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x40000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x80000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfff7ffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x80000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x100000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffefffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x100000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x200000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffdfffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x200000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x400000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xffbfffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x400000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x800000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xff7fffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x800000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x1000000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfeffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x1000000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x2000000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfdffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x2000000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x4000000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xfbffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x4000000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x8000000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xf7ffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x8000000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x10000000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xefffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x10000000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x20000000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xdfffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x20000000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((0x40000000U & (vlSelfRef.block_ram_model_wtb__DOT__wdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0xbfffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x40000000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if (((vlSelfRef.block_ram_model_wtb__DOT__wdata 
          ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata 
            = ((0x7fffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wdata) 
               | (0x80000000U & vlSelfRef.block_ram_model_wtb__DOT__wdata));
    }
    if ((1U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffffffeU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (1U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((2U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffffffdU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (2U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((4U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffffffbU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (4U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((8U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffffff7U & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (8U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x10U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffffffefU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x10U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x20U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffffffdfU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x20U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x40U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffffffbfU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x40U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x80U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffffff7fU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x80U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x100U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffffeffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x100U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x200U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffffdffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x200U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x400U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffffbffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x400U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x800U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffff7ffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x800U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x1000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffffefffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x1000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x2000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffffdfffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x2000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x4000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffffbfffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x4000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x8000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffff7fffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x8000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x10000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffeffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x10000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x20000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffdffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x20000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x40000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfffbffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x40000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x80000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfff7ffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x80000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x100000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffefffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x100000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x200000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffdfffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x200000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x400000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xffbfffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x400000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x800000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xff7fffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x800000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x1000000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfeffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x1000000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x2000000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfdffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x2000000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x4000000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xfbffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x4000000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x8000000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xf7ffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x8000000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x10000000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xefffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x10000000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x20000000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xdfffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x20000000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((0x40000000U & (vlSelfRef.block_ram_model_wtb__DOT__wstrb 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0xbfffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x40000000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if (((vlSelfRef.block_ram_model_wtb__DOT__wstrb 
          ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb 
            = ((0x7fffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__wstrb) 
               | (0x80000000U & vlSelfRef.block_ram_model_wtb__DOT__wstrb));
    }
    if ((1U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffffeU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (1U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((2U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffffdU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (2U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((4U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffffbU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (4U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((8U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffff7U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (8U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x10U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffffefU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x10U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x20U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffffdfU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x20U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x40U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffffbfU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x40U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x80U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffff7fU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x80U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x100U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffeffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x100U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x200U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffdffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x200U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x400U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffbffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x400U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x800U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffff7ffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x800U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x1000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffefffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x1000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x2000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffdfffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x2000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x4000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffbfffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x4000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x8000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffff7fffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x8000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x10000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffeffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x10000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x20000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffdffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x20000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x40000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffbffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x40000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x80000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfff7ffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x80000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x100000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffefffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x100000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x200000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffdfffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x200000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x400000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffbfffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x400000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x800000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xff7fffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x800000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x1000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfeffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x1000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x2000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfdffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x2000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x4000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfbffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x4000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x8000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xf7ffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x8000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x10000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xefffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x10000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x20000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xdfffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x20000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x40000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xbfffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x40000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if (((vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
          ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0x7fffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x80000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    vlSelfRef.block_ram_model_wtb__DOT__rdata = vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata;
    if ((1U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffffeU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (1U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((2U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffffdU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (2U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((4U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffffbU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (4U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((8U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffff7U & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (8U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x10U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffffefU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x10U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x20U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffffdfU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x20U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x40U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffffbfU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x40U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x80U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffff7fU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x80U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x100U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffeffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x100U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x200U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffdffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x200U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x400U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffbffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x400U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x800U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffff7ffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x800U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x1000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffefffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x1000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x2000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffdfffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x2000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x4000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffbfffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x4000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x8000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffff7fffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x8000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x10000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffeffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x10000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x20000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffdffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x20000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x40000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffbffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x40000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x80000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfff7ffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x80000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x100000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffefffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x100000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x200000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffdfffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x200000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x400000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffbfffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x400000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x800000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xff7fffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x800000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x1000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfeffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x1000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x2000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfdffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x2000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x4000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfbffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x4000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x8000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xf7ffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x8000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x10000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xefffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x10000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x20000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xdfffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x20000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x40000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xbfffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x40000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if (((vlSelfRef.block_ram_model_wtb__DOT__rdata 
          ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0x7fffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x80000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.block_ram_model_wtb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__block_ram_model_wtb__DOT__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__block_ram_model_wtb__DOT__clk__0 
        = vlSelfRef.block_ram_model_wtb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__block_ram_model_wtb__DOT__dut__DOT__mem__v0;
    __VdlyVal__block_ram_model_wtb__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__block_ram_model_wtb__DOT__dut__DOT__mem__v0;
    __VdlyDim0__block_ram_model_wtb__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__block_ram_model_wtb__DOT__dut__DOT__mem__v0;
    __VdlySet__block_ram_model_wtb__DOT__dut__DOT__mem__v0 = 0;
    // Body
    __VdlySet__block_ram_model_wtb__DOT__dut__DOT__mem__v0 = 0U;
    if (((IData)(vlSelfRef.block_ram_model_wtb__DOT__en) 
         & (IData)(vlSelfRef.block_ram_model_wtb__DOT__wr_en))) {
        ++(vlSymsp->__Vcoverage[144]);
        __VdlyVal__block_ram_model_wtb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.block_ram_model_wtb__DOT__wdata;
        __VdlyDim0__block_ram_model_wtb__DOT__dut__DOT__mem__v0 
            = vlSelfRef.block_ram_model_wtb__DOT__addr;
        __VdlySet__block_ram_model_wtb__DOT__dut__DOT__mem__v0 = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[145]);
    }
    if (((IData)(vlSelfRef.block_ram_model_wtb__DOT__en) 
         & (IData)(vlSelfRef.block_ram_model_wtb__DOT__wr_en))) {
        ++(vlSymsp->__Vcoverage[146]);
    }
    if ((1U & (~ (IData)(vlSelfRef.block_ram_model_wtb__DOT__wr_en)))) {
        ++(vlSymsp->__Vcoverage[147]);
    }
    if ((1U & (~ (IData)(vlSelfRef.block_ram_model_wtb__DOT__en)))) {
        ++(vlSymsp->__Vcoverage[148]);
    }
    ++(vlSymsp->__Vcoverage[149]);
    if (((IData)(vlSelfRef.block_ram_model_wtb__DOT__en) 
         & (~ (IData)(vlSelfRef.block_ram_model_wtb__DOT__wr_en)))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
            = vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__mem
            [vlSelfRef.block_ram_model_wtb__DOT__addr];
    } else {
        ++(vlSymsp->__Vcoverage[151]);
    }
    if (((IData)(vlSelfRef.block_ram_model_wtb__DOT__en) 
         & (~ (IData)(vlSelfRef.block_ram_model_wtb__DOT__wr_en)))) {
        ++(vlSymsp->__Vcoverage[152]);
    }
    if (vlSelfRef.block_ram_model_wtb__DOT__wr_en) {
        ++(vlSymsp->__Vcoverage[153]);
    }
    if ((1U & (~ (IData)(vlSelfRef.block_ram_model_wtb__DOT__en)))) {
        ++(vlSymsp->__Vcoverage[154]);
    }
    ++(vlSymsp->__Vcoverage[155]);
    if (__VdlySet__block_ram_model_wtb__DOT__dut__DOT__mem__v0) {
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__mem[__VdlyDim0__block_ram_model_wtb__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__block_ram_model_wtb__DOT__dut__DOT__mem__v0;
    }
    if ((1U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffffeU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (1U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((2U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffffdU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (2U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((4U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffffbU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (4U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((8U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffff7U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (8U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x10U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffffefU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x10U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x20U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffffdfU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x20U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x40U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffffbfU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x40U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x80U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffff7fU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x80U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x100U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffeffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x100U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x200U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffdffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x200U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x400U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffffbffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x400U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x800U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffff7ffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x800U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x1000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffefffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x1000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x2000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffdfffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x2000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x4000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffffbfffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x4000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x8000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffff7fffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x8000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x10000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffeffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x10000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x20000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffdffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x20000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x40000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfffbffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x40000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x80000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfff7ffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x80000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x100000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffefffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x100000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x200000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffdfffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x200000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x400000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xffbfffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x400000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x800000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xff7fffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x800000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x1000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfeffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x1000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x2000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfdffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x2000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x4000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xfbffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x4000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x8000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xf7ffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x8000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x10000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xefffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x10000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x20000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xdfffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x20000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if ((0x40000000U & (vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0xbfffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x40000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    if (((vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata 
          ^ vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata 
            = ((0x7fffffffU & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata) 
               | (0x80000000U & vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata));
    }
    vlSelfRef.block_ram_model_wtb__DOT__rdata = vlSelfRef.block_ram_model_wtb__DOT__dut__DOT__rdata;
    if ((1U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffffeU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (1U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((2U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffffdU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (2U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((4U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffffbU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (4U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((8U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
               ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffff7U & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (8U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x10U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffffefU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x10U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x20U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffffdfU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x20U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x40U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffffbfU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x40U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x80U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                  ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffff7fU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x80U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x100U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffeffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x100U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x200U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffdffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x200U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x400U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffffbffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x400U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x800U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                   ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffff7ffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x800U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x1000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffefffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x1000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x2000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffdfffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x2000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x4000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffffbfffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x4000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x8000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                    ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffff7fffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x8000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x10000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffeffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x10000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x20000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffdffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x20000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x40000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfffbffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x40000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x80000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                     ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfff7ffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x80000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x100000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffefffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x100000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x200000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffdfffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x200000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x400000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xffbfffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x400000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x800000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                      ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xff7fffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x800000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x1000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfeffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x1000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x2000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfdffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x2000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x4000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xfbffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x4000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x8000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                       ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xf7ffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x8000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x10000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xefffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x10000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x20000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xdfffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x20000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if ((0x40000000U & (vlSelfRef.block_ram_model_wtb__DOT__rdata 
                        ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0xbfffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x40000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
    if (((vlSelfRef.block_ram_model_wtb__DOT__rdata 
          ^ vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata 
            = ((0x7fffffffU & vlSelfRef.block_ram_model_wtb__DOT____Vtogcov__rdata) 
               | (0x80000000U & vlSelfRef.block_ram_model_wtb__DOT__rdata));
    }
}
