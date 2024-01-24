//
// Created by User on 2024. 01. 24..
//

#ifndef OOP_CPP_BACTERY__SIMULATOR_H_
#define OOP_CPP_BACTERY__SIMULATOR_H_

#include <vector>
#include "Logger.h"
#include "model/Cell.h"
class Simulator {
 public:
  explicit Simulator(Logger& logger, int bacteriaInstances = 10, int dishSize = 50) : logger(logger),
  bacteriaInstances(bacteriaInstances), dishSize(dishSize) {
    setupSimulation();
  }
  void runSimulation();
 private:
  const int bacteriaInstances;
  const int dishSize;
  std::vector<std::vector<Cell*>> petriDish;
  const Logger& logger;
  void setupSimulation();
};

#endif //OOP_CPP_BACTERY__SIMULATOR_H_
