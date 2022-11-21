/*
Program Name: Lab 6 Program 3
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: none
Lists of functions: calculateMaximum
Lists of constants: maxLength
*/

#include <iostream>

using namespace std;

#define maxLength 9  //  Maximum number of array elements.

int calculateMaximum(int []);

int main()
{
	int number[maxLength];
	int index;

	cout << "Enter nine integer numbers and I'll find the maximum value." << endl;
	for(index = 0; index < maxLength; index++)
	{
		cout << "Number[" << index << "]: ";
		cin >> number[index];
	}
	cout << "Thank you..." << endl;

	cout << "The maximum value is " << calculateMaximum(number) << endl;

	return 0;
}

int calculateMaximum(int userArray[])
{
	int index;
	int maximum;

	maximum = userArray[0];
	for(index = 1; index < maxLength; index++)
		if(userArray[index] > maximum)
			maximum = userArray[index];
	
	return (maximum);
}

/*
Enter nine integer numbers and I'll find the minimum value.
Number[0]: 10
Number[1]: 20
Number[2]: 30
Number[3]: 40
Number[4]: 50
Number[5]: 60
Number[6]: 70
Number[7]: 80
Number[8]: 90
Thank you...
The maximum value is 90
*/