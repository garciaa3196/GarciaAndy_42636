//Mark E. Lehr
//October 27th, 2011
//Menu to be used for the midterm
//homework and midterm, etc....

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>      //Random

using namespace std;

//User Libraries

//Global Constants
short CNVK=273;          //Conversion for celsius to kelvin
float CNVEu=.89660,     //Amount of Euros per US dollar (from Google)
      CNVYe=101.37,     //Amount of Yen per US dollar (from Google)
      CNVBP=.76995;    //Amount of British Pounds per US dollar (from Google)
float PI=3.14159;     //Value of PI from the book
const float CNVPerc=100;  //Conversion for Percent
const int NUMDAYS=30;
const int NMONTHS=3;

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
float tempCnv(float); //Temperature Conversion
void fillAry(char [][NUMDAYS],int);
void prntAry(char [][NUMDAYS],int);
void prntAry(int [][NMONTHS]);
void calcAry(char [][NUMDAYS],int [][NMONTHS]);
void rainy(int [][NMONTHS]);
int getPay(int [],float [],int [],float [],int &);  //Determines pay for employees
void data(int [],int [],float [],float [],int &);   //Display Data
void SelSrt(string[],int);   //Sort the array before the binary search
int binSrch(string[],int,string);


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
      case 9:    problem9();break;
      case 10:    problem10();break;
      default:   def(inN);}
    }while(inN<11);
    return 1;
}
void Menu()
{
       cout<<"Type 1 for problem 3.12 - Temperature"<<endl;
       cout<<"Type 2 for problem 3.13 - Currency Conversion"<<endl;
       cout<<"Type 3 for problem 4.10 - Days in a Month"<<endl;
       cout<<"Type 4 for problem 4.13 - Book Club Points"<<endl;
       cout<<"Type 5 for problem 4.23 - Geometry Calculator"<<endl;
       cout<<"Type 6 for problem 5.11 - Population Growth"<<endl;
       cout<<"Type 7 for problem 6.7 - Temperature (Function)"<<endl;
       cout<<"Type 8 for problem 7.6 - Rainy Days"<<endl;
       cout<<"Type 9 for problem 7.9 - Payroll"<<endl;
       cout<<"Type 10 for problem 8.7 - Binary Search"<<endl;
       cout<<"Type 11 to exit \n"<<endl;
}
int getN()
{
       int inN;
       cin>>inN;
       return inN;
}
void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
    //Declare all Variables with Initialization
    float TempC,      //Temperature in Celsius
          TempF,      //Temperature in Fahrenheit
          TempK;      //Temperature in Kelvin

    //Input values Here
    cout<<"What is the temperature in celsius?"<<endl;
    cin>>TempC;

    //Input Validation
    while(TempC<-273){     //Lowest possible temperature is -273 degrees celsius
        cout<<"Invalid Value - Please enter a valid value"<<endl;
        cout<<"What is the temperature in celsius?"<<endl;
        cin>>TempC;     
    }
    //Process/Calculations Here
    TempF=(9*TempC/5)+32;     //Equation to convert celsius to fahrenheit
    TempK=TempC+CNVK;         //Equation to convert celsius to kelvin

    //Output Located Here
    cout<<fixed<<showpoint<<setprecision(1)<<endl;
    cout<<"Temperature in Celsius    = "<<TempC<<endl; //Displays input
    cout<<"Temperature in Fahrenheit = "<<TempF<<endl; //Display fahrenheit
    cout<<"Temperature in Kelvin     = "<<TempK<<endl; //Display Kelvin

    //Exit
}
void problem2(){
    cout<<"In problem # 2"<<endl<<endl;
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
}
void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
    //Declare Variables
    unsigned short Month;     //Number of Months from 1-12
    unsigned int Year;

    //Input/Initialize values
    cout<<"Enter the Month (1-12): ";
    cin>>Month;
    cout<<"Enter the Year: ";
    cin>>Year;
    cout<<endl;
    //Input Validation
    if(Month<1||Month>12){
        cout<<"Error - Please enter a valid number for the month (1-12)"<<endl;
        cout<<"Enter the Month (1-12): ";
        cin>>Month;   
    }
    if(Year<0){
        cout<<"Error - The year may not be negative"<<endl;
        cout<<"Enter the Year: ";
        cin>>Year;
    }

    //Display Output
    switch(Month){
        case 1: cout<<"Month: January"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 2: cout<<"Month: February"<<endl;
                cout<<"Year: "<<Year<<endl;
                //Year must be divisible by 400 or if not divisible by 100 then by 4
                if((Year%4==0 && Year%100!=0)||(Year%400==0)){
                    cout<<"Number of Days: 29"<<endl;
                }
                else{
                    cout<<"Number of Days: 28"<<endl;
                };break;
        case 3: cout<<"Month: March"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 4: cout<<"Month: April"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 5: cout<<"Month: May"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 6: cout<<"Month: June"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 7: cout<<"Month: July"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 8: cout<<"Month: August"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 9: cout<<"Month: September"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 10: cout<<"Month: October"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;
        case 11: cout<<"Month: November"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 30"<<endl;break;
        case 12: cout<<"Month: December"<<endl;
                cout<<"Year: "<<Year<<endl;
                cout<<"Number of Days: 31"<<endl;break;        
    }

