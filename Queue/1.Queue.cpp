/*This program is to create a queue in cpp using STL*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(13);
    cout << "size of queue is :" << q.size() << endl;

    q.pop();
    cout<<"size of the queue:"<<q.size()<<endl;

    if(q.empty())
    {
        cout<<" queue is empty"<<endl;
    }
    else
    {
        cout<<"queue is not empty"<<endl;
    }

    cout<<"Front of the queue is:"<<q.front()<<endl;
}
