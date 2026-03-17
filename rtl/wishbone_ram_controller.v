module wishbone_ram_controller #(
  parameter  ADDR_WIDTH   = 12,
  parameter  DATA_WIDTH   = 32,
  parameter  INIT_VALUE   = 0,
  parameter  MEM_FILE     = "",
  parameter  RAM_WORDS    = 2 << ADDR_WIDTH-1 // Use full address space 
)(
  // Wishbone Interface
  input  wire                     wclk,
  input   wire [31:0]             adr_o,
  input   wire [31:0]             dat_o,
  output  wire [31:0]             dat_i,
  input   wire                    we_o,
  input   wire [3:0]              sel_o,
  input   wire                    stb_o,
  input   wire                    cyc_o,
  output  wire                    ack_i,

  // RAM controller
  input  wire                     m_clk,
  input  wire  [ADDR_WIDTH-1:0]   addr,
  input  wire  [DATA_WIDTH-1:0]   wdata,
  input  wire  [(DATA_WIDTH-1):0] wstrb,  // TODO - enforce byte strobe
  input  wire                     en,
  input  wire                     wr_en,
  output reg   [DATA_WIDTH-1:0]   rdata
);

  // Memory Control FSM






endmodule