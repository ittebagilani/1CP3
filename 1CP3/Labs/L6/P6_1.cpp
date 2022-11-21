/*
Program Name: Lab 6 Program 1
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: none
Lists of functions: none
Lists of constants: none
*/
#include <iostream>

using namespace std;

int main()
{
	int array[3];

	array[0] = 10;
	array[1] = 20;
	array[2] = 30;

	// cout << "contents of array[0] => " << array[0] << endl;
	// cout << "contents of array[1] => " << array[1] << endl;
	// cout << "contents of array[2] => " << array[2] << endl;

	for(int i = 0; i < 3; i++)
	{
		cout << "contents of array[" << i << "] => " << array[i] << endl;
	}
	return 0;
}

/*
Result of Output:
contents of array[0] => 10
contents of array[1] => 20
contents of array[2] => 30

The reason you cannot do cout for array[3] is because that index is out of bounds
*/