#include "./header.h"

using namespace std;

void purpose(void);
char getInput();
void displaySelection(char selection);
float calculatePrice(float price);

int main()
{
	char selection;
	purpose();

	do
	{
		selection = getInput();
		displaySelection(selection);
	} while (!(selection > '1' && selection < '4'));

	cout << endl << "Thank you for using the program" << endl;

	return 0;
}


void purpose()
{
	cout << "This program allows to calculate the price of the flowers, including 13% taxes, bought the the Flower Shop" << endl;
}


char getInput()
{
	char selection;
	cout << endl << "We sell the folowing flowers: " << endl;
	cout << "1: Rose" << endl;
	cout << "2: Tulip" << endl;
	cout << "3: Hibiscus" << endl;
	cout << "4: Quit the program" << endl;

	do
	{
		cout << endl << "select your flower ";
		cin >> selection;
	} while (!(selection > '1' && selection < '4'));

	return selection;
}


void displaySelection(char selection)
{
	int amount;
	float totalPrice;
	float price;
	int i;

	switch (selection)
	{
		case '1':	
			cout << endl << "How many do you want to buy? ";
			cin >> amount;
			price = (PRICEROSE) * i;
			totalPrice = calculatePrice(price);
			cout << endl << "The total price for " << i << " rose(s) is $" << setprecision(4) << totalPrice << endl;
			break;
		case '2':	
			cout << endl << "How many do you want to buy? ";
			cin >> amount;
			price = PRICETULIP * amount;
			totalPrice = calculatePrice(price);
			cout << endl << "The total price for " << amount << " tulips is $" << setprecision(4) << totalPrice << endl;
			break;
		case '3':	
			cout << endl << "How many do you want to buy? ";
			cin >> amount;
			price = PRICEHIBISCUS * (amount);
			totalPrice = calculatePrice(price);
			cout << endl << "The total price for " << amount << " hibiscus is $" << setprecision(4) << totalPrice << endl;
			break;
		case '4':
			exit(0);
	}
}

float calculatePrice(float price)
{
	float totalPrice = price + (price * TAXES);
	return(totalPrice);

}