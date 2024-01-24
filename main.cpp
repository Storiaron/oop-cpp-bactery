#include <iostream>
#include "Simulator.h"

int main() {
  std::srand(time(0));
  Logger logger;
  Simulator simulator(logger, 5, 5);
  simulator.runSimulation();
  return 0;
}
