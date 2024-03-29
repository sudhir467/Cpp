/*This program is create,delete,traverse,print the Double LL with just head pointer*/

#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

/*Function to print the DLL*/
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

/*Function to get the length of the LL*/
int getlength(Node* head)
{
    int len=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}

/*Function to insert a node at position of LL*/
Node* insertnode(Node* &head,int data,int position)
{
    Node* temp=NULL;
    Node* prev=NULL;
    Node* forward=NULL;
    Node* curr=NULL;
    
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        Node* newnode=new Node(data);
        head=newnode;
        return 0;
    }
    
    /*Insert at head*/
    if(position<=1)
    {
        cout<<"Insertion at head"<<endl;
        Node* newnode=new Node(data);
        temp=newnode;
        head->prev=temp;
        temp->next=head;
        head=temp;   
        return 0;   
    }

    int len = getlength(head);

    /*Insert a tail*/
    if(position>len)
    {
        cout<<"Insert at tail"<<endl;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }

        Node* newnode=new Node(data);
        curr=newnode;
        temp->next=curr;
        curr->prev=temp;
        return 0;
    }

    /*Insert at position specified*/
    if(position>1 && position<=len)
    {
        cout<<"Insert at position"<<endl;
        int i=1;
        prev=head;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        forward=prev->next;
        Node* newnode=new Node(data);
        curr=newnode;
        curr->next=forward;
        forward->prev=curr;
        curr->prev=prev;
        prev->next=curr;
        return 0;
    }

    return 0;
}

/*Function to delete the node at particular position*/
Node* deletenode(Node* &head, int position)
{
    Node* temp1=NULL;
    Node* prev1=NULL;
    Node* forward1=NULL;
    Node* curr1=NULL;

    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
    }

    /*Delete the node at head pointer*/
    if(position<=1)
    {
        cout<<"Delete from head"<<endl;
        temp1=head;
        head=temp1->next;
        temp1->next=NULL;
        delete(temp1);
        return 0;
    }

    int len=getlength(head);

    /*Delete node at tail of LL*/
    if(position>=len)
    {
        cout<<"Delete from tail"<<endl;
        int i=1;
        prev1=head;
        while(i<position-1)
        {
            prev1=prev1->next;
            i++;
        }
        temp1=prev1->next;
        temp1->prev=NULL;
        prev1->next=NULL;
        delete(temp1);

        return 0;
    }

    /*Delete node from a position */
    if(position>1 && position<len)
    {
        cout<<"Delete from position"<<endl;
        prev1=head;
        forward1=head;
        curr1=head;
        int i=1;
        while(i<position-1)
        {
            prev1=prev1->next;
            i++;
        }
        curr1=prev1->next;
        forward1=curr1->next;
   
        forward1->prev=prev1;
        prev1->next=forward1;
        curr1->next=NULL;
        delete(curr1);

    }
     return 0;

}

/*Function to reverse DLL*/
Node* reverseDLL(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
    }

    Node* back=NULL;
    Node* forward=head;
    Node* curr=head;

    while(curr!=NULL)
    {
        forward=forward->next;
        curr->next=back;
        curr->prev=forward;
        back=curr;
        curr=forward;
        head=back;
    }

    return back;
}

int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    first->next=second;
    second->next=third;
    second->prev=first;
    third->next=fourth;
    third->prev=second;
    fourth->prev=third;

    Node* head=first;

    print(head);
    cout<<endl;

    cout<<"Length of DLL:"<<getlength(head)<<endl;

    insertnode(head,100,5);
    print(head);
    cout<<endl;

    deletenode(head,1);
    print(head);
    cout<<endl;

    cout<<"After reversing the LL:"<<endl;
    reverseDLL(head);
    print(head);
    cout<<endl;

    return 0;

}