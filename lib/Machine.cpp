#include "Machine.h"
#include "store.h"
#include "calculator.h"

#include <iostream>  //For IO
#include <cstring>   //For strlen
#include <cstdlib>   //For stoi
#include <cctype>    //for isdigit

using namespace std;

Machine::Machine() {
    PC = 0; // initial instruction location
}

int Machine::run(int cycles_to_run) {
    int cycles;
    MAXCYCLES = cycles_to_run;

    // start the machine
    for(cycles = 0; cycles < MAXCYCLES; cycles++) {

	const string PROMPT = "> ";
        string input;
        int tempInt, addResult;
        bool allNums, strAdd;
        
        cout << PROMPT;
        getline(cin,input);
        
        //*************************//
        //  Input validation loop  //
        //*************************//

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
        
        //If allNums then 
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
		return -1;
            }

            //Else, return sum
            else 
            { cout << "Sum = " << addResult << endl; }
	}

    }
    return cycles;
}

