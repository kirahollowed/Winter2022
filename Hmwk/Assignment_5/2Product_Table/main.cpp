/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created:6 February 2022 at 5:58 PM
 * Purpose:  Product Table
 * 
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
using namespace std;
const int COLS = 6;
const int ROWS = 6;
void fillTbl(int array[ROWS][COLS], int);
void prntTbl(int array[ROWS][COLS], int);
int main(int argc, char **argv)
{
int tablSum[ROWS][COLS];
prntTbl(tablSum, ROWS);
return 0;
}
void fillTbl(int array[ROWS][COLS], int numRows)
{
for (int row = 1; row <= numRows; row++)
{
cout << setw(4) << row;
}
}
void prntTbl(int array[ROWS][COLS], int print)
{
cout << "Think of this as a Product/Muliplication Table" << endl;
cout << "           C o l u m n s" << endl;
cout << "     |";
for (int row = 1; row <= ROWS; row++)
{
cout << setw(4) << row;
}
cout<<endl;
cout << "----------------------------------" << endl;
for (int row = 1; row <= 6; row++)
{
if (row == 1)
cout << "   ";
if (row == 2)
cout << "R  ";
if (row == 3)
cout << "O  ";
if (row == 4)
cout << "W  ";
if (row == 5)
cout << "S  ";
if (row == 6)
cout << "   ";
cout << row << " |";
for (int col = 1; col <= 6; col++)
{
cout << setw(4) << row * col;
}
cout << endl;
}
}