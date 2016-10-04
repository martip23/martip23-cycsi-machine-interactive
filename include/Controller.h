#pragma once

class Controller {
    public:
        int PC;             // program counter
        int MAXCYCLES;      // stop when cycle count reaches this
        
        //Constructor
        Controller();

        //Start running machine for limited number of cycles
        int run(int maxcycles);

        //Texas four-step
        void fetch();
        void decode();
        void execute();
        void store();
};

