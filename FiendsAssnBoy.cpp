//
//  main.cpp
//  friendsAssn
//
//  Created by Ben Schwartz on 10/22/19.
//  Copyright � 2019 Ben Schwartz. All rights reserved.
//

#include <iostream>
#include "Athlete.h"
#include "Competition.h"
#include "Athlete.h"
#include <array>
using namespace std;

void disp(Competition comp)
{
	for (int i = 0; i < 4; i++)
	{
		cout << "**** team " << (i + 1) << " **** : ";
		for (int j = 0; j < 5; j++)
		{
			Athlete a = comp.getAthlete(i + 1, j + 1);
			cout << a.getName() << " = " << a.getScore() << "\t";
		}
		cout << "\n\n";
	}
};

int main()
{
	
	{array<ScoreCard, 4> scs;
	array<ScoreCard, 4> scs2;
	{
		std::cout << "Hello World!\n";
		array<Athlete, 5> arr1;
		arr1[0] = Athlete(1, "Lyan Ri1");
		arr1[1] = Athlete(1, "Raylor Toth1");
		arr1[2] = Athlete(1, "Sminmya Chohoo1");
		arr1[3] = Athlete(1, "Parter Crins1");
		arr1[4] = Athlete(1, "Bob Smith1");
		array<Athlete, 5> arr2;
		arr2[0] = Athlete(20, "Lyan Ri2");
		arr2[1] = Athlete(2, "Raylor Toth2");
		arr2[2] = Athlete(2, "Sminmya Chohoo2");
		arr2[3] = Athlete(2, "Parter Crins2");
		arr2[4] = Athlete(2, "Bob Smith2");
		array<Athlete, 5> arr3;
		arr3[0] = Athlete(3, "Lyan Ri3");
		arr3[1] = Athlete(3, "Raylor Toth3");
		arr3[2] = Athlete(3, "Sminmya Chohoo3");
		arr3[3] = Athlete(3, "Parter Crins3");
		arr3[4] = Athlete(3, "Bob Smith3");
		array<Athlete, 5> arr4;
		arr4[0] = Athlete(4, "Lyan Ri4");
		arr4[1] = Athlete(4, "Raylor Toth4");
		arr4[2] = Athlete(4, "Sminmya Chohoo4");
		arr4[3] = Athlete(4, "Parter Crins4");
		arr4[4] = Athlete(4, "Bob Smith4");
		ScoreCard sc1(arr1);
		ScoreCard sc2(arr2);
		ScoreCard sc3(arr3);
		ScoreCard sc4(arr4);
		scs[0] = sc1;
		scs[1] = sc2;
		scs[2] = sc3;
		scs[3] = sc4;

		scs2[0] = sc2;
		scs2[1] = sc2;
		scs2[2] = sc2;
		scs2[3] = sc2;
	}
	Competition c(scs);
	//Competition c2(scs2);

	disp(c);
	cout << "\n********TEAM 2 WAS PENALIZED 50 POINTS********\n";
	c.penalizeTeam(2, 50);
	disp(c);

	//c.precedenceBONUS();
	}
	




}

