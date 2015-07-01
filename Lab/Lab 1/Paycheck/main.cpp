/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 22, 2015, 10:36 PM
 * Purpose: First Program to calculate a paycheck
 */

//System Libraries
#include <iostream> //File I/O
using namespace std; //std namespace -> iostream

//User Libraries

//Global constants

//Function Prototypes

//Execution Beings Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float hours,rate,pay;
    //Input Values Here
    hours = 40;//Units = hours
    rate = 10;//Units = $'s/hour
    //Process Input Here
    pay = hours*rate;//Units = $'s
    //Output Unknowns Here
    cout<<"Hours worked = "<<hours<<"(hrs)"<<endl;
    cout<<"Pay Rate     = $"<<rate<<"/(hrs)"<<endl;
    cout<<"My Paycheck  = $"<<pay<<endl;
    //Exit Stage Right!
    return 0;
}

