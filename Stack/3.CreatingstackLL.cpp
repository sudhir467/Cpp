/* This program is to implement the stack operations using LL*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
};

Node *top = NULL;

//function to push element in the stack
void push(int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = top;
    top = newnode;
}

//function to pop element in the stack
void pop()
{
    if (top == NULL)
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        Node *temp = top;
        top = top->next;
        temp->next = NULL;
        delete (temp);
    }
}

//function to stack if stack is empty
bool isempty()
{
    if (top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//peek function of the stack
void peek()
{
    if(top==NULL)
    {
        cout<<"stack empty"<<endl;
    }
    else
    {

        cout<<"Top element is:"<<top->data<<endl;
    }
}

//function to print the stack
void printstack()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data <<" ";
            temp=temp->next;
        }

        cout << endl;
    }
}

int main()
{
    //push integer into stack
    push(10);
    push(20);
    push(30);
    printstack();
    peek();
    pop();
    pop();
    pop();
    push(40);

    //check whether the stack is empty or not
    if(isempty()==true)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    
}