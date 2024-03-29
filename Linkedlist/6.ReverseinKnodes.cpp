/*This program is to reverse the Linked list in K nodes*/
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node()
    {
        this->data=0;
        this->next=NULL;
    }

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int getlength(Node* head)
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

Node* reverseknodes(Node* &head, int k)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return NULL;
    }

    int len=getlength(head);

    if(k>len)
    {
        return head;
    }

    Node* prev=NULL;
    Node* curr=head;
    Node* forward=head->next;
    int count=0;

    while(count<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    
    if(forward!=NULL)
    {
        Node* reverseans=reverseknodes(forward,k);
        head->next=reverseans;
    }

    return prev;
}

int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    Node* head=first;


    print(head);
    cout<<endl;
    head = reverseknodes(head, 3);
    print(head);
    cout<<endl;

}