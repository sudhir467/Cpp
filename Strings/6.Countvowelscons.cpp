/*This program is to count the number of vowels and consonant in a given string*/

#include <iostream>
using namespace std;

int main()
{
    char ch[20] = "how are you";
    int vcount = 0;
    int ccount = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        {
            vcount++;
        }
        else if (ch[i] >= 65 && ch[i] <= 90 || ch[i] >= 97 && ch[i] <= 122)
        {
            ccount++;
        }
    }

    cout << "The number of vowels are:" << vcount << endl;
    cout << "The number of consonants are:" << ccount << endl;
}