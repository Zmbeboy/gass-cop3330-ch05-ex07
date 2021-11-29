/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Eric Gass
 */

#include "std_lib_facilities.h"

void calculateRoots(double a, double b, double c)
{
    double result1;
    double result2;
    if(pow(b,2)-(4*a*c) < 0)
    {
       cout << "No real roots found";
    }
    else
    {
        result1 = (-b+pow(pow(b,2)-(4*a*c),0.5))/(2*a);
        cout << "\nRoot 1: " <<result1;
        result2 = (-b-pow(pow(b,2)-(4*a*c),0.5))/(2*a);
        cout << "\nRoot 2: " <<result2<<"\n";
    }
}

int main()
    {
        double a;
        double b;
        double c;
        
        cout << "Enter 3 numbers separated by spaces\n";
        cin >> a;
        cin >> b;
        cin >> c;

        calculateRoots(a,b,c);
        
        return 0;
    }
