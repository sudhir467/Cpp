/* This program is to find the diameter, area, circumference of the circle*/

#include<iostream>
using namespace std;
// Function Declarations of Diameter,Area and circumference
float funcDiameter(float );
float funcArea(float);
float funcCircum(float);

int main()
{
    float r,Circumference,Area,Diameter;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;

    // Function calling 
    Diameter=funcDiameter(r);
    Circumference=funcCircum(r);
    Area=funcArea(r);

    // Print the values of Area,Diameter and circumference
    cout<<"Diameter of the circle:"<<Diameter<<endl;
    cout<<"Circumference of the circle:"<<Circumference<<endl;
    cout<<"Area of the circle:"<< Area <<endl;
}

// function definition of the function diameter
float funcDiameter(float a)
{
    float Dia=0;
    Dia=2*a;
    return Dia; // return the value of the diameter
}

// Function definition of function Area

float funcArea(float x)
{
    float Ar;
    float pi=3.14;
    Ar=pi*x*x;
    return Ar; // return the value of Area
}

// Function definition of function circumference

float funcCircum(float z)
{
    float cir=0, pi=3.14;
    cir=2*pi*z;
    return cir; // return the value of circumference
}