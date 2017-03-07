/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 2, 2017, 11:40 AM
 * Purpose: Convert Temperature from 0-20 from Fahrenheit to Celsius
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
float tempCnv(float);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int degF;

    //Process Values -> Map Inputs to Outputs
    cout<<"Degrees F  Degrees C"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    for(int degF=0;degF<=20;degF++){
        cout<<setw(6)<<degF<<setw(12)<<tempCnv(degF)<<endl;
    }
    
    //Exit
    return 0;
}
//Temperature Conversion from Fahrenheit to Celsius
//Input
//f - Fahrenheit
//Output
//c - Celsius
float tempCnv(float f){
    return (f-32.0f)*5/9;
}
