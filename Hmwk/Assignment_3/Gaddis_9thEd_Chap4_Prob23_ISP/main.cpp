/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 12, 2021, 3:30 PM
 * Purpose:  Roman Conversion
 */

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
char Package;
int Hours;
float Cost = 0.00;
	ofstream OutFile;
	OutFile.open("Internetbill.txt"); // To open file.
// Ask user to input name, their current package and hours of use.
    cout<< "ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
	cin  >> Package >> Hours;
// Validate that hours used in a month does not exceed 744,
// and that the user only selects package A, B, or C.
if (Hours > 744)
		cout << "Error! hours used in a month cannot exceed 744.\n\n";
else {	// To write bill to file.
		OutFile << "\nInternet service monthly bill\n"
				<< "_________________________________\n"
			 	<< "Package of subscription : " << Package << endl
			 	<< "Hours used this month   : " << Hours << endl
			 	<< fixed << showpoint << setprecision(2)
			 	<< "Cost of service         : $";
			 	
    switch (Package)	{	// Calculate cost of monthly bill and additional hours.
    case 'a' : 
    case 'A' : if (Hours <= 10)
						  Cost = 9.95;
            else 	 	  Cost = 9.95 + ((Hours - 10) * 2);
            break;
    case 'b' : 
    case 'B' : if (Hours <= 20)
						  Cost = 14.95;
           else		      Cost = 14.95 + ((Hours - 20) * 1);
            break;
    case 'c' : 
    case 'C' : Cost = 19.95;
		    break;
    default: {
		cout << "\nError! Invalid package choice.\n"
			 << "Please run package again and choose\n"
			 << "either package A, B or C.\n\n";
	        }
	OutFile << Cost << endl;
    }
}
    
	OutFile.close();
	cout<<"Bill = $ "<<Cost;
return 0;
}
