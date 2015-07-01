/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 29, 2015, 12:59 AM
 * Purpose: Homework, Land Calculation
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
using namespace std;//Namespace for iostream

//User libraries

//Global constants

//Function prototypes

//Execution begins here!

int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short acreLnd=43560;    //One acre of land; Units = sq ft
    float trctLnd=391876;   //Tract of land; Units = sq ft
    float numAcLd;          //Number of acres in a tract of land; Units = acres
    
    //Calculate the number of acres in a tract of land
    numAcLd=trctLnd/acreLnd;
    
    //Output the results
    cout<<"One acre of land = "<<acreLnd<<" square feet."<<endl;
    cout<<"A tract of land has "<<trctLnd<<" square feet."<<endl;
    cout<<fixed<<showpoint<<setprecision(3)<<"The number of acres in a "
            "tract of land = "<<numAcLd<<" acres."<<endl;
    
    //Exit stage right!
    
    return 0;
}

