/*This program is to create a tree in c++*/
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << " Enter data for inserting in left" << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for inserting in right" << endl;
    root->right = buildtree(root->right);

    return root;
}

void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}

void buildfromlevelorder(node* &root)
{
    queue<node *> q;
    cout << "Enter the data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for:" << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "Enter right node for:" << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main()
{
    node *root = NULL;
    buildfromlevelorder(root);
    levelordertraversal(root);

/*
    // creating a tree
    root = buildtree(root);

    // level order traversal
    cout << "Printing the level order traversal output" << endl;
    levelordertraversal(root);

    cout << "inorder traversal is:"
         << " ";
    inorder(root);

    cout << "prerder traversal is:"
         << " ";
    preorder(root);

    cout << "postorder traversal is:"
         << " ";
    postorder(root);
*/

    return 0;
}