#include "Controller.h"
#include "store.h"
#include "calculator.h"

#include <iostream>  //For IO
#include <cstring>   //For strlen
#include <cstdlib>   //For stoi
#include <cctype>    //for isdigit

using namespace std;

const string PROMPT = "> ";
string input;
int tempInt, addResult;
bool allNums, strAdd;



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

//Gets user input
void Controller::fetch()
{
    cout << PROMPT;
    getline(cin,input); 
};

//Decodes user input to send to execute, or back to fetch
void Controller::decode()
{   
    allNums = true;
    strAdd = false;

    //Check if input is all numbers//
    for (int i = 0; i < (strlen(input.c_str())-1); i++)
        {
            if (not isdigit(input[i]))
                {allNums = false;}
        }

    //Check if input is string "add"//

    if (input == "add") {strAdd = true;}
};

void Controller::execute()
{   
    if (allNums)
    {
        tempInt = atoi(input.c_str());
        write(tempInt);
        cout << tempInt << " added to stack." << endl;
    }

    //Echo message str = "add"
    if (strAdd)
    {
        //Attempt to add the last two items in stack
        addResult = add();
        
        //If error message returned, exit program
        if (addResult == -1)
        {
            cout << "Illegal operation! Exiting program!" << endl;
        }

        //Else, return sum
        else 
        { cout << "Sum = " << addResult << endl; }
    }

};

void Controller::store()
{
};
