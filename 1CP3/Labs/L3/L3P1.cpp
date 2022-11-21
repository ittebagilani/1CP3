/*
Program Name: Lab 3 Program 1
Developer: Itteba Gilani
Environment: Visual Studio Code
Description: Inputs base and height of a pyramid and calculates its volume
Lists of variables: base, initialHeight, heightIncrement, endHeight
Lists of constants: none
Lists of functions: pow()
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float base;
    float initialHeight;
    float heightIncrement;
    float endHeight;

    float volume;
    cout << "Enter the length of the base: ";
    cin >> base;

    cout << "Enter the height: ";
    cin >> initialHeight;

    cout << "Enter the height increment: ";
    cin >> heightIncrement;

    cout << "Enter the final height: ";
    cin >> endHeight;

    for (initialHeight; initialHeight < endHeight; initialHeight += heightIncrement)
    {
        volume = (pow(base, 2) * initialHeight) / 3;
        cout << "The volume of the pyramid with base: " << base << " and height: " << initialHeight << " is: " << volume << endl;
    }
    
    return 0;
}

/*
Result:

Enter the length of the base: 5
Enter the height: 3
Enter the height increment: 22
Enter the final height: 100
The volume of the pyramid with base: 5 and height: 3 is: 25
The volume of the pyramid with base: 5 and height: 25 is: 208.333
The volume of the pyramid with base: 5 and height: 47 is: 391.667
The volume of the pyramid with base: 5 and height: 69 is: 575
The volume of the pyramid with base: 5 and height: 91 is: 758.333
*/