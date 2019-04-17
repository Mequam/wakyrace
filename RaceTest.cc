#include <iostream>
#include <string>
#include "Race.h"
int main(int argc,char * argv[])
{
	int roll;
	if (argc > 1)
	{
		roll = stoi(argv[1]);
		if (roll < 0) {roll *= -1;}
	}
	else {roll = 1;}

	Rng dice;
	int* mod = new int[6];
	for (int i = 0; i < 6; i ++) 
	{
		mod[i] = i;
	}
	Race TestRace;

	for(int i = 0; i < roll; i++)
	{
		TestRace = Race(100,"Sentalians", mod,&dice);
		TestRace.ToString();
	}
	return 1;
}
