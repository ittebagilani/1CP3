/*
Program Name: Lab 6 Program 2
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: none
Lists of functions: myThirdArray, displayArray
Lists of constants: none
*/

#include <iostream>

using namespace std;

void myThirdArray(int []);
void displayArray(int [], float [], int []);

int main()
{
	int array[3];
	float array2[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
	int array3[5]; 
	myThirdArray(array3);
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;


	

	displayArray(array, array2, array3);

	return 0;
}

void myThirdArray(int array[])
{

	for(int i = 0; i < 5; i++)
	{
		cout << "Enter a value for array item " << i << endl;
		cin >> array[i];
	}

	
}

void displayArray(int nums[], float nums2[], int nums3[])
{
	for(int i = 0; i < 3; i++)
	{
		cout << "Value of array 1 value " << i << " is: " << nums[i] << endl;
	}

	for(int i = 0; i < 4; i++)
	{
		cout << "Value of array 2 value " << i << " is: " << nums2[i] << endl;
	}

	for(int i = 0; i < 5; i++)
	{
		cout << "Value of array 3 value " << i << " is: " << nums3[i] << endl;
	}
}


/*
Enter a value for array item 0
10
Enter a value for array item 1
20
Enter a value for array item 2
30
Enter a value for array item 3
40
Enter a value for array item 4
50
Value of array 1 value 0 is: 10
Value of array 1 value 1 is: 20
Value of array 2 value 0 is: 0.1
Value of array 2 value 1 is: 0.2
Value of array 2 value 2 is: 0.3
Value of array 2 value 3 is: 0.4
Value of array 3 value 0 is: 10
Value of array 3 value 1 is:
PS C:\Users\itteb\OneDrive\Documents\Coding\1CP3\Labs\L6> ./P6_2
Enter a value for array item 0
10
Enter a value for array item 1
20
Enter a value for array item 2
30
Enter a value for array item 3
40
Enter a value for array item 4
50
Value of array 1 value 0 is: 10
Value of array 1 value 1 is: 20
Value of array 1 value 2 is: 30
Value of array 2 value 0 is: 0.1
Value of array 2 value 1 is: 0.2
Value of array 2 value 2 is: 0.3
Value of array 2 value 3 is: 0.4
Value of array 3 value 0 is: 10
Value of array 3 value 1 is: 20
Value of array 3 value 2 is: 30
Value of array 3 value 3 is: 40
Value of array 3 value 4 is: 50
*/