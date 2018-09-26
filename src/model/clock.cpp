#include "clock.h"
#include<iostream>

int Clock::get_hours() const // creates the variables defined within the function into constant so that it cannot be changed 
{
	return seconds / 3600 % 24;
}

int Clock::get_minutes()const // '::' defines the scope
{
	return seconds / 60 % 60;
}

int Clock::get_seconds()const
{
	return seconds % 60;
}

void Clock::display_time()
{
	std::cout << get_hours() << " " << get_minutes() << " " << get_seconds();
	update_time();
}

void Clock::update_time()
{
	seconds += 1;
}
