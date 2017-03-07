/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on February 26, 2017, 11:54 PM
 * Purpose: Convert U.S. dollars to various currencies
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Formatting
using namespace std;

//User Libraries 

//Global Constants
float CNVEu=.89660,     //Amount of Euros per US dollar (from Google)
      CNVYe=101.37,     //Amount of Yen per US dollar (from Google)
      CNVBP=.76995;    //Amount of British Pounds per US dollar (from Google)
        
//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables with Initialization
    short Dollars;  //US Dollars
    float Euros,    //Euros
          Yen,      //Japanese Yen
          Pounds;   //British Pound
            
    //Input values
    cout<<"How many US dollars do you have (Cents will not be counted)"<<endl;
    cin>>Dollars;
    
    //Process/Calculations Here
    Euros=Dollars*CNVEu;    //Convert to Euros
    Yen=Dollars*CNVYe;      //Convert to Yen
    Pounds=Dollars*CNVBP;   //Convert to Pounds        
            
    //Output Located Here
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"Amount of U.S. Dollars = $"<<Dollars<<endl;
    cout<<"Amount of Euros = €"<<Euros<<endl;
    cout<<"Amount of Yen = ¥"<<Yen<<endl;
    cout<<"Amount of British Pounds = £"<<Pounds<<endl;

    //Exit
    return 0;
}

