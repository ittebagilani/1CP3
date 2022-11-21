

#include <iostream>

using namespace std;

int main()
{
    //initializaiton
    const int size = 5;
    static int nums[size];

    for(int i = 0; i < size; i++)
    {
        nums[i] = i;
        cout << nums[i] << endl;
    }


    return 0;
}