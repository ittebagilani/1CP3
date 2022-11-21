/*
Program Name: Lab 5 Assignment 2
Developer: Itteba Gilani
Environment: Visual Studio Code
Description: This program calculates the stresses σ across the section A-A of crane hooks.
Lists of variables: h, b, Rc, F, Ri, Ro, A, Rn, M, e, r, sigma
Lists of contants: none
Lists of functions: purposeOfProgram, getInput, performCalculations, calculateSigma
*/

#include <iostream>
#include <math.h>
using namespace std;

//Ro = b + 1/2(Rc)
//Ri = 1/2(b)
//e = Rc - Rn

void purposeOfProgram(void);
void getInput(float *h, float *b, float *Rc, float *F);
void performCalculations(float h, float b, float Rc, float F, float *Ri, float *Ro, float *A, float *Rn, float *M, float *e);
void calculateSigma(float h, float b, float Rc, float *r, float F, float Ri, float Ro, float A, float Rn, float M, float e);


int main()
{
    float h, b, Rc, F, Ri, Ro, A, Rn, M, e;
    float r;

    
    purposeOfProgram();

    getInput(&h, &b, &Rc, &F);

    performCalculations(h, b, Rc, F, &Ri, &Ro, &A, &Rn, &M, &e);

    for(r = Ri; r < Ro; r += Ri/20)
    {
        calculateSigma(h, b,Rc, &r, F, Ri, Ro, A, Rn, M, e);
    }
    
    return 0;

}


void purposeOfProgram()
{
    float myInt = 5;
    cout << "This program calculates the stresses σ across the section A-A of crane hooks." << endl;
}

void getInput(float *h, float *b, float *Rc, float *F)
{
    //get height
    cout << "Enter height of cross-section in meters: ";
    cin >> *h;
    cout << endl;

    //get base
    cout << "Enter base of hook in meters: ";
    cin >> *b;
    cout << endl;

    //get Rc
    cout << "Enter the length of Rc in meters: ";
    cin >> *Rc;
    cout << endl;

    //get F
    cout << "Enter the load amount in Newtons: ";
    cin >> *F;
    cout << endl;
}

void performCalculations(float h, float b, float Rc, float F, float *Ri, float *Ro, float *A, float *Rn, float *M, float *e)
{
    //to calculate Ri
    *Ri = b / 2;

    //to calculate Ro
    *Ro = b + (Rc / 2);

    //to calculate A
    *A = b * h;

    //to calculate Rn
    *Rn = b / log(*Ro / *Ri);

    //to calculate M
    *M = F * Rc;

    //to calculate e
    *e = Rc - *Rn;

}

void calculateSigma(float h, float b, float Rc, float *r, float F, float Ri, float Ro, float A, float Rn, float M, float e)
{   
    float sigma = (F / A) + (M*(Rn - (*r)) / (A * e * (*r)));

    cout << sigma << endl;
    cout << *r << endl;
}

/*
This program calculates the stresses ╧â across the section A-A of crane hooks.
Enter height of cross-section in meters: 0.03

Enter base of hook in meters: 0.1

Enter the length of Rc in meters: 0.1

Enter the load amount in Newtons: 700

2.36617e+06
0.05
2.14082e+06
0.0525
1.93596e+06
0.055
1.74891e+06
0.0575
1.57745e+06
0.06
1.4197e+06
0.0625
1.27409e+06
0.065
1.13927e+06
0.0675
1.01407e+06
0.07
897512
0.0725
788723
0.075
686952
0.0775
591542
0.08
501915
0.0825
417560
0.085
338025
0.0875
262908
0.09
191852
0.0925
124536
0.095
60671.7
0.0975
0.6875
0.1
-57710.7
0.1025
-112674
0.105
-165081
0.1075
-215105
0.11
-262907
0.1125
-308630
0.115
-352407
0.1175
-394361
0.12
-434602
0.1225
-473233
0.125
-510349
0.1275
-546038
0.13
-580380
0.1325
-613450
0.135
-645318
0.1375
-676047
0.14
-705699
0.1425
-734327
0.145
-761986
0.1475
-788722
0.15
*/