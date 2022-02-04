/*
 *File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 2:33 PM
 * Purpose: Miles per gallon
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
    float gallons, miles, mpg;
    
    //Initialize Variables
    gallons= 12;
    miles= 350;
    
    //Map the inputs/known to the outputs
    mpg= miles/gallons;
    
    //Display the outputs
    cout<<"A car that holds "<<gallons<<" gallons of gasoline"<<endl;
    cout<< "and can travel "<<miles<< " miles before refueling"<<endl;
    cout<<"has an MPG of "<<mpg<<endl;
    //Exit the program
    return 0;
}
