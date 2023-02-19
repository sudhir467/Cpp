/* Remove the last bit set of a number*/

#include <iostream>
using namespace std;

int removelastbit(int n)
{
    return n & (n - 1);
}

int main()
{
    cout << "After removing the last set bit value is :" << removelastbit(8) << endl;
}