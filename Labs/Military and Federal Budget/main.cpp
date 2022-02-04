/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 13, 2022, 9:19 PM
 * Purpose:  Lab Assignment 1 Military Budget as a Percentage of the Federal Budget
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float MilBud, FedBud, MilPerc;
    
    //Initialize Variables
    MilBud= 752900000000;
    FedBud= 6820000000000;
    
    //Map the inputs/known to the outputs
    
    MilPerc= (MilBud/FedBud)*100;
    
    //Display the outputs
    cout<<"The US Military Budget is $"<<MilBud<<"."<<endl;
    cout<<"The US Federal Budget is $"<<FedBud<<"."<<endl;
    cout<<"The Military Budget as a percentage of the Federal Budget is "<<MilPerc<< "%."<<endl;
    //Exit the program
    return 0;
}
