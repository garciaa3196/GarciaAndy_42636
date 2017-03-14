/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 9, 2017, 3:48 PM
 * Purpose: Sort a number of test scores and calculate the average score
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

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int     *score,     //Dynamic array
            average;    //Average Score
    int nScores;
    
    //Input Values
    cout<<"How many test scores do you have?"<<endl;
    cin>>nScores;
    
    //Dynamically allocate array
    score=new int[nScores];
    
    //Fill Array
    fillAry(score,nScores);
    
    //Sort Array
    MarkSrt(score,nScores);
    
    //Print Array
    cout<<"Sorted array of scores: ";
    prntAry(score,nScores);
    
    //Calculate Average test score
    average=calcAvg(score,nScores);
    cout<<"The average test score is "<<average<<endl;
            
    //Delete the Array
    delete []score;
    
    //Exit
    return 0;
}
void fillAry(int a[],int n){
    cout<<"Enter each score below"<<endl;
    //Fill the Array
    for(int i=0;i<n;i++){
        cout<<"Test "<<i+1<<": ";
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