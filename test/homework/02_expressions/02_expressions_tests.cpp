#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Verify get_sales_tax_amount")
{
	REQUIRE(.675 == get_sales_tax_amount(10));
	REQUIRE(1.35 == get_sales_tax_amount(20));
}

TEST_CASE("Verify get_tip_amount")
{
	REQUIRE(3 == get_tip_amount(20, .15));
	REQUIRE(4 == get_tip_amount(20, .20));
}