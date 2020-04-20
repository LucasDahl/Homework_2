//
//  ingredientAdjuster.cpp
//  Homework_2
//
//  Created by Lucas Dahl on 4/16/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task

/*
 A cookie recipe calls for the following ingredients:

 5 cups of sugar
 1 cup of butter
 75 cups of flour
 The recipe produces 48 cookies with this amount of ingredients.

 Write a program that asks the user how many cookies he or she wants to make, and then displays the number of cups of each ingredient needed for the specified number of cookies. Use fixed-point notation with two decimal places of precision.
 */


// This program is to adjust the amount of ingredients need for x amount of cookies.

// Header
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Properties
    const float SUGAR = 5, BUTTER = 1, FLOUR = 75, COOKIES = 48;
    float sugarNeeded, butterNeeded, flourNeeded, numberOfCookies;
    
    // Ask the user how many cookies they want
    cout << "How many cookies do you want to make? ";
    cin >> numberOfCookies;
    
    // Calculations
    sugarNeeded = (SUGAR * numberOfCookies) / COOKIES;
    butterNeeded = (BUTTER * numberOfCookies) / COOKIES;
    flourNeeded = (FLOUR * numberOfCookies) / COOKIES;
    
    
    // display the data
    
    // format the data
    cout << endl;
    cout << setprecision(2) << fixed;
    
    cout << "\nTo make "+to_string(numberOfCookies)+" cookies you will need the following ";
    cout << "of ingredients: " << endl;
    cout << "-- " << sugarNeeded << " cups of sugar." << endl;
    cout << "-- " << butterNeeded << " cups of butter." << endl;
    cout << "-- " << flourNeeded << " cups of flour." << endl;
    cout << endl;
    
    
   // Used to exit program
    return 0;
}
