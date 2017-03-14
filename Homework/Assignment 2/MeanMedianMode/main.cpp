/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 12, 2017, 6:32 PM
 * Purpose: Find the mean, median and mode for an array
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int[],int);
void prntAry(int[],int);
void MarkSrt(int[],int);
float calcAvg(int[],int);
int calcMed(int[],int);
void calcMde(int[],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=7;       //Size of original array
    int     array[SIZE],    //Array to compare values from
            *Modes;           //Dynamic array for the mode
    float  average;         //Mean
    int numMode;            //Number of Modes
    
    //Fill Array
    fillAry(array,SIZE);
    
    //Sort Array
    MarkSrt(array,SIZE);
    
    //Print Array
    cout<<"Sorted array of values: ";
    prntAry(array,SIZE);
    
    //Calculate the median
    cout<<"Median(s): ";
    calcMed(array,SIZE);
    
    //Find Mean (Average)
    average=calcAvg(array,SIZE);
    cout<<"Mean: "<<average<<endl;
    
    //Dynamically allocate array
    Modes=new int[numMode];
    
    //Find Mode
    calcMde(array,SIZE);
    
    //Delete the Array
    delete []Modes;
    
    //Exit
    return 0;
}
void fillAry(int a[],int n){
    cout<<"Enter each value below"<<endl;
    //Fill the Array
    for(int i=0;i<n;i++){
        cout<<"Value "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<endl;
}
void MarkSrt(int a[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
}
void prntAry(int a[],int n){
    //Print Array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";        
    }
    cout<<endl;
}
float calcAvg(int a[],int n){
    float AScore;
    int total=0;
    for(int i=0;i<n;i++){
        total+=a[i];
    }
    AScore=total/n;
    return AScore;
}
int calcMed(int a[],int n){
        if(n%2==0){
            cout<<a[n/2]<<" "<<a[(n/2)+1]<<endl;
        }
        else{
            cout<<a[n/2]<<endl;
        }
}
void calcMde(int a[],int n){
    int count=1;
    int mode;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            count++;
            mode=a[i];  //Mode of the array
        }
    }
}
