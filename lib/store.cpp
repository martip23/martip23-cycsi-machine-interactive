//Implementation for store.h

#include <cstdlib>

const int MAX_SIZE = 10;
int myArray[MAX_SIZE];
int writePos = 0;

///Write function writes number to array (stack)
int write(const int toWrite)
{
    //Make sure there is space to write according to MAX_SIZE
    if (writePos < MAX_SIZE)
    {
        myArray[writePos] = toWrite;
        writePos++;
        return 0;
    }
    //If no space, return error code 1
    else
    {
        return 1;
    }
}

int read()
{
    int tempInt;

    if (writePos > 0)
    {
            return myArray[--writePos];
    }
    else
    {
        return -1;
    }
}
