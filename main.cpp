#include "stim.h"
#include "filter.h"
#define CLOCK_PERIOD 1.0

using namespace sc_dt;
using namespace sc_core;

int sc_main(int argc, char *argv[]) {
  //Create modules and signals
  stim testbench("testbench");
  filter dut("dut");

  testbench.initiator.i_skt(filter.t_skt);

  sc_start(100, SC_NS);
  return 0;
}
