/* 
 * File:   main.cpp
 * Author: Rodrigo Lucatero
 * Purpose: Savitch 8th Edition Chapter 2 Problem 1
 * Created on July 1, 2014, 11:28 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constant
const float OZ2TONS = 3.527392e4f;

//Function Prototype

//Execution Begins Here!

int main(int argc, char** argv) {

    //Declare Variables
    //Inputs
    float ounces;
    float crlBox;
    float BoxOz;
    //Outputs
    float nBoxes;
    float mTons;
    float TotalT;
    
    //Receive Inputs
    mTons = 3.5e-4f;
    cout << "Enter amount of Oz. of the Cereal Box" << endl;
    cin >> ounces;
    
    //Calculations
    BoxOz= ounces*mTons;
    TotalT= BoxOz*OZ2TONS;
    
    //Output
    cout << "The weight of the box is equal to " << BoxOz << " metric tons." << endl;
    cout << TotalT << " boxes are needed to yield 1 metric ton of cereal." << endl;
    
    
    return 0;
}

