/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 12:51 PM
 * Purpose: Restaurant Bill
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
    float MealCharge, TaxPercent,TipPercent, Total, Tax, Tip, MealwTax;
    
    //Initialize Variables
    MealCharge= 44.50;
    TaxPercent= 0.0675;
    TipPercent= 0.15;
    
    
    //Map the inputs/known to the outputs
    Tax= TaxPercent*MealCharge;
    MealwTax= Tax+MealCharge;
    Tip= TipPercent*MealwTax;
    Total= MealCharge+Tax+Tip;
    
    //Display the outputs
    cout<<"For a $44.50 meal charge with 6.75% tax and 15% tip,"<<endl;
    cout<<"the tax amount =   $"<<Tax<<endl;
    cout<<"the tip amount =   $"<<Tip<<endl;
    cout<<"the total amount = $"<<Total<<endl;
    //Exit the program
    return 0;
}
