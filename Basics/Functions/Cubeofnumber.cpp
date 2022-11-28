/* This program is to find the cube of number using functions*/

#include<iostream>
using namespace std;

// Function declaration
int funcube(int);

// Main function to call fun cube
int main()
{
    int num,c=0;
    cout<<"Enter the number for which thw cube needs to be found:"<<endl;
    cin>>num;
    c=funcube(num); //function calling 
    // Printing the cube of the number
    cout<<"The cube of the number is :"<<c<<endl;
}

// Function declaration of cube 
int funcube(int a)
{
    int cube=0;
    cube=a*a*a; // calculate the cube of the number
    return cube;
}

/*This implementation is using no arguments and no return type
void funcube();

int main()
{
    funcube();
}

void funcube()
{
    int num,cube=0;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cube=num*num*num;
    cout<<"The cube of the given number is:"<<cube<<endl;
}
*/

/* Function without argument with return type

int funcube();

int main()
{
    int c;
    c=funcube();
    cout<<"The cube of number is:"<<c<<endl;

}

int funcube()
{
    int num,cube=0;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cube= num*num*num;
    return cube;
}
*/

/*Function with no return type with arguments
void funcube(int);

int main()
{
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    funcube(num);
}

void funcube(int a)
{
    int cube=0;
    cube=a*a*a;
    cout<<"cube of the number is:"<<cube<<endl;
}
*/