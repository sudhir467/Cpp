/*This Program is to sort LL in terms of 0,1,2*/
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

/*Function to print LL*/
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

/*Function to sort using data replacement*/
void sort(Node* &head)
{
    Node* temp=head;
    int zerocount=0;
    int onecount=0;
    int twocount=0;

    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            zerocount++;   
        }
        else if(temp->data==1)
        {
            onecount++;
        }
        else if(temp->data==2)
        {
            twocount++;
        }

        temp=temp->next;
    }

    temp=head;

    while(zerocount--)
    {
        temp->data=0;
        temp=temp->next;
    }

    while(onecount--)
    {
        temp->data=1;
        temp=temp->next;
    }

    while(twocount--)
    {
        temp->data=2;
        temp=temp->next;
    }

}

/*Better approach to solve the problem*/
Node* func2sort(Node* &head)
{
    Node* curr=head;

    /*Create dummy nodes first*/
    Node* zerohead=new Node(-101);
    Node* zerotail=zerohead;

    Node* onehead=new Node(-101);
    Node* onetail=onehead;

    Node* twohead=new Node(-101);
    Node* twotail=twohead;

    while(curr!=NULL)
    {
        if(curr->data==0)
        {
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            /*Append Nodes to dummy node*/
            zerotail->next=temp;
            zerotail=temp;

        }
        else if(curr->data==1)
        {
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            /*Append Nodes to dummy node*/
            onetail->next=temp;
            onetail=temp;


        }
        else if(curr->data==2)
        {
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            /*Append Nodes to dummy node*/
            twotail->next=temp;
            twotail=temp;

        }
    }

     //modify one  list
        Node* temp = onehead;
        onehead = onehead -> next;
        temp -> next = NULL;
        delete temp;

        //modify two  list
        temp = twohead;
        twohead = twohead -> next;
        temp -> next = NULL;
        delete temp;

        //join list
        if(onehead != NULL) {
                zerotail -> next = onehead;
                
                if(twohead != NULL)
                        onetail -> next = twohead;
        }
        else{
            
                if(twohead != NULL)
                        zerotail -> next = twohead;
        }

        //remove zerohead dummy Node
        temp = zerohead;
        zerohead = zerohead -> next;
        temp -> next = NULL;
        delete temp;
        
        //return head of the modified linked list
        return zerohead;


}

int main()
{
    Node* first=new Node(1);
    Node* second=new Node(0);
    Node* third=new Node(0);
    Node* fourth=new Node(0);
    Node* fifth=new Node(2);
    Node* sixth=new Node(1);

    Node* head=first;

    first->next=second;
    second->next=third;
    third->next= fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    print(head);
    cout<<endl;

    /*function call for sorting */
    head=func2sort(head);
    print(head);
    cout<<endl;


}