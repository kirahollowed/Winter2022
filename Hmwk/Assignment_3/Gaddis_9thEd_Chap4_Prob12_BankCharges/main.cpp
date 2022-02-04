/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    //Set the random number seed
    const float ten_cents             = .10,
                 eight_cents           = .08,
                 six_cents             = .06,
                 four_cents            = .04;
    float beginning_balance, monthly_fee = 10, low_balance = 15;
    float number_of_checks, check_fee;
    float new_balance;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
cout<<setprecision(2)<<fixed;
cout << "Monthly Bank Fees" <<endl;
cout << "Input Current Bank Balance and Number of Checks" <<endl;
cout << "";
    cin >> beginning_balance;
    cin >> number_of_checks;
    new_balance=beginning_balance;
cout << "Balance     $   ";
    cin >> beginning_balance;
    cout<<beginning_balance<<endl;
    if (beginning_balance < 0)
        cout << "URGENT! Your account is overdrawn.";

    if (beginning_balance < 400)
        new_balance -= low_balance;
if (number_of_checks < 0)
    {
        cout << "Oops. "
             << "Number of checks written must be\n" 
             << "0 or more.\n";
        cout << "Please rerun the program and try again.Check Fee   $     "<<check_fee<<endl;
    }
    else 
    {
        cout << setprecision(2) << fixed;

        if (number_of_checks >= 0 && number_of_checks < 20)
        
            check_fee = number_of_checks * ten_cents;
        
        else if (number_of_checks >= 20 && number_of_checks <= 39)
        
            check_fee = number_of_checks * eight_cents;
        
        else if (number_of_checks >= 40 && number_of_checks <= 59)
        
            check_fee = number_of_checks * six_cents;
        
        else if (number_of_checks >= 60)
    
            check_fee = number_of_checks * four_cents;
        new_balance-=check_fee;
    }
cout <<"Check Fee   $     ";
cin>> check_fee;
cout<<check_fee<<endl;

cout <<"Monthly Fee $    ";
cin>> monthly_fee;
cout<<monthly_fee<<endl;
new_balance-=monthly_fee;

cout <<"Low Balance $    ";
cin>> low_balance;
cout<<low_balance<<endl;

cout <<"New Balance $    "; 
cin>>new_balance;
cout<<new_balance;
    //Exit stage right or left!
    return 0;
}