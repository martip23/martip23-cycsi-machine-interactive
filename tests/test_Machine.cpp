#include "catch.hpp"
#include "Machine.h"

#define CYCLES 10

TEST_CASE( "Machine", "Machine" ){
    Machine m;
    int cycles = m.run(CYCLES);
    REQUIRE( cycles == CYCLES );
}
