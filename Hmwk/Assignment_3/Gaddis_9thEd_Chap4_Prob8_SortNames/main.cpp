/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on July 7, 2021, 1:27 PM
 * Purpose:  Sorting Names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Set the random number seed
    
    //Declare Variables
   string n1, n2, n3;
    cout << "Sorting Names" << endl;
    cout << "Input 3 names"<< endl;
    cout << "";
    getline(cin, n1);
    cout << "";
    getline(cin, n2);
    cout << "";
    getline(cin, n3);

    if (n1 <= n2 && n1 <= n3 && n2 <= n3) {
        cout << n1 << "" << endl; 
        cout << n2 << "" << endl; 
        cout << n3 << "";
    } else if (n1 <= n2 && n1 <= n3 && n3 <= n2) {
        cout << n1 << "" << endl; 
        cout << n3 << "" << endl; 
        cout << n2 << "";
    } else if (n2 <= n1 && n2 <= n3 && n1 <= n3) {
        cout << n2 << "" << endl; 
        cout << n1 << "" << endl;
        cout << n3 << "";
    } else if (n2 <= n1 && n2 <= n3 && n3 <= n1) {
        cout << n2 << "" << endl; 
        cout << n3 << "" << endl; 
        cout << n1 << "";
    } else if (n3 <= n1 && n3 <= n2 && n1 <= n2) {
        cout << n3 << "" << endl;
        cout << n1 << "" << endl;
        cout << n2 << "";
    } else if (n3 <= n1 && n3 <= n2 && n2 <= n1) {
        cout << n3 << "" << endl;
        cout << n2 << "" << endl;
        cout << n1 << "";
    }

    return 0;
}