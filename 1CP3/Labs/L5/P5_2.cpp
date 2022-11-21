/*
Program Name: Lab 5 Program 2
Developer: Itteba Gilani
Environment: Visual Studio Code
Description: Inputs base and height of a pyramid and calculates its volume
Lists of variables: base, initialHeight, heightIncrement, endHeight
Lists of constants: none
Lists of functions: pow(), purposeOfProgram, inputData, performCalculations, displayOutput()
*/

#include <iostream>
#include <math.h>

using namespace std;

void purposeOfProgram(void);
void inputData(float *base, float *initialHeight, float *heightIncrement, float *endHeight);
float performCalculations(float *base, float *initialHeight, float *heightIncrement, float *endHeight, float volume);
void displayOutput(float *base, float *initialHeight, float volume);


int main()
{
    float base;
    float initialHeight;
    float heightIncrement;
    float endHeight;
    float volume;

    purposeOfProgram();
    inputData(&base, &initialHeight, &heightIncrement, &endHeight);
    volume = performCalculations(&base, &initialHeight, &heightIncrement, &endHeight, volume);

    return 0;
}

void purposeOfProgram()
{
    cout << "This program will calculate the volume of pyramid with a specified base and height." << endl;
}

void inputData(float *base, float *initialHeight, float *heightIncrement, float *endHeight)
{
    cout << "Enter the length of the base: ";
    cin >> *base;

    cout << "Enter the height: ";
    cin >> *initialHeight;

    cout << "Enter the height increment: ";
    cin >> *heightIncrement;

    cout << "Enter the final height: ";
    cin >> *endHeight;
}

float performCalculations(float *base, float *initialHeight, float *heightIncrement, float *endHeight, float volume)
{
    for (*initialHeight; *initialHeight < *endHeight; *initialHeight += *heightIncrement)
    {
        volume = (pow(*base, 2) * (*initialHeight)) / 3;
        displayOutput(base, initialHeight, volume);
    }

    return volume;
}

void displayOutput(float *base, float *initialHeight, float volume)
{
    cout << "The volume of the pyramid with base: " << *base << " and height: " << *initialHeight << " is: " << volume << endl;
}

/*
Result:

Enter the length of the base: 100
Enter the height: 20
Enter the height increment: 1
Enter the final height: 25
The volume of the pyramid with base: 100 and height: 20 is: 66666.7
The volume of the pyramid with base: 100 and height: 21 is: 70000
The volume of the pyramid with base: 100 and height: 22 is: 73333.3
The volume of the pyramid with base: 100 and height: 23 is: 76666.7
The volume of the pyramid with base: 100 and height: 24 is: 80000
*/