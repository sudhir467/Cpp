/*This program is to reverse the single linked list*/

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

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

//Function to print the values of the LL
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

//Function to get the length of the LL
int getlength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}

//Function to reverse the LL using Recursion
Node* reverseusingrecursion(Node* &prev, Node* &curr)
{
    if(curr==NULL)
    {
        return prev;
    }

    Node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;

    return reverseusingrecursion(prev,curr);

}

//Function to reverse the LL using loop
Node* reverseusingloop(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL)
    {
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

int main()
{
    Node *first = new Node(10); //Assigning the memory to node
    Node *second = new Node(20);//Assigning the memory to node
    Node *third = new Node(30); //Assigning the memory to node
    Node *fourth = new Node(40); //Assigning the memory to node
    Node *fifth = new Node(50); //Assigning the memory to node
    Node* head=first;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(head);
    int get= getlength(head);
    cout<<"Length of the linkedlist is:"<<get<<endl;

    head=reverseusingloop(head);
    print(head);
    cout<<endl;

    //Node* prev=NULL;
    //Node* curr=head;
    //head=reverseusingrecursion(prev,curr);
    //print(head);
    //cout<<endl;

    return 0;
}