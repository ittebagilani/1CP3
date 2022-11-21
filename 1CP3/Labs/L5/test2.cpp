#include <iostream>

using namespace std;


bool calculateBox(double length, double width, double height, double *surfaceArea, double *volume)
{
    
    if(length <= 0 || width <= 0 || height <= 0)
    {
        cout << "False";
        return false;
    }
    else
    {
        *volume = length * width * height;
        *surfaceArea = (2*length*height) + (2*length*width) + (2*width*height);
        cout << "Volume: " << *volume << endl;
        cout << "Surface area: " << *surfaceArea << endl;
        cout << "True";
        return true;
    }
}

int main()
{
    double length, width, height, surfaceArea, volume;

    cout << "Enter the length" << endl;
    cin >> length; 

    cout << "Enter the width" << endl;
    cin >> width;

    cout << "Enter the height" << endl;
    cin >> height;
    

    calculateBox(length, width, height, &surfaceArea, &volume);

    
}


//variable has a type
//int, double, float, bool, char, string

//functions also have a return type
//int calculateBox
//flat calculateBox
//bool calculateBox
//parameters are basically values that you pass into a function 

/*

pointers
- the purpose of using a pointer is to return more than one value(values are stored in variables)
cant do this: return(myInt1, myInt2);
CAN DO THIS: return(myInt1);
& = address of the variable
myAdress = 123 go street 
itteba live at 123 go street

* = value that is located at the specific memory's location


*/