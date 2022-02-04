/* 
 * File:   main.cpp
 * Author: Kira Hollwoed
 * Created on July, 12, 2021, 5:51 PM
 * Purpose:  Rock Paper Scissors
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
   // Variable declaration
   char Player1, Player2, ans;

   //setting the stage

   cout << "Rock Paper Scissors Game"<<endl;
   cout << "Input Player 1 and Player 2 Choices" <<endl;
   cin >> Player1;
   cin >> Player2;

   {
       //checking if player1 wins the game
       if ((Player1 =='R' ||Player1== 'r') && (Player2 =='S' || Player2=='s'))
       {
           cout << "Rock breaks scissors.";
       }
       //checking if player2 wins the game
       else if ((Player1 =='S' ||Player1=='s') && (Player2 =='R' ||Player2=='r'))
       {
           cout << "Rock breaks scissors.";
       }
       //checking if player1 wins the game
       else if ((Player1 =='P' ||Player1== 'p') && (Player2 =='R' || Player2=='r'))
       {
           cout << "Paper covers rock.";
       }
       //checking if player2 wins the game
       else if ((Player1 =='R' ||Player1=='r') && (Player2 =='P' ||Player2=='p'))
       {
           cout << "Paper covers rock.";
       }
       //checking if player1 wins the game
       else if ((Player1 == 'S' ||Player1== 's') && (Player2 =='P' ||Player2=='p'))
       {
           cout << "Scissors cuts paper.";
       }
       //checking if player2 wins the game
       else if ((Player1 =='P' || Player1=='p') && (Player2 =='S' || Player2=='s'))
       {
           cout << "Scissors cuts paper.";
       }
       //checking if game is draw
       else if ((Player1 =='R' ||Player2== 'r') ||
           (Player1 =='S' ||Player2== 's')||
           (Player1 =='S' ||Player2== 's')
           )
       {
           //print its draw
           cout << "It's a Draw! No one wins!\n";
    }

   //return 0 if progrm executes successfully
   return 0;
}
}