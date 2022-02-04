/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on July 1, 2021, 2:45 PM
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
    double insurance; // to hold the average
    
    //Get the five test scores.
    cout<< "Insurance Calculator" <<endl<< "How much is your house worth?"<< endl;
    cin >> test1;
    
    //Computing average test score
    insurance = test1*.8;
    
    //printing result on screen
    cout << "You need $"<< insurance<< " of insurance.";
    
    return 0;
}
