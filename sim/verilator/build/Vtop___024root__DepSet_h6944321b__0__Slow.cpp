// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__block_ram_model_wtb__DOT__clk__0 
        = vlSelfRef.block_ram_model_wtb__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/macbook/chip_dev/ripple/ram/tb/block_ram_model/block_ram_model_wtb.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge block_ram_model_wtb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge block_ram_model_wtb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->block_ram_model_wtb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17633713602756614663ull);
    vlSelf->block_ram_model_wtb__DOT__addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1431774957512384988ull);
    vlSelf->block_ram_model_wtb__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8482740449297379464ull);
    vlSelf->block_ram_model_wtb__DOT__wstrb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6765774982903822332ull);
    vlSelf->block_ram_model_wtb__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12912341645424912007ull);
    vlSelf->block_ram_model_wtb__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14238321892045086941ull);
    vlSelf->block_ram_model_wtb__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9878081018142900072ull);
    vlSelf->block_ram_model_wtb__DOT____Vtogcov__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18216167055725134242ull);
    vlSelf->block_ram_model_wtb__DOT____Vtogcov__addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15868916852399271975ull);
    vlSelf->block_ram_model_wtb__DOT____Vtogcov__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6137192029007105933ull);
    vlSelf->block_ram_model_wtb__DOT____Vtogcov__wstrb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4551871375355503123ull);
    vlSelf->block_ram_model_wtb__DOT____Vtogcov__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16782537584655669965ull);
    vlSelf->block_ram_model_wtb__DOT____Vtogcov__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11053070223695493526ull);
    vlSelf->block_ram_model_wtb__DOT____Vtogcov__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13681475062927282287ull);
    vlSelf->block_ram_model_wtb__DOT__dut__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2291829569471788257ull);
    vlSelf->block_ram_model_wtb__DOT__dut__DOT__addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15190769820687151151ull);
    vlSelf->block_ram_model_wtb__DOT__dut__DOT__wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 264491223052851803ull);
    vlSelf->block_ram_model_wtb__DOT__dut__DOT__wstrb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9343378500517948359ull);
    vlSelf->block_ram_model_wtb__DOT__dut__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3239949211763965341ull);
    vlSelf->block_ram_model_wtb__DOT__dut__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13992396938802355368ull);
    vlSelf->block_ram_model_wtb__DOT__dut__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10204224256436374508ull);
    vlSelf->block_ram_model_wtb__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14829112607825189333ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->block_ram_model_wtb__DOT__dut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7657694621605347313ull);
    }
    vlSelf->block_ram_model_wtb__DOT__dut__DOT____Vtogcov__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5427667939898243791ull);
    vlSelf->__Vtrigprevexpr___TOP__block_ram_model_wtb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11795450314158707999ull);
}
