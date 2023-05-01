/*This program is to check whether the string is valid or not*/

#include <bits/stdc++.h>
using namespace std;
 
bool isValid(string str, int n)
{
 
    // If first character is invalid
    if (!((str[0] >= 'a' && str[0] <= 'z')
          || (str[0] >= 'A' && str[0] <= 'Z')
          || str[0] == '_'))
        return false;
 
    // Traverse the string for the rest of the characters
    for (int i = 1; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')
              || (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')
              || str[i] == '_'))
            return false;
    }
 
    // String is a valid identifier
    return true;
}
 
int main()
{
    string str = "_sseks123";
    int n = str.length();
 
    if (isValid(str, n))
        cout << "Valid";
    else
        cout << "Invalid";
 
    return 0;
}
