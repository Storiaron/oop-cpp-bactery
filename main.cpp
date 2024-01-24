#include <iostream>
#include "Simulator.h"

int main() {
  Logger logger;
  Simulator simulator(logger, 5, 10);
  simulator.runSimulation();
  return 0;
}
