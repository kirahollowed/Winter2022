/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 1:10 PM
 * Purpose: Average of Values
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
    float var1, var2, var3, var4, var5, avg, sum;
    
    //Initialize Variables
    var1= 28;
    var2= 32;
    var3= 37;
    var4= 24;
    var5= 33;
    
    //Map the inputs/known to the outputs
    
    sum= var1+var2+var3+var4+var5;
    avg=sum/5;
            
    //Display the outputs
           cout<<""<<var1<<endl;
           cout<<""<<var2<<endl;
           cout<<""<<var3<<endl;
           cout<<""<<var4<<endl;
           cout<<""<<var5<<endl;
    cout<<"The average of the values given is "<<avg<<endl;
    //Exit the program
    return 0;
}