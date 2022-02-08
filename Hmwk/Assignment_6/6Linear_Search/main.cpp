/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on: 6 February 2022 at 3:30 PM
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val, times = 0;
    
    val=50;
    for(int a = 0; a < 100; a++){
        cin >> array[a];
    }
    for(int a = 0; a < 100; a++){
        if(val == array[a] && times < 1){
            times += 1;
            indx = a;
        }
    }
    //Display the outputs
    // prntAry(array,SIZE,10);
    // if(linSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
    return 0;
}