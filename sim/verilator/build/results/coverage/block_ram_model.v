//      // verilator_coverage annotation
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
 002629   input  wire                     clk,
~000051   input  wire  [ADDR_WIDTH-1:0]   addr,
~000054   input  wire  [DATA_WIDTH-1:0]   wdata,
%000000   input  wire  [(DATA_WIDTH-1):0] wstrb, // TODO - enforce byte strobe
 000400   input  wire                     en,
 000200   input  wire                     wr_en,
~000054   output reg   [DATA_WIDTH-1:0]   rdata
        );
        
          integer i;
          localparam BSTRB_WIDTH = (DATA_WIDTH+7)/8;
          localparam MAX_RAM_SIZE   = 1 << ADDR_WIDTH;
        
          reg [DATA_WIDTH-1:0] mem [MAX_RAM_SIZE-1:0];
        
          // Initial value assignment
%000001   initial begin  
%000001     if (MEM_FILE != "") begin
%000000         $readmemh(MEM_FILE, mem);
%000001     end else begin
~000010       for (i = 0; i < RAM_WORDS; i=i+1) begin
 000010         mem[i] = INIT_VALUE;
              end
            end
          end
        
          // TODO - Warn/error if you a read is attempted from outside of the valid index
        
          // TODO add byte strobe to the RAM write acess
        
          // RAM write
 001315   always @(posedge clk ) begin
 001215     if (en && wr_en) begin
 000100       mem[addr] <= wdata;
            end
          end
        
          // RAM read
 001315   always @(posedge clk ) begin
 001215     if (en && ~wr_en) begin
 000100       rdata <= mem[addr];
            end
          end
        
        endmodule
