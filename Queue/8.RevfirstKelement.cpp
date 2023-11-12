/*Reverse first K elements of queue*/
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void reverseK(queue<int> &q, int k)
{
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    for (int j = 0; j < k; j++)
    {
        int element2 = s.top();
        s.pop();
        q.push(element2);
    }

    for (int z = 0; z < q.size() - k; z++)
    {
        int element3 = q.front();
        q.pop();
        q.push(element3);
    }
}

int main()
{
    queue<int> q;

    q.push(3);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    reverseK(q, 3);

    cout << "Printing queue" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}