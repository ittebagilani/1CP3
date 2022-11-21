
/*
* Program Name : Midterm 1 Question 3	
* Developer : Itteba Gilani
* Environment : Visual Studio 2022
* Lists of constants : PI
* Lists of variables : mass, naturalFrequency, springStiffness, M, f, k
* Lists of functions : purposeOfProgram, getMass, getNaturalFrequency,, calcualteSpringStiffness, displayOutput
*/

#include <iostream>
#include <math.h>
#define PI 3.14159

using namespace std;


void purposeOfProgram(void);
float getMass();
float getNaturalFrequency();
float calculateSpringStiffness(float, float);
void displayOutput(float, float, float);



int main()
{
	purposeOfProgram();
	float mass = getMass();
	float naturalFrequency = getNaturalFrequency();
	float springStiffness = calculateSpringStiffness(mass, naturalFrequency);
	displayOutput(mass, naturalFrequency, springStiffness);
}

void purposeOfProgram()
{
	cout << "This program calculates the stiffness of a spring based on a specified mass and frequency." << endl;
}

float getMass()
{
	float M;

	do
	{
		cout << "Please enter a non-negative value for the mass of the object: ";
		cin >> M;
	} while (M <= 0);

	return M;
}

float getNaturalFrequency()
{
	float f;

	do
	{
		cout << "Please enter a non-negative value for the natural frequency of the object: ";
		cin >> f;
	} while (f <= 0);

	return f;
}

float calculateSpringStiffness(float mass, float naturalFrequency)
{
	float k = mass * pow((2 * PI * naturalFrequency), 2);

	return k;
}

void displayOutput(float mass, float naturalFrequency, float springStiffness)
{
	cout << "The spring constant k (N/m) of a spring with a mass (kg) of " << mass << " and natural frequency " << naturalFrequency << " is " << springStiffness << "." << endl;
}

/*
Capture of the Results:

This program calculates the stiffness of a spring based on a specified mass and frequency.
Please enter a non-negative value for the mass of the object: -50
Please enter a non-negative value for the mass of the object: 50
Please enter a non-negative value for the natural frequency of the object: -10
Please enter a non-negative value for the natural frequency of the object: 10
The spring constant k (N/m) of a spring with a mass (kg) of 50 and natural frequency 10 is 197392.

*/