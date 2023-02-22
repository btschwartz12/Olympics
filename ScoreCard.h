//ScoreCard.h
//Ryan Li
//Creates a scorecard of 5 athletes

#pragma once //Used so there aren't any accidental recompiles of this exact code again

#include "athlete.h"
#include <array>
#include <string>

class ScoreCard {
	friend class Competition;
public:
	//Doesn't do anything, here for compiler reasons with Competition
	ScoreCard();

	//Reads in an array of length 5 and orders the Athletes by highest score to lowest
	ScoreCard(array<Athlete, 5>& arr);
	
	//Prints out information about the athlete's name, score, and their distance to first
	void printInfo(int r);

	//Switches out the athlete in cell n with the athlete given
	//Returns the old, replaced athlete's name
	//Will update the order of the array
	string switchAthlete(int n, Athlete& ath);

	//BONUS
	//Replaces the athlete in cell n with (old one + ath)
	void athleteFusion(int n, Athlete ath);

private:
	array<Athlete, 5> athArr;
};
