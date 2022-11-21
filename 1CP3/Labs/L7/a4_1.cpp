/*
Program Name: Assignment 4 Program 1
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: inputArr, transposedArr, sumArr
Lists of functions: getInputArray, getTransposed, getSum, display
Lists of constants: ROWS, COLS
*/

#include <iostream>
#include <iomanip>

#define ROWS 4
#define COLS 4

using namespace std;

void getInputArray(int [][4]);
void getTransposed(int [][4], int [][4]);
void getSum(int [][4], int[][4], int [][4]);
void display(int [][4], int[][4], int [][4]);

int main()
{
    int inputArr[ROWS][COLS];
    int transposedArr[ROWS][COLS];
    int sumArr[ROWS][COLS];
    
    getInputArray(inputArr);
    getTransposed(inputArr, transposedArr);
    getSum(inputArr, transposedArr, sumArr);
    display(inputArr, transposedArr, sumArr);


    return 0;
}

void getInputArray(int arr[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << "Enter element for row " << i+1 << " colomn " << j+1 << endl;
            cin >> arr[i][j];
        }
    }
}

void getTransposed(int inputArr[][4], int transposedArr[][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            transposedArr[i][j] = inputArr[j][i];
        }
    }
}

void getSum(int inputArr[][4], int transposedArr[][4], int sumArray[][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            sumArray[i][j] = inputArr[i][j] + transposedArr[i][j];
        }
    }
}

void display(int inputArr[][4], int transposedArr[][4], int sumArray[][4])
{
    //input array
    cout << "The original array you entered is: " << endl;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << setw(5) << inputArr[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

    //transposed array
    cout << "The transposed array is: " << endl;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << setw(5) << transposedArr[i][j] << " ";
        }

        cout << endl;
    }
    
    cout << endl;

    //sum array
    cout << "The sum array: " << endl;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << setw(5) << sumArray[i][j] << " ";
        }

        cout << endl;
    }
}

/*
Output:

Enter element for row 1 colomn 1
1
Enter element for row 1 colomn 2
2
Enter element for row 1 colomn 3
3
Enter element for row 1 colomn 4
4
Enter element for row 2 colomn 1
5
Enter element for row 2 colomn 2
6
Enter element for row 2 colomn 3
7
Enter element for row 2 colomn 4
8
Enter element for row 3 colomn 1
9
Enter element for row 3 colomn 2
10
Enter element for row 3 colomn 3
11
Enter element for row 3 colomn 4
12
Enter element for row 4 colomn 1
13
Enter element for row 4 colomn 2
14
Enter element for row 4 colomn 3
15
Enter element for row 4 colomn 4
16
The original array you entered is: 
    1     2     3     4
    5     6     7     8
    9    10    11    12
   13    14    15    16

The transposed array is:
    1     5     9    13
    2     6    10    14
    3     7    11    15
    4     8    12    16

The sum array:
    2     7    12    17
    7    12    17    22
   12    17    22    27
   17    22    27    32

*/