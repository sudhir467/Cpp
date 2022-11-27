/* program to print the day */

#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout<<"Enter your choice:"<<endl;
    cin >>choice;
    switch(choice)
    {
        case 1: cout<<"Enter Day is Sunday"<< endl;
                break;
        case 2: cout<<"Enter Day is Monday"<< endl;
                break;
        case 3: cout<<"Enter Day is Tuesday"<< endl;
                break;
        case 4: cout<<"Enter Day is Wednesday"<< endl;
                break;
        case 5: cout <<"Enter day is Thursday "<< endl;
                break;
        case 6: cout <<"Enter day is Friday" << endl;
                break;
        case 7: cout<<"Enter day is Saturday"<< endl;
                break;
        default: cout<<"Enter a valid choice of the day"<< endl;
    }

}