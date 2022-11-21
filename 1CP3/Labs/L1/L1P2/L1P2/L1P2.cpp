/*
* Program Name: Lab 1 Program 2
* Developer: Itteba Gilani
* Environment: Visual Studio 2019
* Description: This program gets two values for resistors from the user and then finds the equivalent resistance of the two resistors.
* Lists of Variables: none
* Lists of Constants: none
* Lists of Functions: none
* 
*/

#include <iostream>
using namespace std;

int main()
{
    float r1;
    float r2;
    float req;

    cout << "Enter the value of resistor 1 (ohms) => ";
    cin >> r1;

    cout << "Enter the value of resistor 2 (ohms) => ";
    cin >> r2;

    req = (r1 * r2) / r1 + r2;

    cout << endl << "The equivalent resistance is " << req << "ohms." << endl;
    cout << "Half of " << r1 << " ohms is " << (1.0 / 2.0) * r1 << " ohms" << endl;

    return 0;
}


/*
Enter the value of resistor 1 (ohms) => 5
Enter the value of resistor 2 (ohms) => 10

The equivalent resistance is 20ohms.
*/