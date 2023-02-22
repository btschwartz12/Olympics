//Athlete.h
//Header by Ryan Li, original code by Jess Hrich
//Defines an Athlete object

#pragma once
#include <string>
using namespace std;

class Athlete
{
public:
	Athlete();
	Athlete(double newScore, string newName); //Creates an athlete with the score and name specified
	void updateScore(double addMe); //Changes the score by how much is passed in
	double getScore(); //Get athlete score
	string getName(); //Get athlete name
	
	//Used so C++ can sort; added by Ryan
	//Returns if the first athlete's score is greater than the second's
	friend bool operator > (const Athlete& first, const Athlete& second);

	//BONUS; added by Ryan
	friend Athlete operator + (const Athlete& first, const Athlete& second);

private:
	double score; //Score and name
	string name; //Score and name
};