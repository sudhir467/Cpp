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

Node* insertnode(Node* &head,Node* &tail, int position, int data)
{
    Node* temp=NULL;
    Node* prev=NULL;
    Node*forward=NULL;
    Node* curr=NULL;

    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
        return 0;
    }

    /*Inserting at the head of Circular LL*/
    if(position<=1)
    {
        cout<<"Insert at the head"<<endl;
        Node* newnode=new Node(data);
        temp=newnode;
        temp->next=head;
        tail->next=temp;
        head=temp;
        return 0;
    }

    int len=getlength(head);

    /*Inserting at the tail of Circular LL*/
    if(position>=len)
    {
        cout<<"Insert at the tail"<<endl;
        Node *newnode=new Node(data);
        temp=newnode;
        temp->next=head;
        tail->next=temp;
        return 0;
    }

    /*Inserting at the position of Circular LL*/
    if(position>1 && position<len)
    {
        cout<<"Insert at the position"<<endl;
        prev=head;
        forward=head;
        curr=head;
        int i=1;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        forward=prev->next;

        Node* newnode=new Node(data);
        curr=newnode;
        curr->next=forward;
        prev->next=curr;
    }
    return 0;  
}

Node* deletenode(Node* &head, Node* &tail, int position)
{
    Node* temp=NULL;
    Node* prev=NULL;
    Node* curr=NULL;
    Node* forward=NULL;
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
    }

    /*Delete from the head*/
    if(position<=1)
    {
        cout<<"Delete from head"<<endl;
        temp=head;
        head=head->next;
        temp->next=NULL;
        tail->next=head;
        delete(temp);
        return 0;
    }

    int len=getlength(head);

    /*Delete from the tail*/
    if(position>=len)
    {
        cout<<"Delete from the tail"<<endl;
        prev=head;
        int i=1;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        curr=prev->next;
        prev->next=head;
        curr->next=NULL;
        delete(curr);
        return 0;
    }

    /*Delete from the position*/
    if(position>1 && position<len)
    {
        cout<<"Delete from position"<<endl;
        int i=1;
        prev=head;
        curr=head;
        forward=head;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        curr=prev->next;
        forward=curr->next;

        prev->next=forward;
        curr->next=NULL;
        delete(curr);
    }

    return 0;
}

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
    Node* tail=sixth;

    print(head);
    cout << endl;

    cout<<"length is:"<<getlength(head)<<endl;

    insertnode(head,tail,1,500);
    print(head);
    cout << endl;

    cout<<"length is:"<<getlength(head)<<endl;

    deletenode(head,tail,7);
    print(head);
    cout << endl;
    
}