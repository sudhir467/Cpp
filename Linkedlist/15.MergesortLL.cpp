/* Sort a linked List using Merge sort*/


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

Node* findmiddle(Node* &head)
{
    //LL has no nodes
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return head;
    }

    if(head->next==NULL)
    {
        //LL has one node
        return head;
    }

    //LL has > 1 node
    Node* slow= head;
    Node* fast= head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* merge(Node* &head1, Node* &head2)
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


Node* sort(Node* &head)
{
    if(head==0||head->next==0 )
    {
        return head;
    }

    Node* mid=findmiddle(head);
    Node* left=head;
    Node* right=mid->next;
    mid->next=0;

    //sort the LL
    left=sort(left);
    right=sort(right);

    //merge the nodes
    Node* mergeLL=merge(left,right);

    return mergeLL;
}


int main()
{
    Node* first=new Node(40);
    Node* second=new Node(5);
    Node* third=new Node(50);
    Node* fourth=new Node(20);
    Node* fifth=new Node(30);
    Node* sixth=new Node(10);

    Node* head=first;

    first->next=second;
    second->next=third;
    third->next= fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    Node* ans=sort(head);

    print(ans);
    cout<<endl;


}