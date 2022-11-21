//version 1


/*
Program Name: Lab 7 Program 2 Part A
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: i, c, password, correctPassword
Lists of functions: passwordVerifier()
Lists of constants: none
*/

#include <iostream>
#include <conio.h>

using namespace std;
string getPassword(char c, string password)
{
    cout << "Type the password: " << endl;
    cout << "Press enter when you are done." << endl;

    int i = 0;
    while(true)
    {
        c = _getch();
        

        if(c == '\r')
        {
            break;
        }
        
        password += c;
        i++;

    }

    return password;
}

bool verifyPassword(string password, bool isPasswordCorrect, string correctPassword = "lollipop")
{
    if(password == correctPassword)
    {
        isPasswordCorrect = true;
    } else
    {
        isPasswordCorrect = false;
    }

    return isPasswordCorrect;
}

void displayOutput(bool isPasswordCorrect)
{
    if(isPasswordCorrect)
    {
        cout << "the password is correct" << endl;
    } else
    {
        cout << "sorry the password is incorrect" << endl;
    }
}

void passwordVerifier(string password)
{
    int i = 0;
    char c;
    bool isPasswordCorrect = false;
    string correctPassword = "lollipop";
    
    getPassword(c, password);
    isPasswordCorrect = verifyPassword(password, isPasswordCorrect, correctPassword);
    displayOutput(isPasswordCorrect);


    
    cout << correctPassword << " is the password";



}

int main()
{
    string password;
    passwordVerifier(password);


    return 0;
}

/*
Output:

Type the password: 
Press enter when you are done.
sorry the password is incorrect
lollipop is the password


Type the password: 
Press enter when you are done.
the password is correct
lollipop is the password



*/