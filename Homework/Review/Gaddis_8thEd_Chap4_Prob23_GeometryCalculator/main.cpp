/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on February 28, 2017, 6:36 PM
 * Purpose: Create calculator able to calculate the area of a circle, rectangle,
            and triangle
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants
float PI=3.14159;     //Value of PI from the book

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
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
    return 0;
}

