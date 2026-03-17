// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_block_ram_model_wtb);
    __Vhier.remove(&__Vscope_block_ram_model_wtb, &__Vscope_block_ram_model_wtb__dut);

#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtop__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtop__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtop__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(37);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_block_ram_model_wtb.configure(this, name(), "block_ram_model_wtb", "block_ram_model_wtb", "block_ram_model_wtb", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_block_ram_model_wtb__dut.configure(this, name(), "block_ram_model_wtb.dut", "dut", "block_ram_model", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_block_ram_model_wtb);
    __Vhier.add(&__Vscope_block_ram_model_wtb, &__Vscope_block_ram_model_wtb__dut);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_block_ram_model_wtb.varInsert(__Vfinal,"addr", &(TOP.block_ram_model_wtb__DOT__addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_block_ram_model_wtb.varInsert(__Vfinal,"clk", &(TOP.block_ram_model_wtb__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_block_ram_model_wtb.varInsert(__Vfinal,"en", &(TOP.block_ram_model_wtb__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_block_ram_model_wtb.varInsert(__Vfinal,"rdata", &(TOP.block_ram_model_wtb__DOT__rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb.varInsert(__Vfinal,"wdata", &(TOP.block_ram_model_wtb__DOT__wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb.varInsert(__Vfinal,"wr_en", &(TOP.block_ram_model_wtb__DOT__wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_block_ram_model_wtb.varInsert(__Vfinal,"wstrb", &(TOP.block_ram_model_wtb__DOT__wstrb), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.block_ram_model_wtb__DOT__dut__DOT__ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"BSTRB_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.block_ram_model_wtb__DOT__dut__DOT__BSTRB_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.block_ram_model_wtb__DOT__dut__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"INIT_VALUE", const_cast<void*>(static_cast<const void*>(&(TOP.block_ram_model_wtb__DOT__dut__DOT__INIT_VALUE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"MAX_RAM_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.block_ram_model_wtb__DOT__dut__DOT__MAX_RAM_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"MEM_FILE", const_cast<void*>(static_cast<const void*>(&(TOP.block_ram_model_wtb__DOT__dut__DOT__MEM_FILE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"RAM_WORDS", const_cast<void*>(static_cast<const void*>(&(TOP.block_ram_model_wtb__DOT__dut__DOT__RAM_WORDS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"addr", &(TOP.block_ram_model_wtb__DOT__dut__DOT__addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"clk", &(TOP.block_ram_model_wtb__DOT__dut__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"en", &(TOP.block_ram_model_wtb__DOT__dut__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"i", &(TOP.block_ram_model_wtb__DOT__dut__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"mem", &(TOP.block_ram_model_wtb__DOT__dut__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,255,0 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"rdata", &(TOP.block_ram_model_wtb__DOT__dut__DOT__rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"wdata", &(TOP.block_ram_model_wtb__DOT__dut__DOT__wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"wr_en", &(TOP.block_ram_model_wtb__DOT__dut__DOT__wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_block_ram_model_wtb__dut.varInsert(__Vfinal,"wstrb", &(TOP.block_ram_model_wtb__DOT__dut__DOT__wstrb), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
    }
}
