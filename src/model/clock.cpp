#include "clock.h"
#include<chrono>
#include<iostream>

int clock::get_hours(long long seconds)
{
	return seconds /3600 % 24;
}

int clock::get_minutes(long long seconds)
{
	return seconds / 60 % 60;
}

int clock::get_seconds(long long seconds)
{
	return seconds % 60;
}

void clock::display_time()
{
	auto seconds = std::chrono::system_clock::now().time_since_epoch() /
		std::chrono::seconds(1);

	std::cout << get_hours(seconds) << "" << get_minutes(seconds) << "" << get_seconds(seconds);
}
