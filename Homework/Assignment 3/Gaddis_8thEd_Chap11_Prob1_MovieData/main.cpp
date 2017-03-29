/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 28, 2017, 11:40 AM
 * Purpose: Store information about a movie using a structure
 */

//System Libraries
#include <iostream>     //Input/Output Objects
#include <string>       //Strings
using namespace std;

//User Libraries
#include "MovieData.h"

//Global Constants

//Function Prototypes
MovieData getInfo();
void prntData(MovieData *);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    MovieData movie1,movie2;
    MovieData *pntr1,*pntr2;
    pntr1=&movie1;
    pntr2=&movie2;
    
    //Get Movie Info
    movie1=getInfo();
    movie2=getInfo();
    
    //Print the info for both movies
    prntData(pntr1);
    cout<<endl;
    prntData(pntr2);
    
    //Exit
    return 0;
}
MovieData getInfo(){
    //Declare Variables
    MovieData info;
    
    //Title
    cout<<"Enter the Movie Title: ";
    getline(cin,info.Title);
    
    //Director
    cout<<"Enter the director's name: ";
    getline(cin,info.Director);
    
    //Year Released
    cout<<"Enter the release year: ";
    cin>>info.YearRel;
    
    //Runtime
    cout<<"What is the runtime of the movie in minutes? ";
    cin>>info.RunTime;
    
    cout<<"\n";
    cin.ignore();
    
    return info;
}
void prntData(MovieData *a){
    cout<<"--------------------------"<<endl;
    cout<<"Title: "<<a->Title<<endl; 
    cout<<"Director: "<<a->Director<<endl;
    cout<<"Year Released: "<<a->YearRel<<endl;
    cout<<"Runtime: "<<a->RunTime<<" mins."<<endl;
    cout << "\n"; 
}