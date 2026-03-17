import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge, Timer

class ram_model:
  def __init__(self, word_size=256, num_words=256, address_width=12):
    self.size = size
    self.memory = [0] * size

  def write(self, addr, data):
    if addr < self.size:
      self.memory[addr] = data

  def read(self, addr):
    if addr < self.size:
      return self.memory[addr]
    return None

# Read a value from a RAM location
async def read_ram (dut, addr=random.randint(0,2^8), backdoor=False):
  dut.en.value     = 1
  dut.wr_en.value  = 0
  dut.addr.value   = addr
  await ClockCycles(dut.clk, 1)
  dut.en.value     = 0
  await Timer(1, unit='step')
  read_data = int(dut.rdata.value)
  dut._log.info(f"Read 0x{read_data:X} from RAM address 0x{addr:X}.")
  return read_data

# Write a value to a RAM location
async def write_ram(dut, addr=random.randint(0,2^8), wdata=random.randint(0,2^32), backdoor=False):
  dut.en.value     = 1
  dut.wr_en.value  = 1
  dut.addr.value   = addr
  dut.wdata.value  = wdata
  await ClockCycles(dut.clk, 1)
  dut.wr_en.value  = 1
  dut.en.value     = 0
  dut._log.info(f"Write 0x{wdata:X} to RAM address 0x{addr:X} completed.")


@cocotb.test()
async def test_rw(dut):
  ram_addr_width = 8
  ram_data_width = 32
  num_tests      = 100

  # Initialize the RAM model
  dut._log.info("Initializing RAM model")
  dut.en.value     = 0

  dut._log.info("Starting clock")
  clock = Clock(dut.clk, 50 , unit="ns")
  cocotb.start_soon(clock.start())

  # Perform a series of random read/write operations to the RAM model and verify the results
  for test in range(num_tests):
    rand_addr   = random.randint(0,(2^ram_addr_width)-1)
    rand_data   = random.randint(0,(2^ram_data_width)-1)
    
    rand_cycles = random.randint(1,10)
    
    await write_ram(dut, addr=rand_addr, wdata=rand_data)
    await ClockCycles(dut.clk, rand_cycles)
    assert await read_ram (dut, addr=rand_addr) == rand_data, f"Expected 0x{rand_data:X} but got 0x{(await read_ram(dut, addr=rand_addr)):X} from RAM address 0x{rand_addr:X}."
    
    rand_cycles = random.randint(1,10)
    await ClockCycles(dut.clk, rand_cycles)
  
  dut._log.info(f"RAM Test passed!")



