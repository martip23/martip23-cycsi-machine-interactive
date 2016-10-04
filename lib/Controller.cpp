#include "Controller.h"
#include "store.h"
#include "calculator.h"

#include <iostream>  //For IO
#include <cstring>   //For strlen
#include <cstdlib>   //For stoi
#include <cctype>    //for isdigit

using namespace std;

Controller::Controller() {
    PC = 0; // initial instruction location
}

int Controller::run(int cycles_to_run) {
    int cycles;
    MAXCYCLES = cycles_to_run;

    // start the machine
    for(cycles = 0; cycles < MAXCYCLES; cycles++) {
    }
    return cycles;
}

