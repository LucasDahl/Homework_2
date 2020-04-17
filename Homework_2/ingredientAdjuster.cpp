//
//  ingredientAdjuster.cpp
//  Homework_2
//
//  Created by Lucas Dahl on 4/16/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// Header
#include <iostream>
#include <string>
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
