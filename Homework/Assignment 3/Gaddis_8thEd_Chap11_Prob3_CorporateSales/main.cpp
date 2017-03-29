/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on March 29, 2017, 11:07 AM
 * Purpose:  Determine the total and average sales for different divisions using
 *          structures
 */

//System Libraries Here
#include <iostream>     //I/O Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries
#include "Sales.h";

//Global Constants

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
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
    if(east.FirstQ<0||east.SecndQ<0||east.ThirdQ<0||east.FourthQ<0){
        cout<<"Error - Sales can't be negative"<<endl;
    }
    
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
    if(west.FirstQ<0||west.SecndQ<0||west.ThirdQ<0||west.FourthQ<0){
        cout<<"Error - Sales can't be negative"<<endl;
    }
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
    //InputValidation
    if(north.FirstQ<0||north.SecndQ<0||north.ThirdQ<0||north.FourthQ<0){
        cout<<"Error - Sales can't be negative"<<endl;
    }
    
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
    if(south.FirstQ<0||south.SecndQ<0||south.ThirdQ<0||south.FourthQ<0){
        cout<<"Error - Sales can't be negative"<<endl;
    }
    
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
    return 0;
}

