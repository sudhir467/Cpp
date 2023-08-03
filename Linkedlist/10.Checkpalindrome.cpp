/*Program to check whether the linked list is palindrome or not*/

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

Node* middleofLL(Node* &head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && slow!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

Node* reverseLL(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL)
    {
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;    
    }
    return prev;
}

bool checkpalindrome(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty";
        return false;
    }

    if(head->next==NULL)
    {
        return true;
    }


    Node* middle=middleofLL(head);
    Node* reversehead=reverseLL(middle->next);
    middle->next=reversehead;

    Node* temp1=head;
    Node* temp2=reversehead;

    while(temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
        {
           return false;
        }
        if(temp1->data==temp2->data)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }

    }
    return true;
}

int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(30);
    Node* fifth=new Node(20);
    Node* sixth=new Node(10);

    Node* head=first;

    first->next=second;
    second->next=third;
    third->next= fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    print(head);
    cout<<endl;

    head=reverseLL(head);

    print(head);
    cout<<endl;

    bool check=checkpalindrome(head);
    if(check== true)
    {
        cout<<"LL is palindrome"<<endl;
    }
    else if(check==false)
    {
        cout<<"LL is not palindrome"<<endl;
    }



return 0 ;

    
}