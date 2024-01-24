//
// Created by User on 2024. 01. 24..
//

#ifndef OOP_CPP_BACTERY_MODEL_SPIRILLUM_H_
#define OOP_CPP_BACTERY_MODEL_SPIRILLUM_H_

#include "Bacterium.h"
class Spirillum : public Bacterium {
 public:
  Spirillum(Cell* cell) : Bacterium(cell, 0.2) {}
  bool checkSurvival(const std::vector<const std::vector<const Cell *>> &environment) override;

};

#endif //OOP_CPP_BACTERY_MODEL_SPIRILLUM_H_
