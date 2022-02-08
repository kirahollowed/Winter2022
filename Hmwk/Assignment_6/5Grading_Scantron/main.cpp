/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on: 5 February 2022 at 11:23 PM
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    int keySiz = 21;
    string keys [keySiz];
    int ansSiz = 21;
    float co = 0;
    string ans [ansSiz];
   
    //Initialize or input i.e. set variable values
    for(int a = 0; a < keySiz; a++){
        cin >> keys[a];
    }
    for(int a = 0; a < ansSiz; a++){
        cin >> ans[a];
    }
    
    //Score the exam
    // pRight=compare(key,answers,score);
    
    //Display the outputs
    
    cout<<"C/W     ";
    for(int a = 1; a < ansSiz; a++){
        if(keys[a] == ans[a]){
            cout << "C ";
            co += 1;
        } else{
            cout << "W ";
        }
    }
    cout << endl;
    co /= ansSiz - 1;
    cout<<"Percentage Correct = " << co * 100 << "%" << endl;
    

    //Exit stage right or left!
    return 0;
}