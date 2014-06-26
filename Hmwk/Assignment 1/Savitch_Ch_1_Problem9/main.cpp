/* 
 * File:   main.cpp
 * Author: Rodrigo Lucatero
 * 
 * Purpose: Savitch Chapter 1 Problem 9
 * Created on June 26, 2014, 1:57 PM
 */
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {

    float acceleration = 32, distance = 0, time = 0;
    
    cout << "Enter amount of seconds\n";
    cin >> time;
    distance = (acceleration *(time *time))/2;
    cout << "Length of distance covered (in ft.)\n";
    cout << distance << " ft.";
    
    return 0;
}

