/*
Program Name: Lab 1 Program 4
Developer: Itteba Gilani
Environment: Visual Studio 2019
Description: This program does basic math using user inputted numbers. 
Lists of Variables: myInt, intAbs, intSquare, intSquareRoot, realNum, realSquare, realSquareRoot, naturalLog, base10Log, angle, sinAngle, cosAngle, tanAngle
Lists of Constants: M_PI
Lists of Functions: pow(), log(), log10(), sin(), cos(), sqrt(), tan(), abs()
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int myInt;
    float intAbs;
    float intSquare;
    float intSquareRoot;
    
    //ask for negative int
    cout << "Input a negative integer: " << endl;
    
    //let user input int and print choice to console
    cin >> myInt;
    cout << "Your chosen integer is: " << myInt << endl;
    
    //calculate absolute value of int and print to console
    intAbs = abs(myInt);
    cout << "The absolute value of " << myInt << " is: " << intAbs << endl;
    
    //square and squareroot of int
    intSquare = pow(intAbs, 2);
    cout << setw(8) << "The square of " << intAbs << " is: " << intSquare << endl;
    
    intSquareRoot = sqrt(intAbs);
    cout << setw(8) << "The square root of " << intAbs << " is: " << intSquareRoot << endl << endl;
    
    //ask for positive real number
    float realNum;
    cout << "Enter a positive real number:" << endl;
    cin >> realNum;
    
    //real number Square
    float realSquare = pow(realNum, 2);
    cout << "The square of " << realNum << " is: " << realSquare << endl;
    
    //real number squareroot
    float realSquareRoot = sqrt(realNum);
    cout << "The square root of " << realNum << " is: " << realSquareRoot << endl;
    
    //real number natural log
    float naturalLog = log(realNum);
    cout << "The natural log of " << realNum << " is: " << naturalLog << endl;
    
    //real number base 10 log
    float base10Log = log10(realNum);
    cout << "The base 10 log of " << realNum << " is: " << base10Log << endl << endl;
    
    
    //ask for angle in degrees
    cout << "Input an angle in degrees:" << endl;
    float angle;
    cin >> angle;
    
    //sin of angle
    float sinAngle = sin(angle*3.14 / 180);
    cout << setprecision(3) << "The sin of " << angle << " is: " << sinAngle << endl;
    
    
    //cos of angle
    float cosAngle = cos(angle*3.14 / 180);
    cout << setprecision(3) << "The cos of " << angle << " is: " << cosAngle << endl;
    
    //tan of angle
    float tanAngle = tan(angle*3.14 / 180);
    cout << setprecision(3) << "The tan of " << angle << " is: " << tanAngle << endl;
    
    return 0;
}

/*
Input a negative integer: 
-9
Your chosen integer is: -9
The absolute value of -9 is: 9
The square of 9 is: 81
The square root of 9 is: 3

Enter a positive real number:
100
The square of 100 is: 10000
The square root of 100 is: 10
The natural log of 100 is: 4.60517
The base 10 log of 100 is: 2

Input an angle in degrees:
30
The sin of 30 is: 0.5
The cos of 30 is: 0.866025
The tan of 30is: 0.57735
*/