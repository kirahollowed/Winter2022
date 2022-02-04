/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 12:25 PM
 * Purpose:  Sales Prediction
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
    float sales, percent, total;
    
    //Initialize Variables
    sales=4600000;
    percent=0.62;
    
    //Map the inputs/known to the outputs
    total=sales*percent;
  
    //Display the outputs
    cout<<"If the company has $4.6 million in sales this year,"<<endl;
    cout<<"the East Coast Division will generate $"<<total<<"in sales this year"<<endl;
    
    //Exit the program
    return 0;
}