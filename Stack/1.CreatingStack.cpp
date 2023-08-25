/* This program is to create a stack using 
 1.  Using STL
 2. Bare stack
*/

#include<iostream>
#include<stack>
using namespace std;

/* Creating stack using STL*/
/*int main()
{
    // Creating stack using STL
    stack <int> s;

    //push operation
    s.push(3);
    s.push(2);

    //pop operation
    s.pop();
    cout<<"Printing top element"<<s.top()<<endl;

    if(s.empty())
    {
        cout<<"Stack is empty";
    }
    

    return 0;
}
*/

/*Stack creation using our functions*/
class Stack{
    //properties
    public:
        int *arr;
        int size;
        int top;

    // behaviour
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    /*push function*/
    void push( int element)
    {
        if(size-top >1)
        {
            top++;
            arr[top]=element;
        }
        else
        {
            cout<<"stack overflow"<<endl;
        }

    }

    /* pop function*/
    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
            cout<<"stack underflow"<<endl;
        }

    }

    /*peek function*/

    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }


    }

    /*Empty function*/
    bool isEmpty() {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);

    cout<<"The top element is:"<<st.peek()<<endl;

    st.pop();

    cout<<"The top element is:"<<st.peek()<<endl;

    cout<<st.isEmpty()<<endl;

    return 0;
}
