//! Test that Catch works
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Addition works", "[math]"){
    REQUIRE(1 + 1 == 2);
}

TEST_CASE("Subtraction works", "[math]"){
    REQUIRE(1 - 1 == 0);
}

// unsigned int Factorial(unsigned int number){
//     return number <=1 ? number: Factorial(number-1)*number;
// }

// TEST_CASE("Factorials are computed", "[factorial]"){
//     REQUIRE(Factorial(1) == 1);
//     REQUIRE(Factorial(2) == 2);
//     REQUIRE(Factorial(3) == 6);
//     REQUIRE(Factorial(10) == 3628800);
// }