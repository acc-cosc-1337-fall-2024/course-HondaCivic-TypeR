#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify Sum Of Squares")
{
	REQUIRE(14 == sum_of_squares(3));
	REQUIRE(30 == sum_of_squares(4));
	REQUIRE(55 == sum_of_squares(5));
}