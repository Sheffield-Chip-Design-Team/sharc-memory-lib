// =======================================================================
// Module:      Block RAM (model)
// Project:     Ripple-32
// Description: This block RAM can be preloaded with the readmemh function. 
// =======================================================================

module block_ram_model #(
  parameter  ADDR_WIDTH   = 12,
  parameter  DATA_WIDTH   = 32,
  parameter  INIT_VALUE   = 0,
  parameter  MEM_FILE     = "",
  parameter  RAM_WORDS    = 1 << ADDR_WIDTH, // Use full address space 
  parameter  READ_DELAY   = 0 // Optional read delay in clock cycles (not realistic but useful for testing)
)(
  input  wire                     clk,
  input  wire  [ADDR_WIDTH-1:0]   addr,
  input  wire  [DATA_WIDTH-1:0]   wdata,
  input  wire  [(DATA_WIDTH-1):0] bit_strb, 
  input  wire                     en,
  input  wire                     wr_en,
  output reg   [DATA_WIDTH-1:0]   rdata
);

  integer i;
  localparam BSTRB_WIDTH = (DATA_WIDTH+7)/8;
  localparam MAX_RAM_SIZE   = 1 << ADDR_WIDTH;

  reg [DATA_WIDTH-1:0] mem [MAX_RAM_SIZE-1:0];

  // Initial value assignment
  initial begin  
    if (MEM_FILE != "") begin
        $readmemh(MEM_FILE, mem);
    end else begin
      for (i = 0; i < RAM_WORDS; i=i+1) begin
        mem[i] = INIT_VALUE;
      end
    end
  end

  // TODO - Warn/error if you a read is attempted from outside of the valid index

  // RAM write
  always @(posedge clk) begin
    if (en && wr_en) begin
      for (i = 0; i < DATA_WIDTH; i=i+1) begin
        if (bit_strb[i]) begin
          mem[addr][i] <= wdata[i];
        end
      end
    end
  end

  // RAM read
  generate
    
    if (READ_DELAY == 0) begin : zero_delay_read
      always @(*) begin
        if (en && ~wr_en) begin
          rdata = mem[addr];
        end else begin
          rdata = {DATA_WIDTH{1'bx}}; // Output undefined when not enabled or during write
        end
      end
    
    end else begin : delayed_read
      always @(posedge clk) begin
        if (en && ~wr_en) begin
          rdata <= mem[addr];
        end
      end
    end

  endgenerate

endmodule