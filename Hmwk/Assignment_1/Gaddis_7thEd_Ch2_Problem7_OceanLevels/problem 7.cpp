/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 1:58 PM
 * Purpose: Ocean Levels
 */


//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float rate, yr5, yr7, yr10;
    
    //Initialize Variables
    rate= 1.5;           //millimeters per year
    yr5= 5*rate;         //in millimeters
    yr7= 7*rate;         //in millimeters
    yr10= 10*rate;       //in millimeters
            
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout<<"In 5 years, the ocean's level will increase by "<<yr5<< " millimeters"<<endl;
    cout<<"In 7 years, the ocean's level will increase by "<<yr7<< " millimeters"<<endl;
    cout<<"In 10 years, the ocean's level will increase by "<<yr10<< " millimeters"<<endl;

    //Exit the program
    return 0;
}