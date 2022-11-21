/*
Program Name: Lab 2 Program 1
Developer: Itteba Gilani
Environment: Visual Studio 2019
Description: This program can give you the formula for Ohm's Law based on what you are looking for
Lists of variables: selection
Lists of contants: none
Lists of functions: none
*/

#include <iostream>

using namespace std;

void displayVoltage();
void displayCurrent();
void displayResistance();

void displayVoltage()
{
    cout << "V = I * R" << endl;
}

void displayCurrent()
{
    cout << "I = V / R" << endl;
}

void displayResistance()
{
    cout << "R = V / I" << endl;
}
int main()
{
    // char selection;
	// int selection;   // Item to be selected by program user.
    char selection;

	

        
    do
    {
        cout << "Select the form of Ohm's law needed by choosing the appropriate letter: " << endl;
        cout << "1: Voltage" << endl;
        cout << "2: Current" << endl;
        cout << "3: Resistance" << endl;
        cout << "4: Quit the program" << endl;

        cin >> selection;
 
        // while (selection != '1' || selection != '2' || selection != '3' || selection != '4')
        // {
        //     cout << "Please enter a valid choice:" << endl;
        //     cin >> selection;
        // }

    } while(selection != '1' || selection != '2' || selection != '3' || selection != '4');
    
    
    

    
		
	return 0;
}


/*
Precondition: variable selection remains a char 

Result:

Select the form of Ohm's law needed by choosing the appropriate letter: 
A: Voltage
B: Current
C: Resistance
Your selection (A, B, or C) => C
R = V / I

Conclusion: Program works as expected
*/

/*
Precondition: variable selection is an int

Result:

Select the form of Ohm's law needed by choosing the appropriate letter: 
A: Voltage
B: Current
C: Resistance
Your selection (0, 1, or 2) => 0 
V = I * R

Conclusion: Program works as expected
*/

/*
Precondition: variable selection is a float

Result:
error: switch quantity not an integer

Conclusion: Program does not work as expected because the switch statement requires
an integer value in it, not a float.
*/