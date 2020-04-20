//
//  angleCalculator.cpp
//  Homework_2
//
//  Created by Lucas Dahl on 4/16/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 Write a program that asks the user for an angle, entered in radians. The program should then display the sine, cosine, and tangent of the angle. (Use sin, cos, and tan library functions to determine these values.) The output should be displayed in fixed-point notation, rounded to four decimal places of precision.
 */

// This rogram is usd to convert a given angle in radians from the user into cos. sin, and tan.

// Header
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    // Properties
    double angle;
    
    // Gather data
    cout << "Please enter a angle in radians: ";
    cin >> angle;
    
    
    // Format the data
    cout << setprecision(4) << fixed;
    
    // Show the user the data
    cout << "Angle in radians = " << angle << endl;
    cout << "Sine of the angle = " << sin(angle) << endl;
    cout << "Cosine of the angle = " << cos(angle) << endl;
    cout << "Tangent of the angle = " << tan(angle) << endl;
    cout << endl;
    
   // Used to exit program
    return 0;
    
}
