#ifndef CLOCK_H   //Checks so that same class is not created elsewhere
#define CLOCK_H

class clock
{
public:
	int get_hours(long long seconds); 
	int get_minutes(long long seconds);
	int get_seconds(long long seconds);
	void display_time();


};

#endif       //CLOCK_H
