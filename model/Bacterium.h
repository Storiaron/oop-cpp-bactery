//
// Created by User on 2024. 01. 24..
//

#ifndef OOP_CPP_BACTERY_MODEL_BACTERIUM_H_
#define OOP_CPP_BACTERY_MODEL_BACTERIUM_H_

#include <vector>
#include "Cell.h"
class Bacterium {
 public:
  explicit Bacterium(Cell* cell, double spreadingRadius) :
  cell(cell),
  spreadingRadius(spreadingRadius)
  {};
  virtual bool checkSurvival(const std::vector<const std::vector<const Cell *>> &environment) = 0;
 protected:
  double spreadingRadius{0};
  Cell* cell{nullptr};
};

#endif //OOP_CPP_BACTERY_MODEL_BACTERIUM_H_
