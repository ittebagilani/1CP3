/*
Program Name: Lab 5 Program 1
Developer: Itteba Gilani
Environment: Visual Studio Code
Description: This program value of current in amps.
Lists of variables: resistor, volts, current, power
Lists of contants: none
Lists of functions: explainProgram, getValues, doCalculations, displayAnswer
*/

#include <iostream>
#include <math.h>
using namespace std;

void explainProgram(void);
void getValues(float *r, float *v);
float doCalculations(float resistance, float voltage, float *power);
void displayAnswer(float current, float *power);

int main()
{
	float resistor;
	float volts;
	float current;
	float power;

	explainProgram();
	getValues(&resistor, &volts);
	current = doCalculations(resistor,volts, &power);
	displayAnswer(current, &power);
	
	return 0;
}

void explainProgram()
{
	cout << "This program calculates the value of the current in amps." << endl;
	cout << "You need to enter the resistance of the resistor in ohms and the voltage in volts." << endl;
}

void getValues(float *r, float *v)
{
	float resistance;
	float voltage;

	cout << endl << endl << "Input the resistance (ohms): ";
	cin >> resistance;
	cout << "Input the voltage (volts): ";
	cin >> voltage;

	*r = resistance;
	*v = voltage;
}

float doCalculations(float resistance, float voltage, float *power)
{
	float current;

	
	current = voltage / resistance;	
	*power = (pow(voltage, 2)) / resistance;
	return(current);
}

void displayAnswer(float current, float *power)
{
	cout << endl << "The value of the current is " << current << " amps." << endl;
	cout << *power;	
}

/*
Default P5_1 File Output
This program calculates the value of the current in amps.
You need to enter the resistance of the resistor in ohms and the voltage in volts.


Input the resistance (ohms): 50
Input the voltage (volts): 40

The value of the current is 0.8 amps.

Changed Output
This program calculates the value of the current in amps.
You need to enter the resistance of the resistor in ohms and the voltage in volts.


Input the resistance (ohms): 30
Input the voltage (volts): 20

The value of the current is 0.666667 amps.
13.3333

*/