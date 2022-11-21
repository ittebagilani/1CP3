/*
Program Name: Lab 8 Program 1
Developer: Itteba Gilani
Purpose: create member variables and work closely with structs
Environment: Visual Studio Code
Lists of variables: manufacturer, quantity, price_each, shelf, needToOrder, total_value
Lists of functions: none
Lists of constants: none
*/
#include <iostream>


using namespace std;

int main()
{
	struct
	{
		char  manufacturer[20];     // Resistor manufacturer.
		int   quantity;             // Number of transistors left.
		float price_each;           // Cost of each resistor.
		int shelf;
		bool needToOrder;
	} resistors;                        // Structure variable.

	float total_value;                  // Total value of parts.

	// Display variables:

	// Get name of manufacturer:

	cout << "Name of manufacturer => ";
	cin >> resistors.manufacturer;

	//Get shelf number
	cout << "Number of shelf => ";
	cin >> resistors.shelf;

	// Get number of parts left:

	cout << "Number of parts left => ";
	cin >> resistors.quantity;

	// Get cost of each part:

	cout << "Cost of each part => ";
	cin >> resistors.price_each;

	// Calculate total value:

	total_value = resistors.quantity * resistors.price_each;


	//Figure out if we need to order more parts
	

	// Display variables:

	cout << "\n\n";
	cout << "Item:           Resistors\n\n";
	cout << "Manufacturer:   " << resistors.manufacturer << "\n";
	cout << "Shelf:   " << resistors.shelf << "\n";
	cout << "Cost each:      $" << resistors.price_each << "\n";
	cout << "Quantity:       " << resistors.quantity << "\n";
	cout << "Total value:    $" << total_value << "\n";

	if(resistors.quantity < 5)
	{
		resistors.needToOrder = true;
		cout << "You need to order some resistors." << endl << endl;
	}
	
	return 0;
}


/*
Output:
Name of manufacturer => itteba
Number of shelf => 4
Number of parts left => 321
Cost of each part => 213


Item:           Resistors

Manufacturer:   itteba
Shelf:   4
Cost each:      $213
Quantity:       321
Total value:    $68373
You need to order some resistors.

*/
