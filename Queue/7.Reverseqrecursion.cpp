/*This program is to reverse queue using recursion*/
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseRecursion(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }

    /*Remove the element*/
    int element = q.front();
    q.pop();
    /*Make a recursive call*/
    reverseRecursion(q);
    /*push the element back*/
    q.push(element);
}

int main()
{
    queue<int> q;
    q.push(3);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    reverseRecursion(q);

    cout << "Printing queue" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}