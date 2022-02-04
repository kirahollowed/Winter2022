/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 12:34 PM
 * Purpose: Sales Tax
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
    float Purchase, SalesTax, CountyTax, TotalTax, Total;
    //Initialize Variables
    Purchase= 52;
    SalesTax= 0.04;
    CountyTax= 0.02;
    
    //Map the inputs/known to the outputs
    TotalTax=SalesTax+CountyTax;
    Total=TotalTax*Purchase+Purchase;
    
    //Display the outputs
    cout<<"If the sales tax is 4% and the county tax is 2%,"<<endl;
    cout<<"the total price of a $52 purchase will be $"<<Total<<endl;
    //Exit the program
    return 0;
}
