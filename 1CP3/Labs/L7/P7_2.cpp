/*
Program Name: Lab 7 Program 3
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: none
Lists of functions: compareStrings
Lists of constants: none
*/

#include <iostream>
#include <cstring>
using namespace std;

void compareStrings(char[], char[]);

int main()
{
	char aString[] = "shopper";
	char bString[] = "shopping";
	char cString[] = "shopper";
	char dString[] = "howdy";

	compareStrings(aString, bString);
	compareStrings(aString, cString);
	compareStrings(aString, dString);

	return 0;
}

void compareStrings(char str1[], char str2[])
{
	int value;
	
	cout << "Enter a number: ";
	cin >> value;


	value = strncmp(str1, str2, value);

	if (value == 0)
	{
		cout << str1 << " is equal to " << str2 << endl;
	}
	else if (value < 0)
	{
		cout << str1 << " precedes " << str2 << "." << endl;
	}
	else if(value > 0)
	{
		cout << str1 << " follows " << str2 << endl;
	}
}


/*
Output

Enter a number: -1
shopper precedes shopping.
Enter a number: 0
shopper is equal to shopper
Enter a number: 1
shopper follows howdy

*/