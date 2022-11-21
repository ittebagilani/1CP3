/*
Program Name: Lab 7 Program 1
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: myString, nickName, dateStarted
Lists of functions: readName, getNickname, getDateStartedProgram, displayOutput
Lists of constants: none
*/

#include <iostream>

using namespace std;

void readName(char []);
void getNickname(char []);
void getDateStartedProgram(int []);
void displayOutput(char[], char[], int[]);


int main()
{
	char myString[20];
	char nickname[20];
	int dateStarted[2];

	readName(myString);
	cout << "Hello there " << myString << "!" << endl << endl;

	getNickname(nickname);
	cout << "Hello there " << nickname << "!" << endl << endl;

	getDateStartedProgram(dateStarted);
	cout << "Date started B.Tech Program: " << dateStarted[0] << "/" << dateStarted[1] << endl << endl;

	displayOutput(myString, nickname, dateStarted);
	return 0;
}

void readName(char name[])
{
	cout << "Enter your full name => ";
	cin.getline(name, 20);
	
}

void getNickname(char nickname[])
{
	cout << "Enter your nickname => ";
	cin.getline(nickname, 20);
	
}

void getDateStartedProgram(int dateStarted[])
{
	cout << "Enter the month you started B.Tech Program => ";
	cin >> dateStarted[0];
	cout << "Enter the year you started B.Tech Program => ";
	cin >> dateStarted[1];
	
	cout << endl;
}

void displayOutput(char myString[], char nickname[], int dateStarted[])
{

	for(int i = 0; i < 20; i++)
	{
		cout << myString[i];
		if(myString[i] == 0)
		{
			break;
		}
	}

	cout << endl;

	for(int i = 0; i < 20; i++)
	{
		cout << nickname[i];
		if(nickname[i] == 0)
		{
			break;
		}
	}

	cout << endl;

	for(int i = 0; i < 2; i++)
	{
		cout << dateStarted[i] << "/";
		if(dateStarted[i] == 0)
		{
			break;
		}
	}
}

/*
Output:

Enter your full name => itteba gilani
Hello there itteba gilani!

Enter your nickname => monkey bun
Hello there monkey bun!

Enter the month you started B.Tech Program => 9
Enter the year you started B.Tech Program => 22

Date started B.Tech Program: 9/22

itteba gilani
monkey bun
9/22/

*/