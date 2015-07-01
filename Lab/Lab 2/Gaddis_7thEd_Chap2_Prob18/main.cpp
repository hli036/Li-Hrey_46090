/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 23, 2015, 11:46 PM
 * Purpose: Homework, Energy Drinkers
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize variables
    unsigned short cSurv=12467;//Number of customers surveyed
    unsigned short nEDrnks;    //Number of customers drinking 1 or more energy drinks per week
    unsigned short nCDrnks;    //Number of energy drinkers that prefer citrus flavored
    float pEDrnks=0.14f;       //Percentage surveyed that like/prefer energy drinks
    float pCDrnks=0.64f;       //Percentage surveyed that prefer citrus flavor
    //Calculate the number of Drinkers
    nEDrnks=static_cast<int>(cSurv*pEDrnks);
    nCDrnks=static_cast<int>(nEDrnks*pCDrnks);
    //Output the results
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    //Exit Stage Right!
    return 0;
}

