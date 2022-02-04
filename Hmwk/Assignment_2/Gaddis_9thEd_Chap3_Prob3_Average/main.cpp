/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on Jan 13, 2022, 7:01 PM
 * Purpose:  Test Average
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
int main(int argc, char** argv) {

   
    //Declare Variables
    double test1, test2, test3, test4, test5; //to hold the scores
    double average; // to hold the average
    
    //Get the five test scores.
    cout << "Input 5 numbers to average."<< endl;
    cin >> test1;
    cin >> test2;
    cin >> test3;
    cin >> test4;
    cin >> test5;
    
    //Computing average test score
    average = (test1 + test2 + test3 + test4 + test5) / 5.0;
    
    //printing result on screen
    cout << setprecision(1) << fixed;
    cout << "The average = "<< average;
    
    return 0;
}
