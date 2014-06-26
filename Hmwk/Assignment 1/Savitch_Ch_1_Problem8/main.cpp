/* 
 * File:   main.cpp
 * Author: Rodrigo Lucatero
 * 
 * Purpose: Savitch Chapter 1 Problem 8
 * Created on June 26, 2014, 4:16 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    int nQ, nN, nD;
    float Quart, Nickel, Dime;
    
    cout << "Enter number of Quarters\n";
    cin >> nQ;
    cout << "Enter number of Dimes\n";
    cin >> nD;
    cout << "Enter number of Nickels\n";
    cin >> nN;
    Quart = nQ * 25;
    Dime = nD * 10;
    Nickel = nN * 5;
    cout << "Total amount of monetary value among all the coins.\n";
    cout << Quart + Dime + Nickel << " cents" << endl;
  
    return 0;
}

