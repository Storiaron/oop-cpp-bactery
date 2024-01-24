//
// Created by User on 2024. 01. 24..
//

#include "Simulator.h"
#include "model/Bacillus.h"
#include "model/Coccus.h"
#include "model/Spirillum.h"
void Simulator::runSimulation() {
  int simulatedRounds = 100;
  //TODO ask the user for this number
  while(simulatedRounds--) {
    destroyDeadBacteria();
    handleSurvivors();
    logger.logResult(petriDish);
  }
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
  for(int i = 0; i < bacteriaInstances; i++) {
    std::vector<Cell*> emptyCells = getEmptyCells();
    int position = rand() % emptyCells.size();
    int bacteriaType = rand() % 3;
    Cell* chosenCell = emptyCells.at(position);
    switch(bacteriaType) {
      case 0: {
        Bacillus* bacillus = new Bacillus(chosenCell);
        chosenCell->addBacterium(bacillus);
      }
      break;
      case 1: {
        Coccus* coccus = new Coccus(chosenCell);
        chosenCell->addBacterium(coccus);
      }
      break;
      case 2: {
        Spirillum* spirillum = new Spirillum(chosenCell);
        chosenCell->addBacterium(spirillum);
      }
    }
  }
}
std::vector<Cell*> Simulator::getEmptyCells() {
  std::vector<Cell*> emptyCells;
  for(int i = 0; i < dishSize; i++) {
    for(int j = 0; j < dishSize; j++) {
      if (petriDish.at(i).at(j)->isEmpty) {
        emptyCells.push_back(petriDish.at(i).at(j));
      }
    }
  }
  return emptyCells;
}
void Simulator::destroyDeadBacteria() {
  for(int i = 0; i < dishSize; i++) {
    for(int j = 0; j < dishSize; j++) {
      Cell* cell = petriDish.at(i).at(j);
      if(!cell->isEmpty) {
        if(!cell->getBacterium()->checkSurvival(petriDish)) {
          cell->removeBacterium();
        }
      }
    }
  }
}
void Simulator::handleSurvivors() {
  for(int i = 0; i < dishSize; i++) {
    for(int j = 0; j < dishSize; j++) {
      Cell* cell = petriDish.at(i).at(j);
      if(!cell->isEmpty) {

      }
    }
  }
}
