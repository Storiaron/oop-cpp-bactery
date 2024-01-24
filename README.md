# oop-cpp-bactery
Study excercise to practice oop in cpp


## Task description:
Bacterial problems
A Petri dish has different life forms: bacillus, coccus, and spirillum.
Model the life in the dish based on the following requirements:

All the species have one constant (for their meaning read further):


bacillus
coccus
spirillum
NEARBY
0.3 mm
0.1 mm
0.2 mm


All the bacteria have a position in the dish (x, y)
Initialize the content of the dish with a large number of random instances (with coordinates less than 50 mm)
There is a 'time pulse' in the dish, and we check on all instances in each round. A bacteria dies if any of the requirements do not hold:
Bacillus need at least one coccus NEARBY to live
Coccus need at least two instances of bacteria of other types NEARBY to live
Spirillum die if there is a bacillus NEARBY
In each round the survivors split into two: the position of the old instance is unchanged, and a new instance is born with random coordinates in a relative circle of radius NEARBY. Take care not to put two bacillus in the exact same place
Log the number of species in each round and the dying/surviving events as well
You should have an abstract class, use inheritance, and data hiding, and ensure no code repetition.
Task 1
Figure out the classes, and the architecture and implement it. 
Also, make a program out of it that asks the user about how many rounds (time pulses) should it simulate
It communicates what happened in each round by logging it.

The main goal of the assignment is to practice OOP and how to implement classes based on only written information.

Task 2
Figure out some fancy graphical representation of the turns (eg. SDL2). The dish is pretty big so you may need to use a bitmap as an output (?).. Be creative and find a way to do it. :)

