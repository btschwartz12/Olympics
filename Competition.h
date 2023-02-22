//Competition.h
//Ryan Li
//Creates a competition, which consists of scorecards for each team

#pragma once
#include "ScoreCard.h"
#include <array>

class Competition {
public:
	Competition(array<ScoreCard, 4> teamScoreCards); //Simple constructor
	Athlete getAthlete(int teamNum, int placeInTeam); //Get the athlete specified by the team number and their place in the team
	void penalizeTeam(int teamNum, double penalty); //Penalize the team given by giving each athlete of the team the penalty stated
	int firstPlaceTeam(); //Return the team in first though its number. A team's score is the sum of the scores of each player
	friend Competition operator ^ (const Competition& compA, const Competition& compB); //The resultant competition will have teams 1 and 3 from teams 1 and 3 of compA and teams 2 and 4 from teams 2 and 4 of compB
	void precedenceBONUS(); //Just a bonus, not really related at all. Try to trick your grader through precedence and other weirdness
	array<ScoreCard, 4> getSCArray();
private:
	array<ScoreCard, 4> teamScoreCards;
};