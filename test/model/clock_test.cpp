#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "clock.h"

TEST_CASE("Test hours form seconds")
{
	clock clock;

	REQUIRE(clock.get_hours(3600) == 1);
	REQUIRE(clock.get_hours(34950) == 9);
	REQUIRE(clock.get_hours(68950) == 19);
	REQUIRE(clock.get_hours(150000) == 41);

}

TEST_CASE("Test hours form minutes")
{
	clock clock;

	REQUIRE(clock.get_minutes(3600) == 0);
	REQUIRE(clock.get_minutes(3800) == 3);
	REQUIRE(clock.get_minutes(34950) == 42);
	//REQUIRE(clock.get_minutes(150000) == 41);

}

TEST_CASE("Test get seconds form seconds since 1970")
{
	clock clock;

	REQUIRE(clock.get_seconds(3600) == 0);
	REQUIRE(clock.get_seconds(38000) == 20);
	REQUIRE(clock.get_seconds(34950) == 30);
	//REQUIRE(clock.get_seconds(150000) == 41);

}



