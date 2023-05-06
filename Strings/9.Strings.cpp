/*This program we try few builtin functions on strings*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;

    cout << "length:" << str.length() << endl;
    cout << "isEmpty:" << str.empty() << endl;
    str.push_back('A');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    cout << str.substr(0, 6) << endl;
    return 0;
}