/*
Program Name: Lab 2 Program 1
Developer: Itteba Gilani
Environment: Visual Studio 2019
Description: This program calculates your bank charges for the month
Lists of variables: initialBalance, numChecks, bankCharges
Lists of contants: none
Lists of functions: none
*/


#include <iostream>

using namespace std;

int main()
{

    float initialBalance;
    int numChecks;
    float bankCharges = 10.0;

    cout << "Enter the beginning balance" << endl;
    cin >> initialBalance;

    if(initialBalance < 0)
    {
        cout << "URGENT: YOUR ACCOUNT IS OVERDRAWN" << endl;
        return 0;
    }   
    else if(initialBalance <= 400) bankCharges += 15;

    cout << "Balance is: " << initialBalance << endl;
    cout << "Enter the number of checks:";
    cin >> numChecks;

    if(numChecks < 20) 
        bankCharges += 0.1 * numChecks;
    else if(numChecks >= 20 && numChecks <= 39)
        bankCharges += 0.08 * numChecks;
    else if(numChecks >= 40 && numChecks <= 59)
        bankCharges += 0.06 * numChecks;
    else if(numChecks >= 60)
        bankCharges += 0.04 * numChecks;

    cout << "Your bank charges for the month is: " << bankCharges << endl;  

    return 0;

}

/*
Precondition: balance > 400

Result: 

Enter the beginning balance
5000
Balance is: 5000
Enter the number of checks:40
Your bank charges for the month is: 10.06
*/

/*
Precondition: balance < 400

Result: 

Enter the beginning balance
300
Balance is: 300
Enter the number of checks:10 
Your bank charges for the month is: 25.1
*/