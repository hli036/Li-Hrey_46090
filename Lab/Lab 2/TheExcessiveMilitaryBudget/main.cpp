/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 24, 2015, 12:10 AM
 * Purpose: Military Spending Budget
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float fedBudg=3.8e12f;   //Federal Budget
    float milBudg=0.606e12f; //Military Budget
    //Calculate the Percentage of Spending on Military Budget
    float pMlBudg= (milBudg/fedBudg*100);
    //Output the Results
    cout<<"Percentage of Federal Spending on Military Budget = ";
    cout<<pMlBudg<<"%"<<endl;
    //Exit Stage Right!
    return 0;
}

