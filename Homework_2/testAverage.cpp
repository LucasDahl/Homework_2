//
//  testAverage..cpp
//  Homework_2
//
//  Created by Lucas Dahl on 4/16/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
Write a program that asks for five test scores. The program should calculate the average test score and display it. The number displayed should be formatted in fixed-point notation, with one decimal place of precision.
*/

// This program is to take five test scores and calculate the average score


// Header
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    // Properties
    float test1, test2, test3, test4, test5, averageScore;
    
    // Gather the data from user input.
    cout << "Please enter the test scores and hit enter/return" << endl;
    cout << "Test one score ";
    cin >> test1;
    cout << "Test two score ";
    cin >> test2;
    cout << "Test three score ";
    cin >> test3;
    cout << "Test four score ";
    cin >> test4;
    cout << "Test five score ";
    cin >> test5;
    
    // Calculate the avergae
    averageScore = ((test1 + test2 + test3 + test4 + test5) / 5);
    
    // Display the data
    
    // Format the data before displaying it
    cout << endl;
    cout << setprecision(1) << fixed;
    
    cout << "The avergae test score is " << averageScore << endl;
    
   // Used to exit program
    return 0;
}
