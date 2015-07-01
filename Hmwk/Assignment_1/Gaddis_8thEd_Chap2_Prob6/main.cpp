/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 28, 2015, 12:07 AM
 * Purpose: Homework, Annual Pay
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
    float payAmt=2200.0;         //Employees pay each pay period, 
                                 //which is every 2 weeks; Units = $'s
    float payPrds=26;    //Number of pay periods in a year; 
                                 //Units = pay periods/year
    float anulPay;      //Employee's total annual pay; 
                                 //Units = $'s/year
    
    //Calculate the annual pay
    anulPay=payAmt*payPrds;
    
    //Output the results
    cout<<"An employee gets paid every two weeks and earns $"<<payAmt<<
            " each pay period."<<endl;
    cout<<"The employee gets paid "<<payPrds<<" times in a year."<<endl;
    cout<<"The employee's total annual pay = $"<<anulPay<<endl;
    
    //Exit stage right!
    
    return 0;
}

