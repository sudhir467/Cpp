/* This program is to print character entered is vowel or consonant*/
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the character to be printed:"<<endl;
    cin>>ch;
    if(ch=='a' || ch=='A'|| ch=='e'|| ch=='E'|| ch=='i'||ch =='I'|| ch=='o' || ch=='O'||ch=='u'||ch=='U')
    {
        cout<<"Entered Charater is a Vowel"<<endl;

    }else
    {
        cout<<"Entered Character is consonant"<<endl;
    }
}