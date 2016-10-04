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

//Begin controller loop for limited amount of time
int Controller::run(int cycles_to_run) {
    int cycles;
    MAXCYCLES = cycles_to_run;

    // start the machine. One cycle includes 4 steps.
    for(cycles = 0; cycles < MAXCYCLES; cycles++) {
        fetch();
        decode();
        execute();
        store();
    }
    return cycles;
}

void Controller::fetch()
{

};

void Controller::decode()
{
};

void Controller::execute()
{
};

void Controller::store()
{
};
