

#include "adv.hpp"


void setup() {
    srand(time(0));
}

int dieRoll(int max) {
    return rand() % max + 1;
}