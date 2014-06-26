/* 
 * File:   main.cpp
 * Author: Rodrigo Lucatero
 *
 * Purpose: Savitch Chapter 1 Problem 5
 * Created on June 26, 2014, 3:12 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    
    int num1, num2;
    
    cout << "Enter first number.\n";
    cin >> num1;
    cout << "Enter second number.\n";
    cin >> num2;
    cout << "Sum of the Numbers\n";
    cout << num1 + num2 << endl;
    cout << "Product of the Numbers\n";
    cout << num1 * num2 << endl;
        
    return 0;
}

