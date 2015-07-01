/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 27, 2015, 11:50 PM
 * Purpose: Homework, Average of Values
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned char a=28;
    unsigned char b=32;
    unsigned char c=37;
    unsigned char d=24;
    unsigned char e=33;
    float sum; //Sum of all 5 variables
    float avg; //Average of all 5 variables
    
    //Calculate the sum and average
    sum=a+b+c+d+e;
    avg=sum/5;
    
    //Output the results
    cout<<"The sum of the series of values = "<<sum<<endl;
    cout<<"The average of the series of values = "<<avg<<endl;
    
    //Exit Stage Right!
    
    return 0;
}

