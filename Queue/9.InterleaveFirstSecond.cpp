/* Interleave first and second half of queue*/
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void interleaveQueue(queue<int> &q)
{
    // step 1: Seperate the both halfs
    queue<int> q2;
    int n = q.size();
    int k = n / 2;
    int count = 0;

    if (q.empty())
    {
        return;
    }

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;

        if (count == k)
        {
            break;
        }
    }

    // step2: Interleaving
    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second = q.front();
        q.pop();
        q.push(second);
    }

    if (n & 1)
    {
        int element = q.front();
        q.pop();
        q.push(element);
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

    interleaveQueue(q);

    cout << "Printing queue" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}