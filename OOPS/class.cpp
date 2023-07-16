// Classes and objects

#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int weight;

    void sleep()
    {
        cout << "He is sleeping" << endl;
    }

    void eat()
    {
        cout << "He is eating" << endl;
    }
};

int main()
{
    Human sudhir;
    sudhir.age = 32;
    sudhir.weight = 73;
    sudhir.sleep();
    sudhir.eat();
    cout << sudhir.weight << endl;
    cout << sudhir.age << endl;
}