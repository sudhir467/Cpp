/*This program is to find the middle of the linkedlist*/

#include<iostream>
using namespace std;

class Node{
  
  public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next= NULL;
    }

    Node(int data){
        this->data= data;
        this->next=NULL;

    }  
};

//Function to find the middle of lL
Node* middleofLL(Node* &head)
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
    Node* fast= head;
    while(slow!=NULL && fast!=NULL)
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

//Function to print the LL
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* first= new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(40);
    Node* fourth=new Node(50);
    Node* fifth=new Node(60);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    Node* head=first;
    print(head);  

   
    cout<<"Middle Node is:"<<middleofLL(head)->data <<endl;

    return 0;

}