#include <iostream>
#include <math.h>

using namespace std;


/*

Crew Moment = weight of crew 1 * 120 inches(distance to crew seats) + weight of crew 2 * 120 inches
Cargo Moment = 
*/


int main()
{

    //number of crew members
    int numCrew;
    float crewMoment;
    float emptyAircraftMoment = 2751405;
    float fuelMoment = 1169167.3;

    float crewWeight;
    float aircraftWeight = 9021;
    float fuelWeight = 3618;
    while(numCrew != 1 || numCrew != 2)
    {
        cout << "Enter the number of crew members: ";
        cin >> numCrew;
        if (numCrew == 1)
        {
            float member1Weight;

            cout << "Enter the weight of crew member 1 in pounds (85 < weight < 400): ";
            cin >> member1Weight;

            while(!(member1Weight >= 85 && member1Weight <= 400))
            {
                cout << "Enter the weight of the crew member in pounds (85 < weight < 400): ";
                cin >> member1Weight;
            }

            crewMoment = (member1Weight * 120);
            crewWeight = member1Weight;

            cout << "The number of crew members is: 1" << endl;
            cout << "The weight of the crew member is: " << member1Weight << endl;

            break;
        }
       
       else if (numCrew == 2)
        {
            float member1Weight;
            float member2Weight;

            cout << "Enter the weight of crew member 1 in pounds (85 <= weight <= 400): ";
            cin >> member1Weight;

            while(!(member1Weight >= 85 && member1Weight <= 400))
            {
                cout << "Enter the weight of the crew member in pounds (85 <= weight <= 400): ";
                cin >> member1Weight;
            }

            cout << "Enter the weight of crew member 2 in pounds (85 <= weight <= 400): ";
            cin >> member2Weight;

            while(!(member2Weight >= 85 && member2Weight <= 400))
            {
                cout << "Enter the weight of the crew member in pounds (85 <= weight <= 400): ";
                cin >> member2Weight;
            }


            crewMoment = (member1Weight * 120) + (member2Weight * 120);
            crewWeight = member1Weight + member2Weight;

            cout << "The number of crew members is: 2" << endl;
            cout << "The weight of crew member 1 is: " << member1Weight << endl;
            cout << "The weight of crew member 2 is: " << member2Weight << endl;

            break;
        }
    }

    
    

    for(float cargoWeight = 0; cargoWeight <= 5000; cargoWeight+=500)
    {   
        float cargoMoment = cargoWeight * 345;
        float centerOfGravity = (crewMoment + cargoMoment + emptyAircraftMoment + fuelMoment) / (crewWeight + cargoWeight + aircraftWeight + fuelWeight);

        //headings
        cout << "Cargo Weight (Pounds)          Center of Gravity(Inches)" << endl;

        //cargo weight rows
        if(centerOfGravity >= 315)
        {
            cout << "       " << cargoWeight << "                             " << centerOfGravity << "*" << endl;
        }
        else
        {
            cout << "       " << cargoWeight << "                             " << centerOfGravity << endl;
        }
    }

    return 0;
}