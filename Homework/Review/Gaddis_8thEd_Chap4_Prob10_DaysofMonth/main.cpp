/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 1, 2017, 11:14 AM
 * Purpose:  Determine the number of days in a month given the month and year
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short Month;     //Number of Months from 1-12
    unsigned int Year;
    
    
    //Input/Initialize values
    cout<<"Enter the Month (1-12): ";
    cin>>Month;
    cout<<"Enter the Year: ";
    cin>>Year;
    cout<<endl;
    //Input Validation
    if(Month<1||Month>12){
        cout<<"Error - Please enter a valid number for the month (1-12)"<<endl;
        cout<<"Enter the Month (1-12): ";
        cin>>Month;   
    }
    if(Year<0){
        cout<<"Error - The year may not be negative"<<endl;
        cout<<"Enter the Year: ";
        cin>>Year;
    }
    
    //Display Output
    switch(Month){
        case 1: cout<<"Month: January"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 2: cout<<"Month: February"<<endl;
                cout<<"Year: "<<Year<<endl;
                //Year must be divisible by 400 or if not divisible by 100 then by 4
                if((Year%4==0 && Year%100!=0)||(Year%400==0)){
                    cout<<"Number of Days: 29"<<endl;
                }
                else{
                    cout<<"Number of Days: 28"<<endl;
                };break;
        case 3: cout<<"Month: March"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 4: cout<<"Month: April"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 5: cout<<"Month: May"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 6: cout<<"Month: June"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 7: cout<<"Month: July"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 8: cout<<"Month: August"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 9: cout<<"Month: September"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 10: cout<<"Month: October"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 11: cout<<"Month: November"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 12: cout<<"Month: December"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;        
    }

    //Exit
    return 0;
}

