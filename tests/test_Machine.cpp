#include "catch.hpp"
#include "Controller.h"

#define CYCLES 10

TEST_CASE( "Controller", "Controller" ){
    Controller m;
    int cycles = m.run(CYCLES);
    REQUIRE( cycles == CYCLES );
}
