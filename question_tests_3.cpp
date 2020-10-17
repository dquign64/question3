#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"
#include "question3.cpp"
#include "main.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Test get_cookie_ingredient function"){
	REQUIRE(get_cookie_ingredients(48) == 1);
	REQUIRE(get_cookie_ingredients(96)==2);
	REQUIRE(get_cookie_ingredients(24)==.5);
}