#include <iostream>
using namespace std;


void displayMenu()
{
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Be a dumbo and quit" << endl;

}

int getSelection()
{
    int selection;

    do
    {
        cout << "Please enter a valid option (1-5)";
        cin >> selection;
    } while (!(selection == 1 || selection == 2 || selection == 3 || selection == 4 ||selection == 5));

    return selection;
    
}


float getInputX()
{
    float x;
    
    cout << "Enter a value for x: ";
    cin >> x;

    return x;
}

float getInputY()
{
    float y;

    cout << "Enter a value for y: ";
    cin >> y;

    return y;
}

void addition()
{
    float x = getInputX();
    float y = getInputY();

    cout << "The sum is: " << x+y << endl;
}

void subtraction()
{
    float x = getInputX();
    float y = getInputY();

    cout << "The difference is: " << x-y << endl;
}

void multiplication()
{
    float x = getInputX();
    float y = getInputY();

    cout << "The product is: " << x*y << endl;
}

void division()
{
    float x = getInputX();
    float y = getInputY();

    cout << "The quotient is: " << x/y << endl;
}
void processSelection(int selection)
{
    switch(selection)
    {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            exit(0);
            break;
    }
}


int main()
{
    displayMenu();
    int selection = getSelection();
    processSelection(selection);
    
    return 0;
}