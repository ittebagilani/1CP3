/*
* Program Name: Lab 4 Program 1
* Developer: Itteba Gilani
* Environment: Visual Studio 2019
* Description: Calculates inductive and capacitive Reactance
* Variable Names: PI, farads, henrys, hertz
* Function Names: capacitiveReactance(), inductiveReactance(), printOutput(), getInput()
*/

#include <iostream>
#include <iomanip>


#define PI 3.14159
#define capacitiveReactance(capacitance, frequency) 1/(2 * (PI) * frequency * capacitance)
using namespace std;

// Function prototype.
// float capacitiveReactance(float, float);

// This function computes the capacitive reactance
// for a given value of capacitor and frequency.

float inductiveReactance(float, float);
// This function computes the inductive reactance
// for a given value of inductor and frequency.

void printOutput(float farads, float henrys, float hertz, float reactanceC, float reactanceI)
{
	cout << endl << "The reactance of a " << farads << " farad capacitor" << endl;
	cout << "at a frequency of " << hertz << " hertz is " << reactanceC << " ohms." << endl;

	reactanceI = inductiveReactance(henrys, hertz);

	cout << endl << "The reactance of a " << henrys << " henry inductor" << endl;
	cout << "at a frequency of " << hertz << " hertz is " << reactanceI << " ohms." << endl;
}

//part f
void getInput()
{

	float farads, henrys, hertz;

	cout << "Input value of the capacitor in farads => ";
	cin  >> farads;
	cout << "Input value of the inductor in henrys  => ";
	cin  >> henrys;
	cout << "Input value of the frequence in hertz  => ";
	cin  >> hertz;

	float reactanceC = capacitiveReactance(farads, hertz);

	float reactanceI = inductiveReactance(henrys, hertz);


	printOutput(farads, henrys, hertz, reactanceC, reactanceI);
}

int main()
{

	getInput();

	
	return 0;
}


// float capacitiveReactance(float capacitance, float frequency)
// {
// 	float reactance;        // The capacitive reactance.
// 	// float pi = 3.14159;

// 	reactance = 1/(2 * (PI) * frequency * capacitance);

// 	return(reactance);
// }


// float inductiveReactance(float inductance, float frequency)
// {
// 	float reactance;        // The inductive reactance.
// 	// float pi = 3.14159;

// 	reactance = 2 * (PI) * frequency * inductance;

// 	return(reactance);
// }

float inductiveReactance(float inductance, float frequency)
{
    return(2 * (PI) * frequency * inductance);
}


/*

a. The resistance variable is a float and is being returned which is why you cannot make the return type
   of inductiveReactance an int. If you really need to return an int, you would have to cast the resistance
   variable to int which would truncate the value and therefore interfere with the calculation.

b. defined global variable, float PI = 3.14159
c. return(2 * (PI) * frequency * inductance);
d. #define capacitiveReactance(capacitance, frequency) 1/(2 * (PI) * frequency * capacitance)
e. The function is called printOutput and the type is void because it is not returning anything. 
f. The type of the input variables have to be floats because Pi is involved and that is a float
   which means that the rest of the calculations it is involved with must also be floats.


Results:

Input value of the capacitor in farads => 40
Input value of the inductor in henrys  => 30
Input value of the frequence in hertz  => 20

The reactance of a 40 farad capacitor
at a frequency of 20 hertz is 0.000198944 ohms.

The reactance of a 30 henry inductor
at a frequency of 20 hertz is 3769.91 ohms.
*/