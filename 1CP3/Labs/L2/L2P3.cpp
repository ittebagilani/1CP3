/*
Program Name: Lab 2 Program 3
Developer: Itteba Gilani
Environment: Visual Studio 2019
Description: This program calculates area of circle, rectangle, or triangle
Lists of variables: pi, r, area, length, width, base, height, userInput
Lists of contants: none
Lists of functions: areaCircle(), areaRectangle(), areaTriangle(), pow()
*/

#include <iostream>
#include <cmath>
using namespace std;

void areaCircle()
{
    float pi = 3.14159;
    float r;
    float area;
    cout << "Enter radius of circle" << endl;
    cin >> r;
    area = pi * pow(r, 2);
    cout << "The area of the circle is: " << area << endl;
}

void areaRectangle()
{
    float length;
    float width;
    float area;

    cout << "Enter length of rectangle" << endl;
    cin >> length;
    cout << "Enter width of rectangle" << endl;
    cin >> width;

    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
}

void areaTriangle()
{
    float base;
    float height;
    float area;

    cout << "Enter base of triangle" << endl;
    cin >> base;
    cout << "Enter height of triangle" << endl;
    cin >> height;

    area = (base * height) / 2;
    cout << "Area of triangle is: " << area << endl; 
}

void intro()
{
    cout << "Geometry Calculator" << endl;
    cout << "\t1. Calculate the Area of a Circle" << endl;
    cout << "\t2. Calculate the Area of a Rectangle" << endl;
    cout << "\t3. Calculate the Area of a Triangle" << endl;
    cout << "\t4. Quit" << endl;
    cout << "Enter your choice: (1-4)" << endl;
}

void validateInput(int input)
{
    

    while (input <= 0 || input > 4) 
    {
        cin.ignore();
        cin.clear(); 
        cout << "Re-enter a valid value! " << endl;
        cin >> input;
    }
}


int main()
{
    intro();

    int userInput;
    cin >> userInput;

    validateInput(userInput);

    switch(userInput)
    {
        case 1:
            areaCircle();
            break;
        case 2:
            areaRectangle();
            break;
        case 3:
            areaTriangle();
            break;
        case 4:
            exit(0);
    }

    return 0;
}

/*
Case 1

Result:
Geometry Calculator
        1. Calculate the Area of a Circle
        2. Calculate the Area of a Rectangle
        3. Calculate the Area of a Triangle
        4. Quit
Enter your choice: (1-4)
Enter radius of circle
2
The area of the circle is: 12.5664




Case 2

Result:
Geometry Calculator
        1. Calculate the Area of a Circle
        2. Calculate the Area of a Rectangle
        3. Calculate the Area of a Triangle
        4. Quit
Enter your choice: (1-4)
2
Enter length of rectangle
3
Enter width of rectangle
4
The area of the rectangle is: 12


Case 3
Geometry Calculator
        1. Calculate the Area of a Circle
        2. Calculate the Area of a Rectangle
        3. Calculate the Area of a Triangle
        4. Quit
Enter your choice: (1-4)
3
Enter base of triangle
2
Enter height of triangle
3
Area of triangle is: 3



Case 4

Result:
Geometry Calculator
        1. Calculate the Area of a Circle
        2. Calculate the Area of a Rectangle
        3. Calculate the Area of a Triangle
        4. Quit
Enter your choice: (1-4)
4


*/