/*This program is to do the following in the LL
* 1)check for the loop,
* 2)find the starting point of loop 
* 3)Remove loop in the linked list
*/
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

/*Function to print the loop*/
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

/*Function to check whether the loop is present*/
bool checkforloop(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return false;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }

        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}

/*Function to find out the starting point of the loop*/
Node* startingloop(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return 0;
    }
    
    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }

        if(slow==fast)
        {
            slow=head;
            break;
        }
    }

       while(slow!=fast)
       {
        slow=slow->next;
        fast=fast->next;

       }
    
    return slow;
}

/*Function to remove the loop*/
Node* removeloop(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
    }

    Node* slow=head;
    Node* fast=head;
    Node* prev=head;

    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }

        if(fast==slow)
        {
            slow=head;
            break;
        }

    }

    while(slow!=fast)
    {
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }

    prev->next=NULL;
    return slow;
}

int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    Node* seventh=new Node(70);
    Node* eight=new Node(80);
    Node* ninth=new Node(90);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;
    eight->next=ninth;
    ninth->next= eight;

    Node* head=first;

    cout<<"Loop is present or not:"<<checkforloop(head)<<endl;

    cout<<"Starting point of the loop is:"<<startingloop(head)->data<<endl;

    cout<<"Remove loop:"<<removeloop(head)->data<<endl;

    cout<<"Loop is present or not:"<<checkforloop(head)<<endl;

    print(head);

    cout<<endl;

    return 0;
}