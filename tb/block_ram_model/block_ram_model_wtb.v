// Auto-generated Verilog Testbench Wrapper - Coraltb 
 
`timescale 1ns/1ns 

module block_ram_model_wtb;

  // block_ram_model instantation signals
  reg         clk;
  reg  [7:0]  addr;
  reg  [31:0] wdata;
  reg  [31:0]  wstrb;
  reg         en;
  reg         wr_en;
  wire [31:0] rdata;

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

  initial begin
    $dumpvars(0, block_ram_model_wtb);
  end

endmodule 
 