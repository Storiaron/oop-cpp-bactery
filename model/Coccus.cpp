//
// Created by User on 2024. 01. 24..
//

#include "Coccus.h"
bool Coccus::checkSurvival(const std::vector<std::vector<Cell *>> &environment) {
  int rowIndex = this->cell->getRowIndex();
  int columnIndex = this->cell->getColumnIndex();
  int nearbyBacteriumCount = 0;
  for(int i = rowIndex - spreadingRadius,  j = columnIndex - spreadingRadius; i < rowIndex + spreadingRadius; i++) {
    for(; j < columnIndex + spreadingRadius; j++) {
      if(i < 0 || i >= environment.size() || j < 0 ||j >= environment.at(i).size())continue;
      Bacterium* bacterium = environment.at(i).at(j)->getBacterium();
      if(bacterium) {
        if(++nearbyBacteriumCount == 2) {
          return true;
        }
      }
    }
    j = columnIndex - spreadingRadius;
  }
  return false;
}
