//
// Created by User on 2024. 01. 24..
//

#ifndef OOP_CPP_BACTERY_MODEL_BACILLUS_H_
#define OOP_CPP_BACTERY_MODEL_BACILLUS_H_

#include "Bacterium.h"
class Bacillus : public Bacterium {
 public:
  Bacillus(Cell* cell) : Bacterium(cell, 0.3) {};
  bool checkSurvival(const std::vector<const std::vector<const Cell *>> &environment) override;
};

#endif //OOP_CPP_BACTERY_MODEL_BACILLUS_H_
