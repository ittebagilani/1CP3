/*
Program Name: Program 8_2
Developer: Itteba Gilani
Purpose: To create a cheque structure from scratch
Environment: Visual Studio Code
List of variables: part, quantity, price, shelf, needToOrder, bin1Contents, bin2Contents
List of constants: none
List of functions: none
*/


#include <iostream>

using namespace std;

typedef struct
{
	char bank_name[20];          // Bank name.
	int cheque_number;           // Number of parts left.
	float cheque_amount;            // Cost of each part.

} Cheque;

int main()
{
	static Cheque cheque1 = { "TD", 25, 50.43 };
	static Cheque cheque2 = { "EZ", 37,	902.21 };
	static Cheque cheque3 = { "RBC", 1,	1922.31 };
	static Cheque cheque4 = { "SCOTIA", 4, 0.21 };
	static Cheque cheque5 = { "DK", 370, 10.91 };
	static Cheque cheque6;
	

	cout << "Enter the bank name for cheque 6: ";
	cin >> cheque6.bank_name;
	cout << endl;

	cout << "Enter the number for cheque 6: ";
	cin >> cheque6.cheque_number;
	cout << endl;

	cout << "Enter the amount for cheque 6: ";
	cin >> cheque6.cheque_amount;
	cout << endl;


	Cheque cheques[] = {cheque1, cheque2, cheque3, cheque4, cheque5, cheque6};
	string bankName;
	
	
	
	for(int i = 0; i < 6; i++)
	{	
		cout << endl << "Cheque " << i+1 << ":" << endl;
		cout << "The bank name is: " << cheques[i].bank_name << endl;
		cout << "The cheque number is: " << cheques[i].cheque_number << endl;
		cout << "The cheque amount is: " << cheques[i].cheque_amount << endl;
		cout << endl;
	}

	cout << "Enter a bank name: ";
	cin >> bankName;

	for(int i = 0; i < 6; i++)
	{
		if(bankName == cheques[i].bank_name)
		{
			cout << "Bank Name: " << cheques[i].bank_name << endl;
			cout << "Cheque Number: " << cheques[i].cheque_number << endl;
			cout << "Cheque Amount: " << cheques[i].cheque_amount << endl;

			if(!(bankName == cheques[i].bank_name))
			{
				
			}
		}
		else
		{
			cout << "Bank not found. Please enter a bank from the list." << endl;
			cin >> bankName;
		}
	}

	return 0;
}
