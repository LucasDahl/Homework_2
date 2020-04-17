//
//  celsiusToFahrenheit.cpp
//  Homework_2
//
//  Created by Lucas Dahl on 4/16/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task

/*
 Write a program that converts user input in Celsius to Fahrenheit temperature. The formula is
 F= 9/5 * C +32
 F is the Fahrenheit temperature, and C is the Celsius temperature. Keep one digit of precision.
 */

// This is a program to conver Celsius to Fahrenheit.

// Header
#include <iostream>

using namespace std;

int tempConvert(float temp) {
    
    // temp properties
    float f;
    
    // Make the conversion
    f = ((9/5) * temp + 32);
    
    return f;
}

int main() {
    
    // Properties
    float celsius, fahrenheit;
    
    // Ask the user to input the temp in celsius that they want to convert
    cout << "Please enter the Celsius temperature you want to convert to Fahrenheit: ";
    cin >> celsius;
    
    // Call the conversion method and assign it to fahrenheit
    fahrenheit = tempConvert(celsius);
    
    // Display the message and set the precision
    cout << "If the Celsius temperature is " << celsius << "degrees," << endl;
    cout << "Then it is " << fahrenheit << " degrees Farenheit." << endl;
    
    
   // Used to exit program
    return 0;
}
