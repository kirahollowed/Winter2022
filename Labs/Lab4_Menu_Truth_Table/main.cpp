/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 19, 2021, 3:55 PM
 * Purpose:  Truth Table
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    bool x,y;
    
    //Display the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X "<<
            "!X&&!Y !(X||Y) !X||!Y !(X&&Y)"<<endl;
    
    //1st Output Row
    x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y? 'T': 'F')<<"    ";
    cout<<(x^y^y? 'T': 'F')<<"      ";
    cout<<(x^y^x? 'T':'F')<<"     ";
    cout<<(!x&&!y? 'T':'F')<<"      ";
    cout<<(!(x||y)? 'T':'F')<<"      ";     
    cout<<(!x||!y? 'T':'F')<<"       ";     
    cout<<(!(x&&y)? 'T':'F')<<"  ";
    cout<<endl;
    
    //2nd Output Row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y? 'T': 'F')<<"    ";
    cout<<(x^y^y? 'T': 'F')<<"      ";
    cout<<(x^y^x? 'T':'F')<<"     ";
    cout<<(!x&&!y? 'T':'F')<<"      ";
    cout<<(!(x||y)? 'T':'F')<<"      ";     
    cout<<(!x||!y? 'T':'F')<<"       ";     
    cout<<(!(x&&y)? 'T':'F')<<"   ";
    cout<<endl;
    
    //3rd Output Row
    x=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y? 'T': 'F')<<"    ";
    cout<<(x^y^y? 'T': 'F')<<"      ";
    cout<<(x^y^x? 'T':'F')<<"     ";
    cout<<(!x&&!y? 'T':'F')<<"      ";
    cout<<(!(x||y)? 'T':'F')<<"      ";     
    cout<<(!x||!y? 'T':'F')<<"       ";     
    cout<<(!(x&&y)? 'T':'F')<<"   ";
    cout<<endl;
    
    //4th Output Row
    x=y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y? 'T': 'F')<<"    ";
    cout<<(x^y^y? 'T': 'F')<<"      ";
    cout<<(x^y^x? 'T':'F')<<"     ";
    cout<<(!x&&!y? 'T':'F')<<"      ";
    cout<<(!(x||y)? 'T':'F')<<"      ";     
    cout<<(!x||!y? 'T':'F')<<"       ";     
    cout<<(!(x&&y)? 'T':'F')<<"   ";
    cout<<endl;

    //Exit stage right!
    return 0;
}
