//
//  monthlySalesTax.cpp
//  Homework_2
//
//  Created by Lucas Dahl on 4/16/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// MARK: - Task
/*
 A retail company must file a monthly sales tax report listing the sales for the month and the amount of sales tax collected. Write a program that asks for the month, the year, and the total amount collected at the cash register (that is, sales plus sales tax).

 Assume the state sales tax is 4 percent and the county sales tax is 2 percent.

 If the total amount collected is known and the total sales tax is 6 percent, the amount of product sales may be calculated as: S = T/1.06
 S is the product sales and T is the total income (product sales plus sales tax).

 The program should display a report similar to
 
 October, 2017

 - - - - - - - - - - - - - - - - - -

 Total Collected:                      $  26572.89

 Sales:                                $  25068.76

 County Sales Tax:                     $   501.38

 State Sales Tax:                      $   1002.75

 Total Sales Tax:                      $   1504.13
 
 */

// This program is used calculate monthly sales tax.

// Header
//#include <iostream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//    
//    // Properties
//    const float STATE_SALES_TAX  = 0.04, COUNTY_SALES_TAX = 0.02, SALES_TAX = 0.06;
//    float S, T, totalStateTax, totalCountyTax, totalSalesTax;
//    string month;
//    int year;
//
//    // Ask user for the needed data
//    cout << endl;
//    cout << "Enter the month to receive the report for: ";
//    cin >> month;
//    cout << "Enter the year: ";
//    cin >> year;
//    cout << "Total amount collected for the month of " << month << ": ";
//    cin >> T;
//
//    // Csalculations
//    S = T / 1.06;
//    totalStateTax = S * STATE_SALES_TAX;
//    totalCountyTax = S * COUNTY_SALES_TAX;
//    totalSalesTax  = S * SALES_TAX;
//
//    // Display Calculations
//    cout << setprecision(2) << fixed << right << endl;
//    cout << "Month: " << month << endl;
//    cout << "Total Collected:    $" << setw(10) << T << endl;
//    cout << "Sales:              $" << setw(10) << S << endl;
//    cout << "County Sales Tax:   $" << setw(10) << totalCountyTax << endl;
//    cout << "State Sales Tax:    $" << setw(10) << totalStateTax << endl;
//    cout << "Total Tales Tax:    $" << setw(10) << totalSalesTax << endl;
//    cout << endl;
//
//    
//   // Used to exit program
//    return 0;
//}
