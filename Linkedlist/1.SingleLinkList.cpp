/*This program is to create, traverse, insert,delete nodes of single LL with just head pointer*/

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
/*Function to print the LL*/
void print(Node* head)
{
    if(head==NULL)
    {
        cout<<"LL is empty";
    }

    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

/*Function to get the length of LL*/
int length(Node* head)
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

/*Function to insert node at head pointer*/
Node* insertathead(Node* &head,int data)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        Node* newnode=new Node(data);
        head=newnode;
        return 0;
    }
    Node* newnode=new Node(data);
    Node* temp=newnode;
    temp->next=head;
    head=temp;   
    return 0;
}

/*Function to insert a node at tail pointer*/
Node* insertattail(Node* head,int data)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        Node* newnode=new Node(data);
        head=newnode;
        return 0;
    }

    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    Node* newnode=new Node(data);
    temp->next=newnode;
    return 0;
}

/*Function to insert a node at a particular position*/
Node* insertatposition(Node* &head, int position, int data)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        Node* newnode=new Node(data);
        head=newnode;
        return 0;
    }

    if(position==0)
    {
        insertathead(head,data);
        return 0;
    }

    int len=length(head);
    if(position>len)
    {
        insertattail(head,data);
    }

    int i=1;
    Node* prev=head;
    while(i<position)
    {
        prev=prev->next;
        i++;
    }
    Node* forward=prev->next;

    Node* newnode=new Node(data);
    Node* curr=newnode;
    curr->next=forward;
    prev->next=curr;

    return 0;

}
 /*Function to delete the node from a particular position*/
Node* deletenode(Node* &head,int position)
{
    Node* temp=NULL;
    Node* prev=NULL;
    Node* forward=NULL;
    Node* curr=NULL;

    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return 0;
    }

    if(position<=1)
    {
        cout<<"Delete from head"<<endl;
        temp=head;
        head=temp->next;
        temp->next=NULL;
        delete(temp);
    }

    int len=length(head);
    if(position>=len)
    {
        cout<<"Delete from tail"<<endl;
        int i=1;
        prev=head;
        while(i<position-1)
        {

            prev=prev->next;
            i++;      
        }
        temp=prev->next;
        prev->next=NULL;
        delete(temp);
        return 0;            
    }

    if(position>1 && position<len)
    {
        cout<<"Delete from middle"<<endl;
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
   /* Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);

    first->next=second;
    second->next=third;
    third->next=fourth;*/

    Node* head=NULL;
    insertathead(head,50);
    insertathead(head,700);
    print(head);
    cout<<endl;
    insertattail(head,900);
    insertattail(head,1900);
    print(head);
    cout<<endl;

    cout<<length(head)<<endl;

    insertatposition(head,3,800);
    cout<<length(head)<<endl;
    print(head);
    cout<<endl;

    deletenode(head,5);
    print(head);
    cout<<endl;

    deletenode(head,1);
    print(head);
    cout<<endl;

    deletenode(head,2);
    print(head);
    cout<<endl;
    return 0;

}