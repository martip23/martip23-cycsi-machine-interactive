#pragma once

class Controller {
    public:
        int PC;             // program counter
        int MAXCYCLES;      // stop when cycle count reaches this

        Controller();
        int run(int maxcycles);
};

