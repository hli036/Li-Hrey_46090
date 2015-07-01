/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 29, 2015, 12:24 AM
 * Purpose: Homework, Ocean Levels
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User libraries

//Global constants

//Function prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Declare and initialize variables
    float ocLvlC=1;    //Ocean's current level; Units = mm
    float ocLvlRi=1.5; //Ocean's level rising about 1.5 millimeters per year; 
                       //Units = mm
    float ocLvl5;      //Number of mm higher than the 
                       //current ocean's level in 5 years
    float ocLvl7;      //Number of mm higher than the 
                       //current ocean's level in 7 years
    float ocLvl10;     //Number of mm higher than the 
                       //current ocean's level in 10 years
    
    //Calculate the the ocean's levels
    ocLvl5=ocLvlC*ocLvlRi*5;
    ocLvl7=ocLvlC*ocLvlRi*7;
    ocLvl10=ocLvlC*ocLvlRi*10;

    //Output the results
    cout<<"Assume the ocean's level is currently at "<<ocLvlC<<
            " mm and rises at about "<<ocLvlRi<< " mm per year."<<endl;
    cout<<"In 5 years, the ocean's level will be = "<<ocLvl5<<" mm."<<endl;
    cout<<"In 7 years, the ocean's level will be = "<<ocLvl7<<" mm."<<endl;
    cout<<"In 10 years, the ocean's level will be = "<<ocLvl10<<" mm."<<endl;

    //Exit stage right!
    
    return 0;
}

