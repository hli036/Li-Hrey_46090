/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 28, 2015, 11:54 PM
 * Purpose: Homework, Energy Drinkers
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User libraries

//Global constants

//Function prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Declare and Initialize variables
    unsigned short cSurv=16500;//Number of customers surveyed
    float pEDrnks=0.15f;       //Percentage surveyed that 
                               //like/prefer energy drinks
    float pCDrnks=0.58f;       //Percentage surveyed that prefer citrus flavor
    unsigned short nEDrnks;    //Number of customers drinking 1 or 
                               //more energy drinks per week
    unsigned short nCDrnks;    //Number of energy drinkers that 
                               //prefer citrus flavored
    
    //Calculate the number of Drinkers
    nEDrnks=static_cast<int>(cSurv*pEDrnks);
    nCDrnks=static_cast<int>(nEDrnks*pCDrnks);
    
    //Output the results
    cout<<"Out of "<<cSurv<<" customers surveyed, approximately "<<pEDrnks<<
            " purchased one or more energy drinks per week."<<endl;
    cout<<"Out of those customers who purchased energy drinks, "
            "approximately "<<pCDrnks<<" of them preferred "
            "citrus-flavored energy drinks."<<endl;
    cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
    cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
    
    //Exit Stage Right!
    
    return 0;
}
