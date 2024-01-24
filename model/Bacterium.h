//
// Created by User on 2024. 01. 24..
//

#ifndef OOP_CPP_BACTERY_MODEL_BACTERIUM_H_
#define OOP_CPP_BACTERY_MODEL_BACTERIUM_H_

class Bacterium {
 protected:
  virtual bool checkSurvival() = 0;
 private:
  double spreadingRadius;
};

#endif //OOP_CPP_BACTERY_MODEL_BACTERIUM_H_
