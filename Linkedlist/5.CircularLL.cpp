/*This program is to create,delete,print and traverse through circular linkedlist*/
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

void print(Node *&head)
{
    Node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << temp->data<<endl;
}

int getlength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
        len++;
    }
    return len+1;
}

/*void insertathead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *newnode = new Node(data);
        Node *temp = newnode;
        temp->next = head;
        head = temp;
    }
}

void insertattail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *newnode = new Node(data);
        Node *temp = newnode;
        tail->next = temp;
        tail = temp;
    }
}

void insertatposition(Node *&head, Node *&tail, int data, int position)
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

    int len = getlength(head);

    if (position > len)
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
    Node *temp = newnode;
    temp->next = curr;
    prev->next = temp;
}

void delfromhead(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }

    Node *temp = head;
    head = temp->next;
    temp->next = NULL;
    delete (temp);
}

// void delfromtail(Node* &head, Node* &tail,)

void delnodeatposition(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "LL is empty";
        return;
    }

    if (position == 0)
    {
    }
}

Node *reversell(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *temp = head->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}*/

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next=sixth;
    sixth->next=first;

    Node *head = first;
    Node *tail=sixth;

    print(head);
    cout << endl;

    cout<<getlength(head)<<endl;
    cout<<tail->data<<endl;

    /*insertathead(head, tail, 560);
    print(head);
    cout << endl;

    insertattail(head, tail, 580);
    print(head);
    cout << endl;

    insertatposition(head, tail, 1117, 0);
    print(head);
    cout << endl;

    delfromhead(head, tail);
    print(head);
    cout << endl;
    // cout<<getlength(head)<<endl;*/
}