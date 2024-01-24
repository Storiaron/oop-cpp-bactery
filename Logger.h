//
// Created by User on 2024. 01. 24..
//

#ifndef OOP_CPP_BACTERY__LOGGER_H_
#define OOP_CPP_BACTERY__LOGGER_H_

#include <vector>
#include "model/Cell.h"
class Logger {
 public:
  void logResult(const std::vector<std::vector<Cell*>> petriDish)const;
};

#endif //OOP_CPP_BACTERY__LOGGER_H_
