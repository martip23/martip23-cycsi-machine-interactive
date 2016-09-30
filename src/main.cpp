#include <iostream>
using namespace std;
#include "Machine.h"

int main(int argc, char *argv[]) {
    Machine m;

    cout << "Cycsi (v2) running..." << endl;
    int cycles_run = m.run(10);
    cout << "\t completed run in " << cycles_run << " cycles" << endl; 
}

