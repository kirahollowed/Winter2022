
/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 5, 2022, 11:40 AM
 * Purpose:  Sum of Two Numbers
 */

#include <iostream>

using namespace std;

/*
 * 
 */
 int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    int op1,op2,total;
    
    //Initialize Variables
    op1=62;
    op2=99;
    
    //Map the inputs/known to the outputs
    total=op1+op2;
    
    //Display the outputs
    cout<<"Operand 1 = "<<op1<<endl;
    cout<<"Operand 2 = "<<op2<<endl;
    cout<<"Total op1 + op2 = "<<total<<endl;
    
    //Exit the program
    return 0;
}