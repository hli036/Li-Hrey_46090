/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 23, 2015, 11:56 PM
 * Purpose: Homework, Free Fall
 */

#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants
const float GRAVITY=3.2174e1f;//Acceleration due to Gravity Earth (ft/sec^2)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    //dstnce=The distance dropped in (ft)
    //time=Time in (secs)
    float dstnce, time;
    //Prompt then to Input the time
    cout<<"To calculate the distance dropped\n";
    cout<<"Input the time in seconds"<<endl;
    cout<<"Time should be in floating point format\n";
    cin>>time;
    //Calculate the free-fall distance
    //dstnce=1/2*GRAVITY*time*time;//Incorrect
    //dstnce=1.0f/2*GRAVITY*time*time;//Correct
    dstnce=GRAVITY*time*time/2;//Correct
    //Output the results
    cout<<"The distance traveled = ";
    cout<<dstnce<<"(ft)"<<endl;
    //Exit Stage Right!
    return 0;
}

