//version 2


/*
Program Name: Lab 7 Program 2 Part B
Developer: Itteba Gilani
Environment: Visual Studio Code
Lists of variables: i, c, password, correctPassword, asterisk
Lists of functions: passwordVerifier()
Lists of constants: none
*/

#include <iostream>
#include <conio.h>

using namespace std;

void passwordVerifier(string password)
{
    int i = 0;
    char c;
    string asterisk = "*";

    cout << "Type the password: " << endl;
    cout << "Press enter when you are done." << endl;

    while(true)
    {
        c = _getch();
        cout << asterisk;
        
        if(c == '\r')
        {
            break;
        }
        
        password += c;
        
        i++;

    }

    cout << endl;
    
    string passwordEntered = "";
    string correctPassword = "lollipop";


    if(password == correctPassword)
    {
        cout << "Welcome!" << endl;
        cout << correctPassword << " is the password";
    } else
    {
        cout << "Sorry, please try again." << endl;
    }

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
*******
Sorry, please try again.

Press enter when you are done.
*********
Welcome!
lollipop is the password

*/