//ScoreCard.cpp
//Ryan Li
//Creates a scorecard of 5 athletes

#include "Athlete.h"
#include "ScoreCard.h"
#include <algorithm>
#include <iostream>

using namespace std;

/*
class ScoreCard {
public:
	ScoreCard();
	ScoreCard(array<Athlete, 5>& arr);
	void printInfo(int r);
	string switchAthlete(int n, Athlete& ath);
private:
	array<Athlete, 5> athArr;
	void sortArr();
};
*/

ScoreCard::ScoreCard() {}

ScoreCard::ScoreCard(array<Athlete, 5>& inputArr) {
	athArr = inputArr;
	//std sort time; I created an overloaded operator so I could do this
	sort(athArr.begin(), athArr.end(), greater<Athlete>());
};

void ScoreCard::printInfo(int r) {
	cout.precision(4);
	cout.setf(ios::showpoint);
	cout << "Name:                " << athArr[r].getName() << endl
		<< "Score:               " << athArr[r].getScore() << endl;
	if (r == 0) {
		cout << "Distance from first: 0.0" << endl;
	} else {
		cout << "Distance from first: " << athArr[0].getScore() - athArr[r].getScore() << endl;
	}
		
}

string ScoreCard::switchAthlete(int n, Athlete& ath) {
	Athlete oldAth = athArr[n];
	athArr[n] = ath;

	//I know this was supposed to have that precondition buuuuuut
	sort(athArr.begin(), athArr.end(), greater<Athlete>());
	return oldAth.getName();
}

void ScoreCard::athleteFusion(int n, Athlete ath) {
	athArr[n] = athArr[n] + ath;
	sort(athArr.begin(), athArr.end(), greater<Athlete>());
}