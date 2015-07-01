/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 28, 2015, 12:21 AM
 * Purpose: Homework, Miles per Gallon
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
    int galGas=15;              //Gallons of gasoline a car can hold; Units=gal
    unsigned short milBeRe=375; //Distance car can travel 
                                //before refueling; Units=miles
    float MPG;                  //Miles per gallon the car gets; Units=mi/gal
    
    //Calculate the MPG
    MPG=milBeRe/galGas;
    
    //Output the results
    cout<<"A car that can hold "<<galGas<<" gallons of gasoline and can "
            "travel "<<milBeRe<<" miles before refueling."<<endl;
    cout<<"The car gets "<<MPG<<" MPG."<<endl;
    
    //Exit stage right!
    
    return 0;
}

