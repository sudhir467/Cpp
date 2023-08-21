/*This Program is to Merge two sorted LL*/

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

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//Function to merge two LL
Node* merge2LL(Node* &head1, Node* &head2)
{
    Node* left=head1;
    Node* right=head2;

    // Create a node which will hold the answer LL
    Node* anshead=new Node(-1);
    Node* mptr=anshead;

    while(left!=NULL && right!=NULL)
    {
        if(left->data <=right->data)
        {
            mptr->next=left;
            mptr=left;
            left=left->next;
        }
          
        else
        {
            mptr->next=right;
            mptr=right;
            right=right->next;
        }
    }

    // Case where we still have left

    if (left!=NULL)
    {
       mptr->next=left;
       mptr=left;
       left=left->next;
    }

    //Case where we still have right
    if(right!=NULL)
    {
        mptr->next=right;
        mptr=right;
        right=right->next;
    }

    return anshead->next;
    
}

int main()
{
    //First LL
    Node* head1=new Node(1);
    Node* second=new Node(3);
    head1->next=second;

    //Second LL
    Node* head2=new Node(2);
    Node* fourth=new Node(4);
    Node* fifth=new Node(5);
    head2->next=fourth;
    fourth->next=fifth;

    Node* ans=merge2LL(head1,head2);
    print(ans);
    cout<<endl;
}