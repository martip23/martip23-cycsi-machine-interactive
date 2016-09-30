//Calculator so far only holds the ADD function

#include "store.h"
// #include <iostream>
using namespace std;

int add()
{
    int num1 = read();
    int num2 = read();

    //If read returns error value, return error state
    if (num2 == -1)
    {   
        return -1;
    }
    else
    {
        int sum = num1 + num2;
    
        //DEBUG TOOLS
    //cout << "Num 1 = " << num1 << endl;
    //cout << "Num 2 = " << num2 << endl;

        write(sum);
        return(sum);
    }
}
