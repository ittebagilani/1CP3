/*
Program Name: Assignment 1 Program 1 (Freezing and boiling Points)
Developer: Itteba Gilani
Environment: Visual Studio Code
Description: Calculates the susbstances that freeze and boil at certain temps.
Lists of variables: temp, freeze, boil
Lists of constants: none
Lists of functions: none
*/

#include <iostream>


using namespace std;

int main()
{
    float temp;
    char freeze;
    char boil;
    float freezingPoints[4] = {-173, -38, -362, 32};
    float boilingPoints[4] = {172, 676, -306, 212};

    cout << "Substance      Freezing Point(F)           boiling Point(F)" << endl;
    cout << "Ethyl Alcohol      " << freezingPoints[0] << "                          " << boilingPoints[0] << endl;
    cout << "Mercury             " << freezingPoints[1] << "                          " << boilingPoints[1] << endl;
    cout << "Oxygen             " << freezingPoints[2] << "                         " << boilingPoints[2] << endl;
    cout << "Water                " << freezingPoints[3] << "                          " << boilingPoints[3] << endl;

    cout << "Enter a temperature: ";
    cin >> temp;

    cout << "Temperature picked is: " << temp << endl << endl;


    if (temp <= -362)
		freeze = 'o';
	else if (temp < -306)
		freeze = 'e';
	else if (temp <= -173)
	{
		freeze = 'e';
		boil = 'o';
	}	
	else if (temp <= -38)
	{
		freeze = 'm';
		boil = 'w';
	}	
	else if (temp <= 32)
	{
		freeze = 'w';
		boil = 'o';
	}	
	else if (temp > 32 && temp < 172)
		boil = 'o';	
	else if (temp >= 676)
		boil = 'm';
	else if (temp >= 212)
		boil = 'w';	
	else if (temp >= 172)
		boil = 'e';	
	
	switch(freeze)
	{
		case 'o' : cout << "Oxygen, ";
		case 'e' : cout << "Ethyl alcohol, ";
		case 'm' : cout << "Mercury and ";    
		case 'w' : cout << "Water will freeze. ";
	}
	switch(boil)
	{
		
		case 'm' : cout << "Mercury, ";
		case 'w' : cout << "Water, ";
		case 'e' : cout << "Ethyl alcohol and ";
		case 'o' : cout << "Oxygen will boil ";
	}


    return 0;
}

/*
Substance      Freezing Point(F)           boiling Point(F)
Ethyl Alcohol      -173                          172       
Mercury             -38                          676
Oxygen             -362                         -306
Water                32                          212
Enter a temperature: 300
Temperature picked is: 300

Water, Ethyl alcohol and Oxygen will boil
*/