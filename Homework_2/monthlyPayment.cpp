//
//  monthlyPayment.cpp
//  Homework_2
//
//  Created by Lucas Dahl on 4/16/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

//MARK: - Task
/*
 he monthly payment on a loan may be calculated by the following formula:
 payment = (rate(1+rate)^n/(1+Rrate)^n - 1) * L
 
 Rate is the monthly interest rate, which is the annual interest rate divided by 12. (A 12 percent annual interest would be 1 percent monthly interest.)

 N is the number of payments

 L is the amount of the loan.

 Write a program that asks for these values and displays a report similar to the following:

  

     Loan Amount:                                 $  10000.00

     Monthly Interest Rate:                                    1%

     Number of Payments:                                     36

     Monthly Payment:                        $       332.14

     Amount Paid Back:                       $   11957.15

     Interest Paid:                                    $     1957.15
 */

// This program is useto calulate monthly payments.

// Header
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//int main() {
//    
//    // Properties
//    
//    // Constant
//    const int ONE = 1, HUNDRED = 100, NUMBER_OF_MONTHS = 12;
//    
//    // Variables
//    int N;
//    float Rate, L, payment, amountPaidBack, interestPaid;
//    
//    // Ask the user for required data
//    cout << endl;
//    cout << "What is interest rate of the loan? %";
//    cin >> Rate;
//    cout << "What is the Amount of the loan? ";
//    cin >> L;
//    cout << "Number of payments? ";
//    cin >> N;
//    
//    // Calculations
//    Rate /= NUMBER_OF_MONTHS;
//
//    Rate /= HUNDRED;
//    
//    payment = ((Rate) * pow(ONE + (Rate), N) / (pow(ONE + (Rate), N) - ONE)) * L;
//    
//    Rate *= HUNDRED;
//    
//    amountPaidBack = N * payment;
//    
//    interestPaid    = (N * payment) - L;
//    
//    // Display the data and format it.
//    cout << setprecision(2) << fixed << right << endl;
//    
//    // Loan
//    cout << "Loan Amount:           $";
//    cout << setw(10) << L << endl;
//    
//    // Monthly intrest
//    cout << "Monthly Interest Rate: ";
//    cout << setw(10) << Rate << '%' << endl;
//    
//    // Number of payments
//    cout << "Number of Payments:     ";
//    cout << setw(10) << N     << endl;
//    
//    // Monthly payment
//    cout << "Monthly Payment:       $";
//    cout << setw(10) << payment << endl;
//    
//    // Amount paid back
//    cout << "Amount Paid Back:      $";
//    cout << setw(10) << amountPaidBack << endl;
//    
//    // Intrest paid
//    cout << "Interest Paid:         $";
//    cout << setw(10) << interestPaid;
//    cout << endl << endl;
//    
//    
//    // Used to end the program
//    return 0;
//}
