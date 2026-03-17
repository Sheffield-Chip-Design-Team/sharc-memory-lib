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
  parameter  RAM_WORDS    = 1 << ADDR_WIDTH // Use full address space 
)(
  input  wire                     clk,
  input  wire  [ADDR_WIDTH-1:0]   addr,
  input  wire  [DATA_WIDTH-1:0]   wdata,
  input  wire  [(DATA_WIDTH-1):0] wstrb, // TODO - enforce byte strobe
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

  // TODO add byte strobe to the RAM write acess

  // RAM write
  always @(posedge clk ) begin
    if (en && wr_en) begin
      mem[addr] <= wdata;
    end
  end

  // RAM read
  always @(posedge clk ) begin
    if (en && ~wr_en) begin
      rdata <= mem[addr];
    end
  end

endmodule