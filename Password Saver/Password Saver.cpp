// Password Saver.cpp : This file contains the 'main' function. Program execution begins and ends there.



#include <iostream>

// For file writing
#include <fstream>

using namespace std;

int main()
{
    //Vars
    int ver = 0.01;
    string stringver = "0.01";
    bool cont = true;
    string password_imput;
    string site_imput;
    string action;


    cout << "Password Saver V" + stringver << endl;

    cout << endl;

    if (ver < 1)
    {
        cout << "Warring! You are using a Beta Version, beware of bugs.";
    }

    while (cont == true)
    {
        cout << "Please select a option \n View Passwords \n Create Password \n Credits \n (Caps Senivtive)" << endl;
        cin >> action;

        if (action == "View Passwords")
        {
            cont = false;
            cout << "Word In Progress";
        }
    }

    
}


