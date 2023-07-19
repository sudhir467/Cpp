/*This program is to create,delete,print and traverse Double linkedlist*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getlength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertathead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        // LL is empty
        Node *newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        // LL is non empty
        // step 1:create a node
        Node *newnode = new Node(data);
        // step 2:
        newnode->next = head;
        // step 3:
        head->prev = newnode;
        // Update head
        head = newnode;
    }
}

void insertattail(Node* &head, Node* &tail,int data)
{
    if(tail==NULL)
    {
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else
    {
        //Step1: Create a new node
        Node* newnode= new Node(data);
        //step 2:
        tail->next=newnode;
        //step3:
        newnode->prev=tail;
        //step4: Update tail
        tail=newnode;
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //LL is not empty
                if(position == 1) {
                        insertathead(head,tail, data);
                        return;
                }
                int len = getlength(head);
                if(position > len) {
                        insertattail(head, tail, data);
                        return;
                }
                // insertion in middle
                //step1: find prev && curr
                int i = 1;
                Node* prevNode = head;
                while( i < position - 1) {
                        prevNode = prevNode ->next;
                        i++;
                }
                Node* curr = prevNode -> next;

                //step2: create a node
                Node* newNode  = new Node(data);

                //step3:
                newNode -> prev = prevNode;
                prevNode -> next = newNode;
                newNode ->next = curr;
                curr -> prev = newNode;
                
        }
}

void deletefromposition(Node* &head, Node* &tail,int position)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty";
        return;
    }
    if(head->next==NULL)
    {
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }

    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }

    int len=getlength(head);
    if(position == len)
    {
        Node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }

    //delete from middle of linkedlist
    int i=1;
    Node* left=head;
    while(i<position-1)
    {
        left=left->next;
        i++;

    }
    Node* curr= left->next;
    Node* right=curr->next;

    left->next=right;
    right->prev=left;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;

}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    cout << "Printing double linkedlist";
    print(first);
    cout << endl;

    insertathead(head, tail, 101);
    print(head);
    cout << endl;

    insertattail(head, tail, 501);
    print(head);
    cout << endl;

    insertAtPosition(head, tail, 401,2);
    print(head);
    cout << endl;

    deletefromposition(head,tail,2);
    print(head);
    cout<<endl;
   

    return 0;
}