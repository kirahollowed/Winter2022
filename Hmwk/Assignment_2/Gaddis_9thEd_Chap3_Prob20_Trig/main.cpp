/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on July 1, 2021, 9:27 PM
 * Purpose:  Trig 
 */

//System Libraries
#include <iostream> 
#include <iomanip>  // setprecision()
#include <cmath> //Input/Output Library
using namespace std;
#define PI 3.14159265
//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    // Variables
    int angle;

    // Ask the user for an angle in radians
    cout << "Calculate trig functions"<<endl<< "Input the angle in degrees."<<endl; 
    cin >> angle;

    // Display the sine, cosine, and tangent of the angle
    cout << setprecision(4) << fixed;
    cout << "sin("<< angle << ") = " << sin(angle * PI/180) << endl;
    cout << "cos("<< angle << ") = " << cos(angle * PI/180) << endl;
    cout << "tan("<< angle << ") = " << tan(angle * PI/180) ;
  

    // Terminate Program
    return 0;
}
