/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 13, 2022, 7:01 PM 
 * Purpose:  COOKIES_PER_BAG
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath> 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    //declare a few named constants
    const int COOKIES_PER_BAG = 40,
              SERVINGS_PER_BAG = 10,
              CALORIES_PER_SERVING = 300;

    //declare variables needed
    int userCookies, totalCalories;

    //prompt user to enter input then read
    cout <<"Calorie Counter" <<endl<< "How many cookies did you eat?\n";
    cin >> userCookies;

    //calculate total calories for user input
    totalCalories = userCookies * (CALORIES_PER_SERVING / (COOKIES_PER_BAG / SERVINGS_PER_BAG));

    //print output
    cout << "You consumed " << totalCalories << " calories.";

    return 0;
}

