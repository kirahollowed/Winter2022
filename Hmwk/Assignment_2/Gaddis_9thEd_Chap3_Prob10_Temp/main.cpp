/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on July 1, 2021, 9:00 PM
 * Purpose:  Fahrenheit to celsius
*/

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
#include <iostream>
#include <iomanip>


//Execution Begins Here!
int main(int argc, char** argv)
{
    //declare variables needed
    double celsius, fahrenheit;

    //prompt user to enter input then read
    cout<< "Temperature Converter" << endl << "Input Degrees Fahrenheit"<< endl;
    cin >> fahrenheit;

    //calculate temperature in Fahrenheit
    celsius = (5.0/9.0)*(fahrenheit-32.0);

    //format output then display
    cout<< setprecision(1) <<fixed;
    cout << fahrenheit << " Degrees Fahrenheit = "; 
    cout << celsius << " Degrees Centigrade";
    
    return 0;
}
