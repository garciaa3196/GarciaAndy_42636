/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on February 27, 2017, 11:20 AM
 * Purpose: Determine the amount of points earned for a certain amount of books
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short book;    //Number of books purchased
                 
    //Input desired medium
    cout<<"Input the amount of books purchased"<<endl;
    cin>>book;
    
    //Process Values - Map Inputs to Outputs
    cout<<"Number of books purchased = "<<book<<endl;
    cout<<((book==0) ?"You earned 0 points":
           (book==1) ?"You earned 5 points":
           (book==2) ?"You earned 15 points":
           (book==3) ?"You earned 30 points":"You earned 60 points")<<endl;    
    //Exit
    return 0;
}    

