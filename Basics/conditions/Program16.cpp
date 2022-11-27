/*This program is to find whether the entered alphabet is vowel or consonant*/

#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cout<<"Enter the alphabet:"<<endl;
    cin>>alpha;
    switch(alpha)
    {
        case 'a': cout<<"The Entered alphabet is vowel:"<<endl;
                break;
        case 'e': cout<<"The Entered alphabet is vowel:"<<endl;
                break;
        case 'i': cout<<"The Entered alphabet is vowel:"<<endl;
                break;
        case 'o': cout<<"The Entered alphabet is vowel:"<<endl;
                break;
        case 'u': cout<<"The Entered alphabet is vowel:"<<endl;
                break;
        case 'A': cout<<"The Entered alphabet is vowel:"<<endl;
                break;
        case 'E': cout<<"The Entered alphabet is vowel:"<<endl;
                break;
        case 'I': cout<<"The Entered alphabet is vowel:"<<endl;
                break; 
        case 'O': cout<<"The Entered alphabet is vowel:"<<endl;
                break; 
        case 'U': cout<<"The Entered alphabet is vowel:"<<endl;
                break; 
        default: cout<<"The Entered alphabet is consonant:"<<endl;
                break;                                 

    } 
}