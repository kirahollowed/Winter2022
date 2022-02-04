/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 1:20 PM
 * Purpose: Annual Pay
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
    float payAmount, payPeriods,annualPay;
    
    //Initialize Variables
    payAmount= 1700.0;
    payPeriods= 26;
   
    //Map the inputs/known to the outputs
    annualPay= payAmount*payPeriods;
            
    //Display the outputs
    cout<< "An employee earns $"<<payAmount<< " every two weeks"<<endl;
    cout<< "The employee's annual pay is $"<<annualPay<<endl;
    //Exit the program
    return 0;
}
