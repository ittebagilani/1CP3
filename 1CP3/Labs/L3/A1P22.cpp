/*
Program Name: Assignment 1 Program 1 (Freezing and Boiling Points)
Developer: Itteba Gilani
Environment: Visual Studio Code
Description: Tells you if a specific substance will boil or freeze.
Lists of variables: 
Lists of constants:
Lists of functions:
*/

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;


int main()
{
    float storeSale1;
    float storeSale2;
    float storeSale3;
    float storeSale4;
    float storeSale5;

    cout << "Enter sales for store 1: ";
    cin >> storeSale1; 

    cout << "Enter sales for store 2: ";
    cin >> storeSale2;

    cout << "Enter sales for store 3: ";
    cin >> storeSale3;

    cout << "Enter sales for store 4: ";
    cin >> storeSale4;

    cout << "Enter sales for store 5: ";
    cin >> storeSale5;


    cout << "SALES BAR CHART\n(Each * = $100" << endl;


    cout << "Store 1: ";
    for(float i = 0.; i < floor(storeSale1 / 100); i++)
    {
        cout << "*";
    }

    cout << endl;
    

    cout << "Store 2: ";
    for(float i = 0.; i < floor(storeSale2 / 100); i++)
    {
        cout << "*";
    }
    
    cout << endl;

    cout << "Store 3: ";
    for(float i = 0.; i < floor(storeSale3 / 100); i++)
    {
        cout << "*";
    }
    
    cout << endl;

    cout << "Store 4: ";
    for(float i = 0.; i < floor(storeSale4 / 100); i++)
    {
        cout << "*";
    }
    
    cout << endl;
    
    cout << "Store 5: ";
    for(float i = 0.; i < floor(storeSale5/ 100); i++)
    {
        cout << "*";
    }
    
    cout << endl;

    return 0;
}

/*
Enter sales for store 1: 500
Enter sales for store 2: 400
Enter sales for store 3: 300
Enter sales for store 4: 200
Enter sales for store 5: 100
SALES BAR CHART
(Each * = $100
Store 1: *****
Store 2: ****
Store 3: ***
Store 4: **
Store 5: *
*/