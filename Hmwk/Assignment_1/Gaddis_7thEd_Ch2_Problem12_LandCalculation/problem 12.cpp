/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 2:47 PM
 * Purpose: Land Calculation
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
    float OneAcre, Tract, TotalAcres;
    //Initialize Variables
    OneAcre=43560; //in square feet
    Tract=389767;  //in square feet
    
    //Map the inputs/known to the outputs
    TotalAcres= Tract/OneAcre;
            
    //Display the outputs
    cout<<"A tract of land with "<<Tract<<" square feet is equivalent to "<<TotalAcres<<" acres"<<endl;
    //Exit the program
    return 0;
}