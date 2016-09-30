#pragma once

class Machine {
    public:
        int PC;             // program counter
        int MAXCYCLES;      // stop when cycle count reaches this

        Machine();
        int run(int maxcycles);
};

