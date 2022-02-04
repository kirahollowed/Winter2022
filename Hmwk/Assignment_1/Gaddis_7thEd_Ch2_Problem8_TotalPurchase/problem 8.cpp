
/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 2:09 PM
 * Purpose: Total Purchase
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
    float item1, item2, item3, item4, item5, Tax, SubTotal, SalesTax, Total;
           
    //Initialize Variables
    item1= 12.95;
    item2= 24.95;
    item3= 6.95;
    item4= 14.95;
    item5= 3.95;
    Tax= 0.06;
    
    //Map the inputs/known to the outputs
    SubTotal=item1+item2+item3+item4+item5;
    SalesTax=SubTotal*Tax;
    Total=SalesTax+SubTotal;
    //Display the outputs
           cout<<"A customer is in a store purchasing five items"<<endl;
           cout<<"The Price of item 1 = $"<<item1<<endl;
           cout<<"The Price of item 2 = $"<<item2<<endl;
           cout<<"The Price of item 3 = $"<<item3<<endl;
           cout<<"The Price of item 4 = $"<<item4<<endl;
           cout<<"The Price of item 5 = $"<<item5<<endl;
           cout<<"The subtotal = $"<<SubTotal<<endl;
           cout<<"The sales tax of the purchase = $"<<SalesTax<<endl;
           cout<<"The total = $"<<Total<<endl;
    //Exit the program
    return 0;
}
