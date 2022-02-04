/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    int books;
    cout << "Book Worm Points" << endl << "Input the number of books purchased this month." << endl;
    cin >> books;
    if (books < 0) {
        cout << "You must enter a number greater than or equal to 0."<< endl;
    } 
    else cout << "Books purchased =  " << books << endl;
    
    //Declare Variables
    if (books == 0 ) {
        cout << "Points earned   = 0" ;
    } else if (books == 1) {
        cout << "Points earned   = 5";
    } else if (books == 2) {
        cout << "Points earned   = 15" ;
    } else if (books == 3) {
        cout << "Points earned   = 30" ;
    } else  if (books >= 4) {
        cout << "Points earned   = 60";
    }
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}