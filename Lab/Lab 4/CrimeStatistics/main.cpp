/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 25, 2015, 12:25 PM
 * Purpose: Find out the percentage of violent crimes in the U.S.A vs the U.K.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!

int main(int argc, char** argv) {
    
    //Declare variables
    float vicrmUS;
    float vicrmUK;
    float popUS;
    float popUK;
    float pctUS;
    float pctUK;
    
    //Initialize variables
    vicrmUS=11.88e6f;
    popUS=318e6;
    vicrmUK=6.52e6;
    popUK=64.1e6;
    
    //Calculate the percentages
    pctUS=(vicrmUS/popUS*100);
    pctUK=(vicrmUK/popUK*100);
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2)<<"The percentage of violent crime in the U.S. is = "<<pctUS<<" %"<<endl;
    cout<<fixed<<showpoint<<setprecision(2)<<"The percentage of violent crime in the U.K. is = "<<pctUK<<" %"<<endl;
    
    //Exit stage right!
    return 0;
}
