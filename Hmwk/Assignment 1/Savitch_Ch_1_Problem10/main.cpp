/* 
 * File:   main.cpp
 * Author: Rodrigo Lucatero
 * 
 * Purpose: Savitch Chapter 1 Problem 10
 * Created on June 26, 2014, 12:13 PM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    char letter;
    
    cout << "Enter a character from the keyboard.\n";
    cin >> letter;
    cout << "    " << letter << " " << letter << " " << letter << endl;
    cout << "   " << letter << "    " << letter << endl;
    cout << "  " << letter << endl;
    cout << "  " << letter << endl;
    cout << "  " << letter << endl;
    cout << "  " << letter << endl;
    cout << "  " << letter << endl;
    cout << "   " << letter << "    " << letter << endl;
    cout << "    " << letter << " " << letter << " " << letter << endl;
    
    
    return 0;
}

