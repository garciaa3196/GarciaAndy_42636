/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 9, 2017, 3:48 PM
 * Purpose: Determine the Mode of an array
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <cstdlib>      //Random array
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int*,int);
void prntAry(int*,int);
void MarkSrt(int*,int);
int calcMde(int*,int);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=7;
    int array[SIZE], *arrPntr;
    
    //Pointer
    arrPntr=array;

    //Fill Array
    fillAry(arrPntr,SIZE);
    
    //Sort Array
    MarkSrt(arrPntr,SIZE);
    
    //Print Array
    prntAry(arrPntr,SIZE);
    
    //Calculate the Mode
    calcMde(arrPntr,SIZE);
    
    //Exit
    return 0;
}
void fillAry(int *a,int n){
    //Fill the Array
    for(int i=0;i<n;i++){
        *(a+i)=rand()%9+1;    //Random numbers from 1-9    
    }
}
void MarkSrt(int *a,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(*(a+i)>*(a+j)){
                *(a+i)=*(a+i)^*(a+j);
                *(a+j)=*(a+i)^*(a+j);
                *(a+i)=*(a+i)^*(a+j);
            }
        }
    }
}
void prntAry(int *a,int n){
    //Print Array
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";        
    }
    cout<<endl;
}
calcMde(int *a,int n){
    int mode=-1;
    for(int i=0;i<n;i++){
        if(*(a+i)==*(a+i+1)){
            mode=*(a+i);
            if(*(a+i)!=*(a+i-1)){
                cout<<"The mode is "<<mode<<endl;
            }
        }
    }
    
}