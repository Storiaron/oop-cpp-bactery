//
// Created by User on 2024. 01. 24..
//

#include "Simulator.h"
void Simulator::runSimulation() {

}
void Simulator::setupSimulation() {
  for(int i = 0; i < dishSize; i++) {
    std::vector<Cell*> row;
    for(int j = 0; j < dishSize; j++) {
      Cell* cell = new Cell();
      row.push_back(cell);
    }
    petriDish.push_back(row);
  }
}
