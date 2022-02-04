/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on July 1, 2021, 12:36 PM
 * Purpose:  Paycheck
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float wagePerHour, HoursWrkd, otPay, netPay;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<< "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> wagePerHour >> HoursWrkd;

    //Calculate netPay and otPay
    if(HoursWrkd<=40){
        netPay = HoursWrkd * wagePerHour;
        cout << setprecision(2) << fixed;
        cout << "Paycheck = $" << setw(7) << netPay;
        
    }else
    {
        netPay = 40*wagePerHour;
    otPay = (HoursWrkd - 40) * (2 * wagePerHour);
    netPay=netPay+otPay;
    cout<< setprecision(2)<<fixed;
    cout<< "Paycheck = $"<< setw(7)<< netPay;
    
    }
    
    //Exit stage right or left!
    return 0;
}
