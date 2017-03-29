//Mark E. Lehr
//October 27th, 2011
//Menu to be used for the midterm
//homework and midterm, etc....

//System Libraries
#include <iostream>     //I/O Objects
#include <string>      //Strings

using namespace std;

//User Libraries
#include "MovieData.h"

//Global Constants


//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
MovieData getInfo();
void prntData(MovieData *);


int main(int argv,char *argc[])
{
    int inN;
    do{
     Menu();
     inN=getN();
     switch(inN){
      case 1:    problem1();break;
      case 2:    problem2();break;
      case 3:    problem3();break;
      case 4:    problem4();break;
      case 5:    problem5();break;
      case 6:    problem6();break;
      case 7:    problem7();break;
      case 8:    problem8();break;
      default:   def(inN);}
    }while(inN<9);
    return 1;
}
void Menu()
{
       cout<<"Type 1 for problem 11.1 - Movie Data"<<endl;
       cout<<"Type 2 for problem 2"<<endl;
       cout<<"Type 3 for problem 3"<<endl;
       cout<<"Type 4 for problem 4"<<endl;
       cout<<"Type 5 for problem 5"<<endl;
       cout<<"Type 6 for problem 6"<<endl;
       cout<<"Type 7 for problem 7"<<endl;
       cout<<"Type 8 for problem 8"<<endl;
       cout<<"Type 9 to exit \n"<<endl;
}
int getN()
{
       int inN;
       cin>>inN;
       cin.ignore();
       return inN;
}
void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
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
}
void problem2(){
    cout<<"In problem # 2"<<endl<<endl;
      
}
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
    
}
void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
      
}
void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
}
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
}
void problem7(){
    cout<<"In problem # 7"<<endl<<endl;
    
}
void problem8(){
    cout<<"In problem # 8"<<endl<<endl;
}
void def(int inN){
       cout<<"You typed "<<inN<<" to exit the program"<<endl;
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