/*Program to calculate the sum and avg using Arrays*/

#include <iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum = 0, avg = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    avg = sum / 5;
    cout << "Average:" << avg << endl;
}
