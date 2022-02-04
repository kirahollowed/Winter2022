/* 
 * File:   main.cpp
 * Author: Kira Hollowed
 * Created on January 13, 2022, 8:00 PM
 * Purpose:  Lab Assignment 1 Gas Prices
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float Gage, TankSze, Mileage, Gallons, 
            Price1, DisGas1, Cost1,TotalDis1,TtlDisCost1, Tot1, PPG1, 
            Price2, DisGas2, Cost2,TotalDis2,TtlDisCost2, Tot2, PPG2;
            
    //Initialize Variables
            Gage= 0.75;              // Gas Gage % Full
            TankSze= 22;             //Size of Tank in Gallons
            Mileage= 17;             //Gas Mileage MPG   
            Gallons=TankSze*(1-Gage); //Gallons Required to fill up
    
    //Map the inputs/known to the outputs
      
    //Station 1
            Price1= 4.25;                               //Regular Gas$/Gallon
            DisGas1= 10;                                //Miles to Gas Station
            Cost1= Price1*Gallons;                      //Cost to Fill Up
            TotalDis1= 2*DisGas1;                       //Total distance Driven in Miles back and forth to gas station
            TtlDisCost1=TotalDis1/Mileage*Price1;       //Cost to drive distance to and from gas station $
            Tot1=Cost1+ TtlDisCost1;                    //Total Cost $ with mileage to gas station
            PPG1= Tot1/Gallons;                         //$ Price per gallon when adding in mileage to station
            
     //Station 2
            Price2= 4.09;                               //Regular Gas$/Gallon
            DisGas2= 15;                                //Miles to Gas Station
            Cost2= Price2*Gallons;                      //Cost to Fill Up
            TotalDis2= 2*DisGas2;                       //Total distance Driven in Miles back and forth to gas station
            TtlDisCost2=TotalDis2/Mileage*Price2;       //Cost to drive distance to and from gas station $
            Tot2=Cost2+ TtlDisCost2;                    //Total Cost $ with mileage to gas station
            PPG2= Tot2/Gallons;                         //$ Price per gallon when adding in mileage to station
            
    //Display the outputs
            cout<<"This program determines which gas station will be cheaper to drive to and fill up at."<<endl;
            cout<<"A car's gas gage is 75% full."<<endl;
            cout<<"The tank size is "<<TankSze<<" gallons."<<endl;
            cout<<"Therefore, "<<Gallons<< " gallons of gas are required to be filled up"<<endl;
            cout<<"Station 1 is "<<DisGas1<< " miles away and the price is $"<<Price1<<" per gallon."<<endl;
            cout<<"Station 2 is "<<DisGas2<< " miles away and the price is $"<<Price2<<" per gallon."<<endl;
            cout<<"You will pay $"<<PPG1<<" total if you go to Station 1."<<endl;
            cout<<"You will pay $"<<PPG2<<" total if you go to Station 2."<<endl;
            
            if (PPG1>PPG2)
            cout<<"Therefore, Station 2 is the cheapest option."<<endl;
            
            if (PPG2>PPG1)
            cout<<"Therefore Station 1 is the cheapest option."<<endl;
            
    //Exit the program
    return 0;
}

