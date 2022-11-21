/*
Program Name: Lab 1 Program 3
Developer: Itteba Gilani
Environment: Visual Studio 2019
Description: Asks for amount to invest/interest rate/number of years and then calculates your interest. Organizes a table of 3x3 using different methods.
List of Variables: amount, interest, years, total, f1, f2, f3, f4, f5, f6, f7, f8, f9
List of Constants: none
Lists of Functions: none
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{
    
    
    float amount;       // Dollars to invest.
    float interest;     // Yearly interest rate.
    float years;        // Number of years.
    float total;        // Total accumulation.

    cout << "Enter amount to invest (dollars) => ";
    cin >> amount;
    cout << "Enter yearly interest rate (0...100) => ";
    cin >> interest;
    cout << "Enter the number of years => ";
    cin >> years;

    interest /= 100;
    total = amount * pow((1 + interest), years);

    cout << endl;
    cout << "The total accumulation is " << total << " dollars.\n";

    
    //list of floats
    float f1, f2, f3, f4, f5, f6, f7, f8, f9;

    f1 = 10;
    f2 = 111;
    f3 = 12;
    f4 = 1344;
    f5 = 142;
    f6 = 13;
    f7 = 150;
    f8 = 15;
    f9 = 18;
    
    //print table 1
    cout << f1 << ' ' << f2 << ' ' << f3 << endl;
    cout << f4 << ' ' << f5 << ' ' << f6 << endl;
    cout << f7 << ' ' << f8 << ' ' << f9 << endl;

    //print table 2
    cout << f1 << '\t' << f2 << '\t' << f3 << endl;
    cout << f4 << '\t' << f5 << '\t' << f6 << endl;
    cout << f7 << '\t' << f8 << '\t' << f9 << endl;


    //print table 3
    cout << setw(10) << f1 << '\t' << setw(10) << f2 << '\t' << setw(10) << f3 << endl;
    cout << setw(10) << f4 << '\t' << setw(10) << f5 << '\t' << setw(10) << f6 << endl;
    cout << setw(10) << f7 << '\t' << setw(10) << f8 << '\t' << setw(10) << f9 << endl;

    //alarm
    cout << "\a";
    cin.get();

    //return
    return 0;
}


/*
Enter amount to invest (dollars)=> 1000
Enter yearly interest rate (0...100) => 1.2
Enter the number of years => 5

The total accumulation is 1061.46 dollars.


10 111 12
1344 142 13
150 15 18


10      111     12
1344    142     13
150     15      18


        10             111              12
      1344             142              13
       150              15              18

*/