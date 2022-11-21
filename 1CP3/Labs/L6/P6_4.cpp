/*
Program Name: Lab 6 Program 4
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: none
Lists of functions: displayArray
Lists of constants: none
*/

#include <iostream>
#include <iomanip>

using namespace std;

void displayArray(float [][5]);

int main()
{
	static int array[2][3] = { {10, 20, 30},
							   {11, 21, 31}  };

	static float array2[4][5];

	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cout << "Enter item on row " << i << " and colomn " << j << endl;
			cin >> array2[i][j];
			cout << endl;
		}
	}

	int row;
	int column;

	cout << "Array 1: " << endl;
	for(row = 0; row < 2; row++)
	{
		for(column = 0; column < 3; column++)
			cout << setw(4) << array[row][column];
		cout << endl << endl;
	}

	displayArray(array2);

	return 0;
}

void displayArray(float array[][5])
{
	cout << "Array 2: " << endl;
	for(int i = 0 ; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cout << setw(4) << array[i][j] << " ";
		}
		cout << endl;

	}
}

/*

Enter item on row 0 and colomn 0
23

Enter item on row 0 and colomn 1
213

Enter item on row 0 and colomn 2
12

Enter item on row 0 and colomn 3
3

Enter item on row 0 and colomn 4
21

Enter item on row 1 and colomn 0
312

Enter item on row 1 and colomn 1
3

Enter item on row 1 and colomn 2
12

Enter item on row 1 and colomn 3
3

Enter item on row 1 and colomn 4
21

Enter item on row 2 and colomn 0
312

Enter item on row 2 and colomn 1

31

Enter item on row 2 and colomn 2
23

Enter item on row 2 and colomn 3
2

Enter item on row 2 and colomn 4
32

Enter item on row 3 and colomn 0
1

Enter item on row 3 and colomn 1
3

Enter item on row 3 and colomn 2
12

Enter item on row 3 and colomn 3
31

Enter item on row 3 and colomn 4

231

Array 1:
  10  20  30

  11  21  31

Array 2:
  23  213   12    3   21
 312    3   12    3   21
 312   31   23    2   32
   1    3   12   31  231
   
*/