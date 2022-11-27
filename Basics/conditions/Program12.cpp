/*This program is to print temperature conversion to fahrenheit and vice versa*/

#include<iostream>
using namespace std;

int main()
{
    float gtemp, otemp;
    int a;
    cout<< "Enter the temperature to be converted:"<<endl;
    cin>> gtemp;
    cout<< "Enter the choice of conversion:" <<endl;
    cin>> a;

    switch (a)
    {
        case 1:
                cout <<"Converting temperature from Degree to Fahrenheit:"<<endl;
                otemp =((gtemp/5)*9)+32;
                cout<<"Output temperature is:"<< otemp <<"°F"<<endl;
                break;
        
        case 2:
                cout <<"Converting temperature from Fahrenheit to Degree:"<<endl;
                otemp = ((gtemp-32)*5)/9;
                cout<< "Output temperature is :"<<otemp<<"°C"<<endl;
                break;

        default:
                cout<<" Enter valid temperature"<<endl;
      }
}