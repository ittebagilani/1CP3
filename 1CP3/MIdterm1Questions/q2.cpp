
/*
* Program Name : Midterm 1 Question 2
* Developer : Itteba Gilani
* Environment : Visual Studio 2022
* Lists of constants : k1, k2
* Lists of variables : t, I, V, initialTime, maxCurrent, timeIncrement
* Lists of functions : calculate
*/


#include <iostream>
#include <math.h>
#define k1 3
#define k2 2.73

using namespace std;

void welcomeUser(void);
void displayMenu(char *, float *, float *, float *);
void calculate(float*, float*, float*);
void displayOutput(float, float, float);


int main()
{

    cout << "Welcome! This program calculates the current and voltage in an inductor at a specific time." << endl;

    float t, I, V;
    char selection;
    
    displayMenu(&selection, &t, &I, &V);
    
    if(selection == '2')
    {
        return 0;
    }

    displayOutput(t, I, V);
    

    return 0;
}

void displayMenu(char *selection, float *t, float *I, float *V)
{
    do
    {
        cout << "Please choose an option below" << endl;
        cout << "1 - Calculate" << endl;
        cout << "2 - Exit" << endl;
        cout << "Your choice: ";

        cin >> *selection;

        switch (*selection)
        {
            case '1':
                calculate(t, I, V);
                break;
            case '2':
                break;

        }

    } while (!(*selection == '1' || *selection == '2'));

    
}
void calculate(float *t, float *I, float *V)
{
    float initialTime, maxCurrent;
    float timeIncrement = 0.01;
    bool isLessThanMaxCurrent = true;

    cout << "Enter the initial value of time (T initial in seconds): ";
    cin >> initialTime;

    *t = initialTime;

    cout << "Enter the max current in amps: ";
    cin >> maxCurrent;


    while ((*t * k1)  < maxCurrent)
    {
        *I = *t * k1;
        *V = k2 * pow(*t, 2);
        
        *t += timeIncrement;
    }
}

void displayOutput(float t, float I, float V)
{
    cout << "The current at time " << t << " seconds is: " << I << " amps." << endl;
    cout << "The voltage at time " << t << " seconds is: " << V << " volts." << endl;
}
/*
Capture of Results

Welcome! This program calculates the current and voltage in an inductor at a specific time.
Please choose an option below
1 - Calculate
2 - Exit
Your choice: 3
Please choose an option below
1 - Calculate
2 - Exit
Your choice: 1
Enter the initial value of time (T initial in seconds): 30
Enter the max current in amps: 200
The current at time 66.6752 seconds is: 199.996 amps.
The voltage at time 66.6752 seconds is: 12132.8 volts.



*/