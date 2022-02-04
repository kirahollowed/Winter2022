/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 23 2022, 7:30 PM
 * Purpose:  Rate of Inflation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
float lastyr, thisyr;
float clcInfn(float current, float prvious );

char c;
cout<<setprecision(2)<<fixed;
do{
// write statements which take input from the user
cout<<"Enter current price:"<<endl;
cin>>thisyr;


cout<<"Enter year-ago price:"<<endl;
cin>>lastyr;

float inflatn = clcInfn(thisyr, lastyr);

// write statement which prints inflation rate
cout<<"Inflation rate: "<<inflatn<<"%"<<endl<<endl;

//statement to ask again for value to enter
cout<<"Again:"<<endl;
cin>>c;
if(c== 'Y'||c=='y') 
{cout<<endl;}
}while(c == 'Y' || c == 'y');

return 0;
}

float clcInfn(float current, float prvious ){
//function definition goes here
//formula goes by ((current_cost - previous_cost)/(previous_cost) ) *100
float rate = ((current - prvious)/prvious)*100;
return rate;
}