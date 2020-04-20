//
//  pizzaPi.cpp
//  Homework_2
//
//  Created by Lucas Dahl on 4/16/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of any size can be divided into. The program should perform the following steps:

 Ask the user for the diameter of the pizza in inches.
 Calculate the numbers of slices that may be taken from a pizza of that size.
  Display a message telling the number of slices.
 To calculate the number of slices that may be taken from the pizza, you must know the flowing facts:

 Each slice should have an area of 14.125 square inches.
 To calculate the number of slices, simply divide the area of the pizza by 14.125.
 The area of the pizza is calculated with the formula:
 Make sure the output of the program displays the number of slices in integer, rounded to the nearest whole number (use the round( ) function) . Use a named constant for pi.
 */

// This program is used calculate the number if slices a pizza of any size can be divided into.

// Header
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    
    // Properties
    
    // Constants
    const float SLICE_AREA_SIZE = 14.125, PI = 3.14159;
    const int TWO = 2;
    
    // Variables
    float d, r, area, numOfSlices;
    
    // Ask the user for the required data
    cout << endl;
    cout << "What is the diameter of the pizza in inches? ";
    cin >> d;
    
    // Calculate the # of slices that may be taken from a pizza
    // of that size
    r = d / TWO;    // Radius
    area = PI * pow(r, TWO);
    numOfSlices = area / SLICE_AREA_SIZE;
    
    // Display the message to the user.
    cout << setprecision(1) << fixed;
    cout << "Number of slices = ";
    cout << numOfSlices << endl;
    cout << endl;
    
    // Used to exit the program.
    return 0;
}
