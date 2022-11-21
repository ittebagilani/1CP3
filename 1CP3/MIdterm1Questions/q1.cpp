#include <iostream>
using namespace std;

#define PI 3.14159

void getInput(float *, float *, float *);
void calculateValues(float, float, float, float);
void displayN(float);
void displayT(float);

int main()
{
	//diameter in mm
	float D = 160;

	//feed rate in mm/rev = 0.8 but in m/min = 0.048;
	float feedRate = 0.048;

	//length of the cut mm
	float L = 260;

	//cutting time in minutes ( L / (feedRate * N)
	float T;

	//speed N ( V / (pi * D))
	float N;
	float lowestSpeed;
	float highestSpeed;
	float speedIncrement;

	getInput(&lowestSpeed, &highestSpeed, &speedIncrement);
	calculateValues(lowestSpeed, highestSpeed, speedIncrement, feedRate);

	

	return 0;

}

void getInput(float *lowestSpeed, float *highestSpeed, float *speedIncrement)
{
	cout << "Enter the lowest cutting speed in (rev/min): ";
	cin >> *lowestSpeed;

	cout << "Enter the highest cutting speed in (rev/min): ";
	cin >> *highestSpeed;

	cout << "Enter the increment of the cutting speed (rev/min): ";
	cin >> *speedIncrement;
}

void calculateValues(float lowestSpeed, float highestSpeed, float speedIncrement, float feedRate)
{
	float N, T;
	float D = 160;
	float L = 260;

	for (lowestSpeed; lowestSpeed < highestSpeed; lowestSpeed += speedIncrement)
	{
		//Calculate N for each value of lowestSpeed
		N = (lowestSpeed / (PI * D));
		displayN(N);
		
		
		//Calculate cutting time for each value of N
		T = (L / (feedRate * N));
		displayT(T);
		
	}
}

void displayN(float N)
{
	cout << "The spindle speed is: " << N << " rev/min. " << endl;
	if (N > 300)
	{
		cout << "The spindle speed is: " << N << " rev/min. The spindle speed is larger than 300." << endl;
	}
}

void displayT(float T)
{
	cout << "The cutting time is: " << T << " minutes." << endl;
}