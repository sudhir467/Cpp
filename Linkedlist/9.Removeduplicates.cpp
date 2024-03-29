/*This program is to remove the duplicates from the sorted LL*/
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

/*Function to print LL*/
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

/*Function to remove duplicates*/
Node* RemoveDuplicates(Node* &head)
{
    /*For case where only no node*/
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
    }

    /*For case where only one node*/

    if(head->next==NULL)
    {
        cout<<"Only one node present"<<endl;
        return 0;
    }

    Node* curr=head;

    /*Logic when there are more than one nodes*/
    while(curr != NULL)
    {
        if((curr -> next != NULL) && (curr -> data == curr -> next -> data) ) 
        {
            //equal
            Node* temp = curr -> next;
            curr -> next = curr -> next -> next;
            //delete node
            temp -> next = NULL;
            delete temp;
        }
        else 
        {
            // not equal
            curr = curr -> next;
        }
    
}

int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(20);
    Node* fourth=new Node(30);
    Node* fifth=new Node(40);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    Node* head=first;

    return 0;

}