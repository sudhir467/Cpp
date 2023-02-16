// Public class access modifier

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;

    Rectangle()
    {
        length = 5;
        breadth = 5;
    }

    void display()
    {
        cout << "length"
             << " " << length << endl;
        cout << "breadth"
             << " " << breadth << endl;
    }
};

int main()
{
    Rectangle R;
    cout << R.length << " " << R.breadth << endl;
    R.display();
    return 0;
}