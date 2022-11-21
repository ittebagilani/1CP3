/*
Program Name: Assignment 1 Program 1 (Freezing and Boiling Points)
Developer: Itteba Gilani
Environment: Visual Studio Code
Description: Ca
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
   int storeSale;

    vector<int> sales = {};
    vector<int> intSales = {};

    int i = 0;
    while(i < 5)
    {
        cout << "Enter sales for store " << i+1 << endl;
        cin >> storeSale;
        sales.push_back(storeSale);
        i++;
        cin.clear();
        cin.ignore();
    }

    
    for(int i = 0; i < 5; i++)
    {
        int sale = ceil(sales[i] / 100);
        intSales.push_back(sale);

    }
    

    cout << "SALES BAR CHART\n(Each * = $100)" << endl;

    for(int i = 0; i < intSales.size(); i++)
    {
        cout << "Store " << i+1 << ": ";
        for (int j = 0; j < intSales[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*
Enter sales for store 1
500
Enter sales for store 2
400
Enter sales for store 3
300
Enter sales for store 4
200
Enter sales for store 5
100
SALES BAR CHART
(Each * = $100)
Store 1: *****
Store 2: ****
Store 3: ***
Store 4: **
Store 5: *
*/