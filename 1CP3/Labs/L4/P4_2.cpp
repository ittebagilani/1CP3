/*
* Program Name: Lab 4 Program 2
* Developer: Itteba Gilani
* Environment: Visual Studio 2019
* Description: Calculates combined atomic weight of Germanium and Silver
* Variable Names: total
*/
#include <iostream>
#include "data.h"

using namespace std;

int main()
{
	float total;

	cout << head;
	cout << Ge;
	cout << Ag;
	total = Ge_Wt + Ag_Wt;
	cout << "The combined atomic weights of germanium and silver is " << total << endl;

	return 0;
}

/*
Results:
Element       Symbol    Atomic Number     Atomic Weight
Germanium       Ge           32               72.60
Silver          Ag           47              107.88
The combined atomic weights of germanium and silver is 180.48


I was not allowed to add data.h so here it is:

#define head   "Element       Symbol    Atomic Number     Atomic Weight\n"
#define Ge     "Germanium       Ge           32               72.60\n"
#define Si     "Silicon         Si           14               28.09\n"
#define Au     "Gold            Au           79              197.2\n"
#define Ag     "Silver          Ag           47              107.88\n"
#define As     "Arsenic         As           33               74.91\n"
#define Ge_Wt  72.60
#define Si_Wt  28.09
#define Au_Wt  197.2
#define Ag_Wt  107.88
#define As_Wt  74.91
*/