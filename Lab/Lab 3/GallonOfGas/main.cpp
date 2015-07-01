/* 
 * File:   main.cpp
 * Author: Hrey Li
 * Created on June 24, 2015, 8:27 PM
 * Purpose: Calculate the total tax and percentage tax per gallon of gas
 */

#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare and Initialize Variables
    float fedTax=0.18; //Federal Tax $'s
    float calTax=0.38; //California Tax $'s
    float slsTax=0.08f; //California Sales Tax %
    float gallon=3.69f; //Price of a gallon of gas $'s with all taxes included
    float basePrc;        //Base Price of a gallon of gas without tax
    float slsTxV;         //Sales Tax Value $'s
    float totTax, pctTax; //Total tax $'s and its percentage
    
    //Calculate the Total Tax Paid and the Percentage of Tax per gallon of gas
    //Assume there is no double taxation
    basePrc=(gallon-fedTax-calTax)/(1+slsTax);//Base Price
    slsTxV=gallon-fedTax-calTax-basePrc;//Sales Tax
    totTax=fedTax+calTax+slsTxV;//Total Tax
    pctTax=(totTax/gallon*100);//Percentage of Total Tax
    
    //Output the Results
    cout<<"The total tax paid per gallon of gas at $";
    cout<<gallon<<"/gallon is $"<<totTax<<endl;
    cout<<"The percentage tax = "<<pctTax<<"%"<<endl;
    
    //Exit Stage Right!
    return 0;
}

