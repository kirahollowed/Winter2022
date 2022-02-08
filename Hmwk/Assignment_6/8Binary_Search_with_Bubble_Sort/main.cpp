/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on: 6 February 2022 at 4:39 PM
 * Purpose:  Binary Search
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
void bubSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val,count = 0;
    
    //Initialize or input i.e. set variable values
    // fillAry(array,SIZE);
    for(int i = 0; i < SIZE; i++){
        cin >> array[i];
    } 
    //Sorted List
    bubSrt(array,SIZE);
    
    for(int i = 0; i < SIZE; i++){
        cout << array[i] << " ";
        if((i + 1) % 10 == 0){
            cout << endl;
        }
    } 
    //Display the outputs
    cout<<endl<<"Input the value to find in the array"<<endl;
    cin>>val;
    for(int i = 0; i < SIZE; i++){
        if(array[i] == val && count < 1){
        count += 1;
        indx = i;
        }
    } 
    // if(binSrch(array,SIZE,val,indx))
    cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}
void bubSrt(int array[],int SIZE){
 for(int i = 0; i < SIZE - 1; i++){
    for(int a = 0; a < SIZE - i - 1; a++){ 
    if(array[a] > array[a + 1]){
    int k = array[a];
     array[a] = array[a + 1];
     array[a+1] = k;
    } 
    }
 }
}