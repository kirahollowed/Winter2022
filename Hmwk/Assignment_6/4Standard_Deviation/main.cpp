/* 
 * File:   main.cpp
 * Author: Kira Hollowed 
 * Created on: February 6 8:34 PM
 * Purpose: Standard Deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout << "The standard deviation = " << stdX(test, SIZE) << endl;

    //Exit stage right or left!
    return 0;
}
void init(float test[], int SIZE){
    for(int a = 0; a < SIZE; a++){
        cin >> test[a];
        cout << fixed << setprecision(7);
    }
}
float avgX(float test[], int SIZE){
    float sum = 0;
    for(int a = 0; a < SIZE; a++){
        sum += test[a];
    }
     float avg = sum / static_cast<float>(SIZE);
    return avg;
}
float stdX(float test[], int SIZE){
    float sum = 0;
    for(int a = 0; a < SIZE; a++){
        sum += pow((test[a] - avgX(test, SIZE)),2);
    }
    float avg = sum / static_cast<float>(SIZE -1);
    float fin = sqrt(avg);
    return fin;
}