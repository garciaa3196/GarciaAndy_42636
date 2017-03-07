/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 6, 2017, 8:28 PM
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void SelSrt(string[],int);   //Sort the array before the binary search
int binSrch(string[],int,string);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string name;            //Searches for the name in the array
    int result;           //Result of the binary search
    const int SIZE=20;    //Number of names in array to sort
    string Names[SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                "Taylor, Terri", "Johnson, Jill",
                                "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                "James, Jean", "Weaver, Jim", "Pore, Bob",
                                "Rutherford, Greg", "Javens, Renee",
                                "Harrison, Rose", "Setzer, Cathy",
                                "Pike, Gordon", "Holland, Beth" };
    //Sort the array
    SelSrt(Names,SIZE);
    
    //Display Array
    for(int i=0;i<=SIZE-1;i++){
        cout<<Names[i]<<"   ";
        if(i%5==0){
            cout<<endl;
        }
    }
    
    //Input Name
    cout<<endl;
    cout<<"This program will sort and perform a binary search for a string array"<<endl;
    cout<<"Please enter a name: ";
    cin>>name;
    cout<<endl;
 
    //Binary Search - Results
    result=binSrch(Names,SIZE,name);
    
    //Display Results
    cout<<name<<" was found at index "<<binSrch(Names,SIZE,name)<<endl;
    
    //Exit
    return 0;
}
int binSrch(string a[],int n,string val){
    //Declare and setup
    int begRng=0,endRng=n-1;
    bool found=false;   //flag
    //Loop until found
    do{
        int midPnt=(endRng+begRng)/2;
        if(a[midPnt]==val){     //If name is the midpoint
            found=true;
            return midPnt;
            
        }    
        else if(a[midPnt]>val){ //Name is at a lower element
            endRng=midPnt-1;
        }else if(a[midPnt]<val){    //Name is at a higher element
            begRng=midPnt+1;
        }
    }while(endRng>=begRng&&found==true);
    return -1;
}
void SelSrt(string a[],int size){
    int i,minInd;
    string minVal;
    for(i=0;i<size;i++){
        minInd=i;
        minVal=a[i];
        for(int j=i+1;j<size;j++){
            if(a[j]<minVal){
                minVal=a[j];
                minInd=j;
            }
        }
    a[minInd] = a[i];
    a[i] = minVal;
    }
}