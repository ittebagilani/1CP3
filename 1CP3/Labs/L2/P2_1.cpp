#include <iostream>

using namespace std;

int main()
{
	char selection;   // Item to be selected by program user.

	cout << "Select the form of Ohm's law needed by choosing the appropriate letter: " << endl;
	cout << "A: Voltage" << endl;
	cout << "B: Current" << endl;
	cout << "C: Resistance" << endl;
	cout << "Your selection (A, B, or C) => ";
	cin  >> selection;

	if (selection == 'A')
		cout << "V = I * R" << endl;
	else
	if (selection == 'B')
		cout << "I = V / R" << endl;
	else
	if (selection == 'C')
		cout << "R = V / I" << endl;
	else
		cout << "That was not one of the proper selections." << endl;

	return 0;
}
