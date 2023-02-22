//Competition.cpp
//Benny
//

#include "Competition.h"
#include <iostream>

array<ScoreCard, 4> teamScoreCards;

Competition::Competition(array<ScoreCard, 4> teamScoreCards1)
{
    for (int i = 0; i < teamScoreCards1.size(); i++)
        teamScoreCards[i] = teamScoreCards1[i];
}
Athlete Competition::getAthlete(int teamNum, int placeInTeam)
{
    return teamScoreCards[teamNum - 1].athArr[placeInTeam - 1];
}
void Competition::penalizeTeam(int teamNum, double penalty)
{
    ScoreCard& sc = teamScoreCards[teamNum - 1];
    for (int i = 0; i < sc.athArr.size(); i++)
        sc.athArr[i].updateScore(-penalty);
}
int Competition::firstPlaceTeam()
{
    int maxIndex = 0;
    double maxSum, tempSum;
    for (int i = 0; i < teamScoreCards.size(); i++)
    {
        tempSum = 0;
        for (int j = 0; j < teamScoreCards[i].athArr.size(); j++)
            tempSum += teamScoreCards[i].athArr[j].getScore();
        i == 0 ? maxSum = tempSum : (tempSum > maxSum ? maxSum = tempSum, maxIndex = i : 0);
    }
    return maxIndex+1;
}
Competition operator ^ (const Competition & compA, const Competition & compB)
{
    array<ScoreCard, 4> arr;
    Competition c(arr);
    for (int i = 0; i < 4; i++)
        i % 2 == 0 ? c.teamScoreCards[i] = compA.teamScoreCards[i] : c.teamScoreCards[i] = compB.teamScoreCards[i];
    return c;
}
void Competition::precedenceBONUS()
{
    bool IDidTheBonus = true;
    if (IDidTheBonus) {
        std::cout << "Look at the code below this and write in pen\nwhat you think will be output on the grading sheet" << std::endl;
        
        int x = 0, y = 999;
        int a = (x++ && y++) || (x-- || --y);
        cout << y;

        cout << "\nWere you correct?\n+1 to the creator if they tricked you,\n+1/2 to you and +1/2 to them if you figured it out" << std::endl;
    }
}
