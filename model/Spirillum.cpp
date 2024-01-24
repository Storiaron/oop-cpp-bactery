//
// Created by User on 2024. 01. 24..
//

#include "Spirillum.h"
#include "Bacillus.h"
bool Spirillum::checkSurvival(const std::vector<std::vector<Cell *>> &environment) {
    int rowIndex = this->cell->getRowIndex();
    int columnIndex = this->cell->getColumnIndex();
    for(int i = rowIndex - spreadingRadius,  j = columnIndex - spreadingRadius; i < rowIndex + spreadingRadius; i++) {
      for(; j < columnIndex + spreadingRadius; j++) {
        if(i < 0 || i >= environment.size() || j < 0 ||j >= environment.at(i).size())continue;
        Bacillus* bacillus = dynamic_cast<Bacillus*>(environment.at(i).at(j)->getBacterium());
        if(bacillus) {
          return false;
        }
      }
      j = columnIndex - spreadingRadius;
    }
    return true;
}
