/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const string ELE[4]={"Earth","Fire","Air","Water"};
    const string EARTH[3]={"Taurus","Capricorn","Virgo"};
    const string FIRE[3]={"Leo","Aries","Sagittaurius"};
    const string AIR[3]={"Libra","Gemini","Aquarius"};
    const string WATER[3]={"Cancer","Pisces","Scorpio"};
   string sign1;
   string sign2;
   int type1;
   int type2;
   bool match1=false;
   bool match2=false;
    
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
    //Display the outputs
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
    
    //Compare sign Input to signs existing
    for(int i=0;i<3;i++) {
        if(sign1.compare(EARTH[i])==0) {
            match1=true;
            type1=0; } 
        if(sign2.compare(EARTH[i])==0) {
            match2=true;
            type2=0; }
    }
    
    for(int i=0;i<3;i++) {
        if(sign1.compare(FIRE[i])==0) {
            match1=true;
            type1=1; } 
        if(sign2.compare(FIRE[i])==0) {
            match2=true;
            type2=1; }
    }
    
    for(int i=0;i<3;i++) {
        if(sign1.compare(AIR[i])==0) {
            match1=true;
            type1=2; } 
        if(sign2.compare(AIR[i])==0) {
            match2=true;
            type2=2; }
    }
    
    for(int i=0;i<3;i++) {
        if(sign1.compare(WATER[i])==0) {
            match1=true;
            type1=3; } 
        if(sign2.compare(WATER[i])==0) {
            match2=true;
            type2=3; }
    }
    
    if(match1==false) {
        cout<<"The first sign is invalid.";
    }
    
    if(match2==false) {
        cout<<"The second sign is invalid";
    }
    
    if(match1==true && match2==true) {
        if (type1==type2) 
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ELE[type1]<<" signs.";
        else
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }
    //Exit stage right or left!
    return 0; 
    
}
