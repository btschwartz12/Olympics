// Athlete.cpp

//athlete class written by Jess Hrich
//With modifications by Ryan Li
//intended for use by SHS C++ Classroom only

#include "Athlete.h"
#include <iostream>
#include <string>
using namespace std;

//This is a loooooooong comment basically
#if 0
class Athlete
{
public:
	Athlete();
	Athlete(double newScore, string newName);
	void updateScore(double addMe);
	double getScore();
	string getName();

private:
	double score;
	string name;

};
#endif
Athlete::Athlete()
{
	score = 0;
	name = "bob";
};
Athlete::Athlete(double newScore, string newName)
{
	score = newScore;
	name = newName;
};
void Athlete::updateScore(double addMe)
{
	score += addMe;
};
double Athlete::getScore()
{
	return score;
};
string Athlete::getName()
{
	return name;
};

//Used so C++ can sort; added by Ryan
bool operator > (const Athlete& first, const Athlete& second) {
	return first.score > second.score;
}

//Used for BONUS; added by Ryan
Athlete operator + (const Athlete& first, const Athlete& second) {
	return Athlete(first.score + second.score, first.name + second.name);
}