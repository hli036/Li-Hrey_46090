/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 28, 2015, 12:59 AM
 * Purpose: Homework, Distance per Tank of Gas
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
    int gasTnk=20;    //Gallons of gas the car's gas tank holds; Units = gal
    float avgMPGT=23.5; //Average MPG when driven in town;
                        //Units = miles/gal
    float avgMPGH=28.9; //Average MPG when driven on the highway; 
                        //Units = miles/gal
    float distTwn;      //Distance car can travel on one tank of gas 
                        //when driven in town; Units = miles
    float distHwy;      //Distance car can travel on one tank of gas 
                        //when driven on the highway; Units = miles
    
    //Calculate the distance traveled in town and on the highway
    distTwn=gasTnk*avgMPGT;
    distHwy=gasTnk*avgMPGH;
    
    //Output the results
    cout<<"A car with a "<<gasTnk<<"-gallon gas tank averages "<<avgMPGT<<
            " MPG when driven in town and "<<avgMPGH<<" MPG when driven "
            "on the highway."<<endl;
    cout<<"The distance the car can travel on one tank of gas "
            "when driven in town = "<<distTwn<<" miles."<<endl;
    cout<<"The distance the car can travel on one tank of gas "
            "when driven on the highway = "<<distHwy<< " miles."<<endl;
    
    //Exit stage right!
    
    return 0;
}

