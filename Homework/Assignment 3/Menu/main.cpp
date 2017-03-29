//Mark E. Lehr
//October 27th, 2011
//Menu to be used for the midterm
//homework and midterm, etc....

//System Libraries
#include <iostream>     //I/O Objects
#include <string>      //Strings
#include <iomanip>      //Formatting

using namespace std;

//User Libraries
#include "MovieData.h"
#include "Sales.h"

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
       cout<<"Type 2 for problem 11.3 - Corporate Sales"<<endl;
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
    //Declare Variables
    Sales east,west,north,south;  //Company divisions
    
    //Get sales data for each division/branch
    //East division
    cout<<"East Division"<<endl;
    cout<<"\nEnter the first quarter sales in $: ";
    cin>>east.FirstQ;
    cout<<"Enter the second quarter sales: ";
    cin>>east.SecndQ;
    cout<<"Enter the third quarter sales: ";
    cin>>east.ThirdQ;
    cout<<"Enter the fourth quarter sales: ";
    cin>>east.FourthQ;
    
    //West division
    cout<<"\nWest Division"<<endl;
    cout<<"\nEnter the first quarter sales in $: ";
    cin>>west.FirstQ;
    cout<<"Enter the second quarter sales: ";
    cin>>west.SecndQ;
    cout<<"Enter the third quarter sales: ";
    cin>>west.ThirdQ;
    cout<<"Enter the fourth quarter sales: ";
    cin>>west.FourthQ;
    
    //North division
    cout<<"\nNorth Division"<<endl;
    cout<<"\nEnter the first quarter sales in $: ";
    cin>>north.FirstQ;
    cout<<"Enter the second quarter sales: ";
    cin>>north.SecndQ;
    cout<<"Enter the third quarter sales: ";
    cin>>north.ThirdQ;
    cout<<"Enter the fourth quarter sales: ";
    cin>>north.FourthQ;
    
    //South division
    cout<<"\nSouth Division"<<endl;
    cout<<"\nEnter the first quarter sales in $: ";
    cin>>south.FirstQ;
    cout<<"Enter the second quarter sales: ";
    cin>>south.SecndQ;
    cout<<"Enter the third quarter sales: ";
    cin>>south.ThirdQ;
    cout<<"Enter the fourth quarter sales: ";
    cin>>south.FourthQ;
    
    //Total Sales
    east.Totsales=east.FirstQ+east.SecndQ+east.ThirdQ+east.FourthQ;
    west.Totsales=west.FirstQ+west.SecndQ+west.ThirdQ+west.FourthQ;
    north.Totsales=north.FirstQ+north.SecndQ+north.ThirdQ+north.FourthQ;
    south.Totsales=south.FirstQ+south.SecndQ+south.ThirdQ+south.FourthQ;
    
    //Average Sales
    east.Avgsales=(east.Totsales)/4;
    west.Avgsales=(west.Totsales)/4;
    north.Avgsales=(north.Totsales)/4;
    south.Avgsales=(south.Totsales)/4;
    
    //Display Total and Average Sales
    cout<<"\n";
    cout<<fixed<<showpoint;
    cout<<setprecision(2);
    cout<<"Total annual and Average quarter sales for each division"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<setw(20)<<"Total Sales"<<setw(30)<<"Average Sales"<<endl;
    cout<<"East: "<<setw(5)<<"$"<<east.Totsales<<setw(24)<<"$"<<east.Avgsales<<endl;
    cout<<"West: "<<setw(5)<<"$"<<west.Totsales<<setw(24)<<"$"<<west.Avgsales<<endl;
    cout<<"North: "<<setw(5)<<"$"<<north.Totsales<<setw(24)<<"$"<<north.Avgsales<<endl;
    cout<<"South: "<<setw(5)<<"$"<<south.Totsales<<setw(24)<<"$"<<south.Avgsales<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    //Exit
      
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