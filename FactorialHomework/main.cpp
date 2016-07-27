//
//  main.cpp
//  FactorialHomework
//
//  Created by Maxine Ludington on 7/26/16.
//  Copyright © 2016 Maxine Ludington. All rights reserved.FUCK ME
//

#include <iostream>
using namespace std;

int factorial(int number);
int number;

int main()
{
//int number = 0; // intitialized
cout << "Choose a number.";
cin>> number;
cout << factorial(number);
}

int factorial(int number)
{
    if (number<=1)
    {
        return 1;
        
    }
else
    {
        return (factorial(number - 1) * number);
    }
}