//Exit
}
void problem4()
{
    cout<<"In problem # 4"<<endl<<endl;
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
}
void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
    //Declare all Variables Here
    unsigned short radius,  //Radius of Circle in inches
                   length,  //Length of Rectangle in inches
                   width,   //Width of Rectangle in inches
                   base,    //Base of a Triangle in inches
                   height,  //Height of Triangle in inches
                   input;   //Choose between the type of shape to calculate area
    float          areaC,   //Area of Circle in inches
                   areaR,   //Area of Rectangle in inches
                   areaT;   //Area of Rectangle in inches

    //Input or initialize values Here
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cout<<"Enter your desired choice (1-4):"<<endl;
    cin>>input;

    //Input Validation
    if(input>4){
        cout<<"Error: Enter a valid input"<<endl;
    }
    if(radius<0){
        cout<<"Error: Please enter a positive value"<<endl;
    }
    if(length<0){
        cout<<"Error: Please enter a positive value"<<endl;
    }
    if(width<0){
        cout<<"Error: Please enter a positive value"<<endl;
    }
    if(base<0){
        cout<<"Error: Please enter a positive value"<<endl;
    }
    if(height<0){
        cout<<"Error: Please enter a positive value"<<endl;
    }

    //Process Values - Map Inputs to Outputs
    switch(input){
        case 1:cout<<"Input the radius of the circle in inches"<<endl;
               cin>>radius;
               areaC=PI*radius*radius;      //Area of a Circle in inches
               cout<<"Radius of the circle = "<<radius<<" inches"<<endl;
               cout<<"Area of the circle   = "<<areaC<<" sq. inches"<<endl;break;
        case 2:cout<<"Input the length and width of the rectangle in inches"
                <<endl;
               cin>>length>>width;
               areaR=length*width;          //Area of a Rectangle in inches
               cout<<"Length of rectangle = "<<length<<" inches"<<endl;
               cout<<"Width of rectangle = "<<width<<" inches"<<endl;
               cout<<"Area of rectangle = "<<areaR<<" sq. inches"<<endl;break;
        case 3:cout<<"Input the base and height of the triangle in inches"
                <<endl;
               cin>>base>>height;
               areaT=(base*height)/2;        //Area of a Triangle in inches
               cout<<"Base of Triangle = "<<base<<" inches"<<endl;
               cout<<"Height of Triangle = "<<height<<" inches"<<endl;
               cout<<"Area of Triangle = "<<areaT<<" sq. inches"<<endl;break;
        case 4:cout<<"End"<<endl;
    }

    //Exit
}
void problem6(){
    cout<<"In problem # 6"<<endl<<endl;
    //Declare all Variables
    int     PIsize,     //Initial Population size
            PFsize,     //Final Population size
            growth,     //Population Growth
            days,       //Number of days passed
            count;      //Counter
    float   rate;       //Growth as a decimal

    //Input Values
    cout<<"Input the initial size of the population"<<endl;
    cin>>PIsize;
    cout<<"Input the growth as a positive integer"<<endl;
    cin>>growth;
    cout<<"Input the number of days passed"<<endl;
    cin>>days;

    //Input Validation
    if(PIsize<2){
        cout<<"Error - Value must be greater than 2"<<endl;
    }
    if(growth<0){
        cout<<"Error - Value must be positive"<<endl;
    }
    if(days<1){
        cout<<"Error - Value must be greater than 1"<<endl;
    }

    //Table Setup
    cout<<"Day #                    "<<"Size of Population"<<endl;
    cout<<"-------------------------------------------"<<endl;

    //
    for(int count=0;count<=days;count++){
        rate=growth/CNVPerc;
        PFsize=PIsize*exp(rate*count);
        cout<<count<<"                         "<<PFsize<<endl;
    }

    //Exit
}
void problem7(){
    cout<<"In problem # 7"<<endl<<endl;
    //Declare Variables
    int degF;

    //Process Values -> Map Inputs to Outputs
    cout<<"Degrees F  Degrees C"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    for(int degF=0;degF<=20;degF++){
        cout<<setw(6)<<degF<<setw(12)<<tempCnv(degF)<<endl;
    }
    
    //Exit
}
void problem8(){
            cout<<"In problem # 8"<<endl<<endl;
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare Variables
            char weather[NMONTHS][NUMDAYS];
            int stat[NMONTHS][NMONTHS]={};

            //Input values
            fillAry(weather,NMONTHS);

            //Display Output
            prntAry(weather,NMONTHS);

            //Process Values - Map Inputs to Outputs
            calcAry(weather,stat);

            //Display Output
            prntAry(stat);
            rainy(stat);

            //Exit
}
void problem9(){
            cout<<"In problem # 9"<<endl<<endl;
            //Declare Variables
            int SIZE=7;
            int emplyID[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
            int hours[SIZE];
            float payrate[SIZE],wages[SIZE];

            //Input Hours and Pay Rate to determine wages
            getPay(hours,payrate,emplyID,wages,SIZE);

            //Display Output
            data(emplyID,hours,payrate,wages,SIZE);

            //Exit
}
void problem10(){
            cout<<"In problem # 10"<<endl<<endl;
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
}
void def(int inN){
       cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
//Temperature Conversion from Fahrenheit to Celsius
//Input
//f - Fahrenheit
//Output
//c - Celsius
float tempCnv(float f){
    return (f-32.0f)*5/9;
}
void fillAry(char weather[][NUMDAYS],int nMonths){
    //Declare Array of Values
    char type[]={'R','C','S'};
    //Fill the Array
    for(int days=0;days<NUMDAYS;days++){
        for(int months=0;months<nMonths;months++){
            weather[months][days]=type[rand()%3];
        }
    }
}
void prntAry(char weather[][NUMDAYS],int nMonths){
    //Print the data out
    cout<<endl;
    for(int months=0;months<nMonths;months++){
        for(int days=0;days<NUMDAYS;days++){
            cout<<weather[months][days]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void calcAry(char weather[][NUMDAYS],int stat[][NMONTHS]){
    for(int months=0;months<NMONTHS;months++){
        for(int days=0;days<NUMDAYS;days++){
            if(weather[months][days]=='R'){
                stat[months][0]++;
            }else if(weather[months][days]=='C'){
                stat[months][1]++;
            }else{
                stat[months][2]++;
            }
        }
    }
}
void prntAry(int stat[][NMONTHS]){
    //Declare another array
    char month[][7]={"  June","  July","August"};
    //Print the data out
    cout<<endl;
    cout<<"        R   C   S"<<endl;
    for(int months=0;months<NMONTHS;months++){
        cout<<month[months];
        for(int data=0;data<NMONTHS;data++){
            cout<<setw(3)<<stat[months][data]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void rainy(int stat[][NMONTHS]){
    int sum=stat[0][0],low=stat[0][0],high=stat[0][0];
    float avg;
    for(int months=1;months<NMONTHS;months++){
        sum+=stat[months][0];
        if(high<stat[months][0])high=stat[months][0];
        if(low>stat[months][0])low=stat[months][0];
    }
    avg=1.0f*sum/NMONTHS;
    cout<<endl;
    cout<<"Total Rainy Days   = "<<sum<<endl;
    cout<<"Average Rainy Days = "<<avg<<endl;
    cout<<"Highest Rainy Days = "<<high<<endl;
    cout<<"Lowest Rainy Days  = "<<low<<endl;
}
int getPay(int hours[],float payrate[],int emplyID[],float wages[],int &SIZE){
    
    //Fill Hours and pay rate arrays
    for(int i=0;i<SIZE;i++){
        cout<<emplyID[i]<<endl;
        cout<<"How many hours has this employee worked?"<<endl;
        cin>>hours[i];
        cout<<"What is this employee's pay rate in dollars?"<<endl;
        cin>>payrate[i];
        //Determine wages for employee
        wages[i]=hours[i]*payrate[i];
    }
}
void data(int emplyID[],int hours[],float payrate[],float wages[],int &SIZE){
    cout<<"Employee ID     Hours         Pay Rate           Wages"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<emplyID[i]<<setw(14)<<hours[i]<<setw(12)<<"$"<<fixed<<
                setprecision(2)<<payrate[i]<<setw(10)<<"$"<<wages[i]<<endl;
    }
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