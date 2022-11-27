/*This program is to find Grade of given  Average */

#include<iostream>
using namespace std;

int main()
{
    int  Marks;
    cout<< "Enter the Marks of the student:"<<endl;
    cin >> Marks;

    switch(Marks/10)
    {
        case 9: if(Marks>=90)
                cout<<"The student scored:"<<"A Grade"<<endl;
                break;
        case 8: if(Marks >=80 && Marks <90)
                cout <<"The student scored:"<<"B Grade"<<endl;
                break;
        case 7: if(Marks>=70 && Marks<80)
                cout<<"The student scored:"<<"C Grade"<<endl;
                break;
        case 6: if(Marks>=60 && Marks<70)
                cout<<" The student scored:"<<"D Grade"<<endl;
                break;
        case 5: if(Marks>=40 && Marks <60)
                cout<<"The student scored:"<<"E Grade"<<endl;
                break;
                
        default:
                cout <<"The student has failed"<<endl;
    }
}
