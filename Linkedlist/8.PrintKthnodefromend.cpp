/* This program is to print kth node from the end*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

/*Function to print the LL*/
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

/*Function to get the length*/
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

/*Function to print the Kth node from end*/
Node* printkthnode(Node* head,int k)
{
    Node* temp=head;
    int len=getlength(head);
    int position=len-k;
    int i=0;
    while(i<=position)
    {
        if(i==position)
        {
            cout<<temp->data<<endl;
        }
        temp=temp->next;
        i++;  
    }
    return 0;
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

    cout<<getlength(head)<<endl;

    printkthnode(head,6);


    return 0;
}