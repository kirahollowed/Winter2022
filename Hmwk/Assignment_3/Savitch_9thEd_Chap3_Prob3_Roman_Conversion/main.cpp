/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 12, 2021, 3:30 PM
 * Purpose:  Roman Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short algebra;
    string roman="";
    char n1000s, n100s, n10s, n1s;
    
    //Initialize or input i.e. set variable values
    cout << "Arabic to Roman numeral conversion." <<endl;
    cout << "Input the integer to convert." << endl;
    cin >> algebra;
    
    //Determine if Appropriate number
    if (algebra>= 3000) {
        cout <<algebra<<" is Out of Range!";
        exit (1);
    }
    if (algebra<= 1000) {
        cout <<algebra<<" is Out of Range!";
        exit (1);
    }
    
    // Calculate the number of powers of 10 
    n1000s=algebra/1000;
    n100s=algebra%1000/100;
    n10s=algebra%100/10;
    n1s=algebra%10;
    //Output Roman Numerals 1000's 
    switch (n1000s) {
        case 3: roman+= "M";
        case 2: roman+= "M";
        case 1: roman+= "M";
    }
    
    //Output Roman Numerals 100's - Ternary Operator 
    roman+=n100s==9?"CM":
           n100s==8?"DCCC":
           n100s==7?"DCC":
           n100s==6?"DC":
           n100s==5?"D":
           n100s==4?"CD":
           n100s==3?"CCC":
           n100s==2?"CC":
           n100s==1?"C":"";
    //Output Roman Numerals 10's - Dependent if
    if (n10s==9) roman+= "XC";
    else if (n10s==8)roman+="LXXX";
    else if (n10s==7)roman+="LXX";
    else if (n10s==6)roman+="LX";
    else if (n10s==5)roman+="L";
    else if (n10s==4)roman+="XL";
    else if (n10s==3)roman+="XXX";
    else if (n10s==2)roman+="XX";
    else if (n10s==1)roman+="X";
    
    //Output Roman Numerals 10's - Independent if
    if (n1s==9)roman+="IX";
    if (n1s==8)roman+="VIII";
    if (n1s==7)roman+="VII";
    if (n1s==6)roman+="VI";
    if (n1s==5)roman+="V";
    if (n1s==4)roman+="IV";
    if (n1s==3)roman+="III";
    if (n1s==2)roman+="II";
    if (n1s==1)roman+="I";
    
//Display the results
cout<<algebra<< " is equal to "<<roman;

    //Exit stage right or left!
    return 0;
}