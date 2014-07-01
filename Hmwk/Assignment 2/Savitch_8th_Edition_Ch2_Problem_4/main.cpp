/* 
 * File:   main.cpp
 * Author: Rodrigo Lucatero
 * Purpose Savitch 8th Edition Chapter 2 Problem 4
 * Created on July 1, 2014, 10:09 AM
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries

//Global Constant
const float CNVMYRS = 1.0f / 12.0f; //Conversion from months to years
//Function Prototype

//Execution Starts Here!

int main(int argc, char** argv) {
    
    //Declare Variables
    //Inputs
    float oldSlry; // Old Salary
    float pIncr; //Percentage Increase
    unsigned short retMnth; //Number of Months for Retroactive Pay
    //Outputs
    float newSlry; //New Salary
    float retPay, mnPay;
    
    //Input Values
    pIncr = 7.6e-2f; //7.6 Percent
    cout << "Old Salary in Dollars?" << endl;
    cin >> oldSlry;
    cout <<"Number of Months for Retroactive Pay" << endl;
    cin >> retMnth;
    
    //Calculations
    newSlry = oldSlry * (1+pIncr);
    retPay = oldSlry * pIncr * retMnth * CNVMYRS;
    mnPay = newSlry * CNVMYRS;
    
    //Output the results
    cout << "New Salary = $" << newSlry << endl;
    cout << "Retroactive Pay = $" << retPay << endl;
    cout << "New Paycheck = $" << mnPay << endl;
    
    return 0;
}

