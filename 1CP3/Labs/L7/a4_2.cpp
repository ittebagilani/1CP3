/*
Program Name: Assignment 4 Program 2
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: address, city, comma, userCity, fullAddress
Lists of functions: getFullAddress, getUserCity, displayAddress
Lists of constants: none
*/

#include <iostream>
#include <cstring>

using namespace std;

string getFullAddress(string, string, string);
string getUserCity(string, string);
void displayAddress(string);

int main()
{

    string address = "123 Big City Street";
    string city = "Smalltown";
    string comma = ", ";
    string userCity = "";
    string fullAddress = getFullAddress(address, city, comma);

    
    userCity = getUserCity(userCity, city);

    displayAddress(fullAddress);

    return 0;
}

string getFullAddress(string address, string city, string comma)
{
    return(address + comma + city);
}

string getUserCity(string userCity, string city)
{
    do
    {

        cout << "Enter the name of a city: ";
        cin >> userCity;

        if(userCity == city)
        {
            cout << "nice\n";
            break;
        }
    
    } while (userCity != city);

    return userCity;
}   

void displayAddress(string address)
{
    cout << "The address is: " << address << endl;
}


/*
Output:

Enter the name of a city: sda
Enter the name of a city: asda
Enter the name of a city: sad
Enter the name of a city: asd
Enter the name of a city: Smalltown
nice
The address is: 123 Big City Street, Smalltown


*/