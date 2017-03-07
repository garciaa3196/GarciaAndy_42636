/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on February 28, 2017, 7:39 PM
 * Purpose:  Determine the size of a population after a period of time
 */

//System Libraries Here
#include <iostream>     //Input/Output Library
#include <iomanip>      //Formatting
#include <cmath>       //exp function 
using namespace std;

//User Libraries Here

//Global Constants
const float CNVPerc=100;  //Conversion for Percent

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables
    int     PIsize,     //Initial Population size
            PFsize,     //Final Population size
            growth,     //Population Growth
            days,       //Number of days passed
            count;      //Counter
    float   rate;       //Growth as a decimal
    
    //Input Values
    cout<<"Input the initial size of the population"<<endl;
    cin>>PIsize;
    cout<<"Input the growth as a positive integer"<<endl;
    cin>>growth;
    cout<<"Input the number of days passed"<<endl;
    cin>>days;
    
    //Input Validation
    if(PIsize<2){
        cout<<"Error - Value must be greater than 2"<<endl;
        return 1;
    }
    if(growth<0){
        cout<<"Error - Value must be positive"<<endl;
        return 1;
    }
    if(days<1){
        cout<<"Error - Value must be greater than 1"<<endl;
        return 1;
    }
    
    //Table Setup
    cout<<"Day #                    "<<"Size of Population"<<endl;
    cout<<"-------------------------------------------"<<endl;
    
    //
    for(int count=0;count<=days;count++){
        rate=growth/CNVPerc;
        PFsize=PIsize*exp(rate*count);
        cout<<count<<"                         "<<PFsize<<endl;
    }
    
    //Exit
    return 0;
}

