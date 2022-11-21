/*
Program Name: Programming Challenge 1, “Miles per Gallon”
Developer: Itteba Gilani
Environment: Visual Studio 2019
Description: This program calculates the miles per gallon of your car. 
Lists of Variables: maxCarGallons, maxCarMileage, milesPerGallon
Lists of Constants: none
Lists of Functions: none
*/


#include <iostream>
using namespace std;

int main()
{
    float maxCarGallons;
    float maxCarMileage;
    float milesPerGallon;
    
    cout << "Enter the maximum number of gallons your car can hold: " << endl; 
    cin >> maxCarGallons;
    
    cout << "Enter the maximum number of miles your car can drive on a full tank" << endl;
    cin >> maxCarMileage;
    
    milesPerGallon = maxCarMileage / maxCarGallons;
    cout << "Your miles per gallon is: " << milesPerGallon << endl;
    
    return 0;
}


/*
Enter the maximum number of gallons your car can hold: 
1000
Enter the maximum number of miles your car can drive on a full tank
10
Your miles per gallon is: 0.01
*/
