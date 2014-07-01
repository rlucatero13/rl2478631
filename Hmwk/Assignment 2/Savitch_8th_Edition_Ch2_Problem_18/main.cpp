/* 
 * File:   main.cpp
 * Author: Rico
 *
 * Created on July 1, 2014, 12:30 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable
    //Inputs
    unsigned short cBarCal=230; //Number of Calories in type of Candy Bar
    unsigned short wtL;         //Weight in lbs
    unsigned short ageY;        //Age in years old
    unsigned short htI;         //Height in inches
    char gen;                   //Gender of Male or Female (M/m or F/f)
    //Outputs
    float bmr;                  //Basal Metabolic Rate
    float nCBars;               //Number of Candy Bars
    
    //Acquiring Inputs
    cout << "Calculate how many candy bars a day you can eat." << endl;
    cout << "What is your gender M/F" << endl;
    cin >> gen;
    cout << "What is your weight in lbs?" << endl;
    cin >> wtL;
    cout << "What is your height in Inches?" << endl;
    cin >> htI;
    cout <<"What is your age in years?" << endl;
    cin >> ageY;
    
    //Calculate the BMR
    if (gen=='F'||gen=='f'){
        bmr=655+4.3*wtL+4.7*htI-4.7ageY;
    }else if (gen=='M'||gen=='m'){
        bmr=66+6.3*wtL+12.9*htI-6.8ageY;
    }else{
        cout<<"Gender Invalid"<<endl;
    }
    
    //Output Results

    return 0;
}

