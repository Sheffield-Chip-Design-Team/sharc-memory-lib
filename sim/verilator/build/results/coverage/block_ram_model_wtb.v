//      // verilator_coverage annotation
        // Auto-generated Verilog Testbench Wrapper - Coraltb 
         
        `timescale 1ns/1ns 
        
        module block_ram_model_wtb;
        
          // block_ram_model instantation signals
 002629   reg         clk;
~000051   reg  [7:0]  addr;
~000054   reg  [31:0] wdata;
%000000   reg  [31:0]  wstrb;
 000400   reg         en;
 000200   reg         wr_en;
~000054   wire [31:0] rdata;
        
          block_ram_model #(
            .ADDR_WIDTH(8),
            .DATA_WIDTH(32),
            .INIT_VALUE(0),
            .RAM_WORDS(10)
          ) dut (
            .clk(clk),
            .addr(addr),
            .wdata(wdata),
            .wstrb(wstrb),
            .en(en),
            .wr_en(wr_en),
            .rdata(rdata)
          );
        
%000001   initial begin
%000001     $dumpvars(0, block_ram_model_wtb);
          end
        
        endmodule 
         
