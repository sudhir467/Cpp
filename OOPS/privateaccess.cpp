/* Private access of members*/

#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    void Area(int L, int B)
    {
        length = L;
        breadth = B;
        int area = length * breadth;
        cout << "Area of the Rectangle is:" << area << endl;
    }
};

int main()
{
    Rectangle R;
    R.Area(10, 20);
    return 0;
}