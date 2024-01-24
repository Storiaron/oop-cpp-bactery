//
// Created by User on 2024. 01. 24..
//

#ifndef OOP_CPP_BACTERY_MODEL_COCCUS_H_
#define OOP_CPP_BACTERY_MODEL_COCCUS_H_

#include "Bacterium.h"
class Coccus : public Bacterium {
 public:
  Coccus(Cell* cell) : Bacterium(cell, 1) {}
  bool checkSurvival(const std::vector<std::vector<Cell *>> &environment) override;
};

#endif //OOP_CPP_BACTERY_MODEL_COCCUS_H_
