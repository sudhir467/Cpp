/*This program is to find the largest element in the array*/

#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 3, 4, 6, 1};
    /*Brute force solution is to first sort the array and return the n-1 element
    which will be the largest*/
    /*Better solution is to traverse through each element and return the largets*/
    int largest = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest << endl;
}