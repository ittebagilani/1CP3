/*
Program Name: Program 8_1
Developer: Itteba Gilani
Environment: Visual Studio Code
Purpose: To learn about structs and making new member variables
List of variables: part, quantity, price, shelf, needToOrder, bin1Contents, bin2Contents
List of constants: none
List of functions: none
*/

#include <iostream>

using namespace std;

typedef struct
{
	char part[20];          // Type of part.
	int quantity;           // Number of parts left.
	float price;            // Cost of each part.
	int shelf;	
	bool needToOrder;

} parts_record;

int main()
{
	static parts_record bin1Contents = { "Resistors", 4, 0.05, 3, false };
	static parts_record bin2Contents = { "Capacitors", 3,	0.16, 5, false };

	cout << "Contents of bin # 1:\n";
	cout << "Item => " << bin1Contents.part << "\n";
	cout << "Shelf => " << bin1Contents.shelf << "\n";
	cout << "Quantity => " << bin1Contents.quantity << "\n";
	cout << "Cost each => $" << bin1Contents.price << "\n";

	if(bin1Contents.quantity < 5)
	{
		bin1Contents.needToOrder = true;
		cout << "You need to order some " << bin1Contents.part << endl << endl;
	}

	cout << "Contents of bin # 2:\n";
	cout << "Item => " << bin2Contents.part << "\n";
	cout << "Shelf => " << bin2Contents.shelf << "\n";
	cout << "Quantity => " << bin2Contents.quantity << "\n";
	cout << "Cost each => $" << bin2Contents.price << "\n";

	if(bin2Contents.quantity < 5)
	{
		bin2Contents.needToOrder = true;
		cout << "You need to order some " << bin2Contents.part << endl << endl;
	}

	return 0;
}


/*
Output:

Item => Resistors
Shelf => 3
Quantity => 4
Cost each => $0.05
You need to order some Resistors

Contents of bin # 2:
Item => Capacitors
Shelf => 5
Quantity => 3
Cost each => $0.16
You need to order some Capacitors
*/