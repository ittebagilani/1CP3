#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int initialSubstrateConcentration;
    float maxGrowthRate;
    float saturationConstant;
    float maxDilutionRate;

    cout << "Enter a value for the initial Subtrate Concentration divisible by 5 and (25 <= value <= 75)" << endl;
    cin >> initialSubstrateConcentration;
    if(!(initialSubstrateConcentration >= 25 && initialSubstrateConcentration <=75 && initialSubstrateConcentration % 5 == 0))
    {
        cout << "ERROR: INVALID VALUE ENTERED. Quitting program..." << endl;
        exit(0);
    }
    
    cout << "Enter a value for the maximum growth rate (0.2 < value < 0.7)" << endl;
    cin >> maxGrowthRate;
    if(!(maxGrowthRate > 0.2 && maxGrowthRate < 0.7))
    {
        cout << "ERROR: INVALID VALUE ENTERED. Quitting program..." << endl;
        exit(0);
    }
    
    saturationConstant = rand() % 6 + 2;
    
    maxDilutionRate = maxGrowthRate * (1 - sqrt(saturationConstant / (saturationConstant + initialSubstrateConcentration)));

    if(maxDilutionRate > 0.35 && maxDilutionRate < 0.45)
    {
        cout << "The max dilution rate is: " << maxDilutionRate << endl;
        cout << "Kinetic parameters are acceptable." << endl;
    }
    else
    {
        cout << "The max dilution rate is: " << maxDilutionRate << endl;
        cout << "Kinetic parameters are not acceptable." << endl;
    }
    
}