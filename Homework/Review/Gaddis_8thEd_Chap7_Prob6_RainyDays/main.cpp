/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 4, 2017, 5:23 PM
 * Purpose: Find the amount of rainy,cloudy,and sunny days in June,July, and August
 */

//System Libraries
#include <iostream>     //Input/Output Objects
#include <cstdlib>      //Random
#include <ctime>        //Time
#include <iomanip>      //Format
using namespace std;

//User Libraries

//Global Constants
const int NUMDAYS=30;
const int NMONTHS=3;

//Function Prototypes
void fillAry(char [][NUMDAYS],int);
void prntAry(char [][NUMDAYS],int);
void prntAry(int [][NMONTHS]);
void calcAry(char [][NUMDAYS],int [][NMONTHS]);
void rainy(int [][NMONTHS]);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char weather[NMONTHS][NUMDAYS];
    int stat[NMONTHS][NMONTHS]={};
    
    //Input values
    fillAry(weather,NMONTHS);
    
    //Display Output
    prntAry(weather,NMONTHS);
    
    //Process Values - Map Inputs to Outputs
    calcAry(weather,stat);
    
    //Display Output
    prntAry(stat);
    rainy(stat);
    
    //Exit
    return 0;
}
void fillAry(char weather[][NUMDAYS],int nMonths){
    //Declare Array of Values
    char type[]={'R','C','S'};
    //Fill the Array
    for(int days=0;days<NUMDAYS;days++){
        for(int months=0;months<nMonths;months++){
            weather[months][days]=type[rand()%3];
        }
    }
}
void prntAry(char weather[][NUMDAYS],int nMonths){
    //Print the data out
    cout<<endl;
    for(int months=0;months<nMonths;months++){
        for(int days=0;days<NUMDAYS;days++){
            cout<<weather[months][days]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void calcAry(char weather[][NUMDAYS],int stat[][NMONTHS]){
    for(int months=0;months<NMONTHS;months++){
        for(int days=0;days<NUMDAYS;days++){
            if(weather[months][days]=='R'){
                stat[months][0]++;
            }else if(weather[months][days]=='C'){
                stat[months][1]++;
            }else{
                stat[months][2]++;
            }
        }
    }
}
void prntAry(int stat[][NMONTHS]){
    //Declare another array
    char month[][7]={"  June","  July","August"};
    //Print the data out
    cout<<endl;
    cout<<"        R   C   S"<<endl;
    for(int months=0;months<NMONTHS;months++){
        cout<<month[months];
        for(int data=0;data<NMONTHS;data++){
            cout<<setw(3)<<stat[months][data]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void rainy(int stat[][NMONTHS]){
    int sum=stat[0][0],low=stat[0][0],high=stat[0][0];
    float avg;
    for(int months=1;months<NMONTHS;months++){
        sum+=stat[months][0];
        if(high<stat[months][0])high=stat[months][0];
        if(low>stat[months][0])low=stat[months][0];
    }
    avg=1.0f*sum/NMONTHS;
    cout<<endl;
    cout<<"Total Rainy Days   = "<<sum<<endl;
    cout<<"Average Rainy Days = "<<avg<<endl;
    cout<<"Highest Rainy Days = "<<high<<endl;
    cout<<"Lowest Rainy Days  = "<<low<<endl;
}