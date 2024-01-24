//
// Created by User on 2024. 01. 24..
//

#include "Bacillus.h"
#include "Coccus.h"
bool Bacillus::checkSurvival(const std::vector<std::vector<Cell *>> &environment) {
  int rowIndex = this->cell->getRowIndex();
  int columnIndex = this->cell->getColumnIndex();
  for(int i = rowIndex - spreadingRadius,  j = columnIndex - spreadingRadius; i < rowIndex + spreadingRadius; i++) {
    for(; j < columnIndex + spreadingRadius; j++) {
      if(i < 0 || i >= environment.size() || j < 0 ||j >= environment.at(i).size())continue;
      Coccus* coccus = dynamic_cast<Coccus*>(environment.at(i).at(j)->getBacterium());
      if(coccus) {
        return true;
      }
    }
    j = columnIndex - spreadingRadius;
  }
  return false;
}
