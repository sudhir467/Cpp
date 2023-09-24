/*This program is to implement circular queue*/

#include <bits/stdc++.h>
using namespace std;

class CircularQueue()
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        size = -1;
    }

    void push(int data)
    {
        /*Check whether queue is full*/
        if((front == 0 && rear == size - 1) || (rear==front-1))
        {
            cout << "Q is full, cannot insert" << endl;
        }
        /* Normal insertion */
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        /*Check for the circular nature*/
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
            arr[rear] = data;
        }
        /*Insertion*/
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        /*check empty*/
        if (front == -1)
        {
            cout << "Q is empty, cannot pop" << endl;
        }
        /*Circular element*/
        else if (front == size - 1)
        {
            front = 0;
        }
        /*Single element*/
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        /*Normal flow*/
        else
        {
            front++;
        }
    }
};

int main()
{

}