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
// Main Function
int main()
{
    string Runner1;
	string Runner2;
	string Runner3;
	float RunTime1, RunTime2, RunTime3;

	// Ask user for runners names and times
	cout << "Race Ranking Program"<<endl;
	cout << "Input 3 Runners"<<endl;
	cout << "Their names, then their times"<<endl;
	cin  >> Runner1;
	cin  >> RunTime1;
	cin  >> Runner2;
	cin  >> RunTime2;
	cin  >> Runner3;
	cin  >> RunTime3;

	if (RunTime1 > 0 && RunTime2 > 0 && RunTime3 > 0) {
		if (RunTime1 < RunTime2 && RunTime1 < RunTime3) {
			if (RunTime2 < RunTime3) {
				cout << "" << Runner1 << "\t" << RunTime1 << endl;
				cout << "" << Runner2 << "\t" << RunTime2 << endl;
				cout << "" << Runner3 << "\t" << RunTime3;
			}
			else {
				cout << "" << Runner1 << "\t" << RunTime1 << endl;
				cout << "" << Runner3 << "\t" << RunTime3 << endl;
				cout << "" << Runner2 << "\t" << RunTime2;
			}
		} else if (RunTime2 < RunTime1 && RunTime2 < RunTime3) {
			if (RunTime1 < RunTime3) {
				cout << "" << Runner2 << "\t" << RunTime2 << endl;
				cout << "" << Runner1 << "\t" << RunTime1 << endl;
				cout << "" << Runner3 << "\t" << RunTime3;
			}
			else {
				cout << "" << Runner2 << "\t" << RunTime2 << endl;
				cout << "" << Runner3 << "\t" << RunTime3 << endl;
				cout << "" << Runner1 << "\t" << RunTime1;
			}
		} else {
			if (RunTime1 < RunTime2) {
				cout << "" << Runner3 << "\t " << RunTime3 << endl;
				cout << "" << Runner1 << "\t" << RunTime1 << endl;
				cout << "" << Runner2 << "\t" << RunTime2;
			}
			else {
				cout << "" << Runner3 << "\t" << RunTime3 << endl;
				cout << "" << Runner2 << "\t" << RunTime2 << endl;
				cout << "" << Runner1 << "\t" << RunTime1;
			}
		}
	}

	else {
		cout << "Invalid time input! Times can not be less than zero.\n"
	         << "Please run the program again with valid time values.\n"; }
	         
	return 0;
}