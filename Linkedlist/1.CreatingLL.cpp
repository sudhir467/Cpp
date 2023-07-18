/*This program is to create a single linked list in c++*/

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

int findlength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertathead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void insertattail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    Node *newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}

void insertatposition(int data, int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    if (position == 0)
    {
        insertathead(head, tail, data);
        return;
    }

    int len = findlength(head);

    if (position >= len)
    {
        insertattail(head, tail, data);
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    Node *newnode = new Node(data);
    newnode->next = curr;
    prev->next = newnode;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    /*
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;
    */

    Node *head = NULL;
    Node *tail = NULL;
    insertathead(head, tail, 20);
    insertathead(head, tail, 50);
    insertathead(head, tail, 60);
    insertathead(head, tail, 90);
    insertattail(head, tail, 77);

    cout << "printing the LL" << endl;
    print(head);

    insertatposition(101, 5, head, tail);
    cout << "Printing after insert at position call" << endl;
    print(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    return 0;
}
