/*
* Program Name: Lab 4 Program 3
* Developer: Itteba Gilani
* Environment: Visual Studio 2019
* Description: Displays voltage, current, and resistance formula based on user's choice.
* Variable Names: selection
* Function Names: displayVoltage(), displayCurrent(), displayResistance(), exitProgram()
*/

#include <iostream>
#include <limits>
using namespace std;

void displayVoltage();
void displayCurrent();
void displayResistance();
void exitProgram();

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

void exitProgram()
{
    exit(0);
}

int main()
{
	char selection;   // Item to be selected by program user.

    do
    {
        cout << "Select the form of Ohm's law needed by choosing the appropriate letter: " << endl;
        cout << "1: Voltage" << endl;
        cout << "2: Current" << endl;
        cout << "3: Resistance" << endl;
        cout << "4: Quit the program" << endl;
        cout << "Your selection (1, 2, 3, or 4) => ";
        cout << "Only the first character will be accepted" << endl;
        selection = cin.get();
        cin.ignore(100000000, '\n');
        
        switch(selection)
        {
            case '1':
                displayVoltage();
                break;
            case '2':
                displayCurrent();
                break;
            case '3':
                displayResistance();
                break;
            case '4':
                exitProgram();
            default:
                cout << "That was not one of the proper selections. Please select again" << endl;
                continue;
                cin.clear();
        }


    } while (selection != '1' || selection != '2' || selection != '3' || selection != '4');


	return 0;
}

/*
Results:

Select the form of Ohm's law needed by choosing the appropriate letter: 
1: Voltage
2: Current
3: Resistance
4: Quit the program
Your selection (1, 2, 3, or 4) => 6
That was not one of the proper selections. Please select again
Select the form of Ohm's law needed by choosing the appropriate letter:
1: Voltage
2: Current
3: Resistance
4: Quit the program
Your selection (1, 2, 3, or 4) => 3
R = V / I
Select the form of Ohm's law needed by choosing the appropriate letter:
1: Voltage
2: Current
3: Resistance
4: Quit the program
Your selection (1, 2, 3, or 4) => 2
I = V / R
Select the form of Ohm's law needed by choosing the appropriate letter:
1: Voltage
2: Current
3: Resistance
4: Quit the program
Your selection (1, 2, 3, or 4) => 4

*/