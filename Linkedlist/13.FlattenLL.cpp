#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *next, *bottom;
};

Node* head = NULL;

// A function to merge two sorted linked lists
Node* merge(Node* l1, Node* l2)
{
	
	// If first linked list is empty then return the second list
	
	if (l1 == NULL)
		return l2;

	// If the second linked list is empty then return the first list
	if (l2 == NULL)
		return l1;

	// Compare the data members of the two linked
	// lists and put the larger one in the result
	Node* result;

	if (l1->data < l2->data)
	{
		result = l1;
		result->bottom = merge(l1->bottom, l2);
	}

	else
	{
		result = l2;
		result->bottom = merge(l1, l2->bottom);
	}
	result->next = NULL;
	return result;
}

Node* flattenList(Node* root)
{
	
	// Base Cases
	if (root == NULL || root->next == NULL)
		return root;

	// Recur for list on right
	root->next = flattenList(root->next);

	// Now merge
	root = merge(root, root->next);

	// Return the root
	return root;
}

// function to insert a node at the beginning of the linked list
Node* push(Node* head_ref, int data)
{
	
	// Allocate the Node & Put in the data
	Node* new_node = new Node();

	new_node->data = data;
	new_node->next = NULL;

	// Make next of new Node as head
	new_node->bottom = head_ref;

	// Move the head to point to the new Node
	head_ref = new_node;

	return head_ref;
}

void printList()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->bottom;
	}
	cout << endl;
}

// Driver code
int main()
{
	
	/* Let us create the following linked list
		4 -> 6 -> 8 -> 10
		|    |	       |
		V    V	       V
		7   13        20
		|	          |
		V	          V
		9	         30
		|		
		V	       
		12            
	*/
	head = push(head, 12);
	head = push(head,  9);
	head = push(head, 7);
	head = push(head, 4);

	head->next = push(head->next, 13);
	head->next = push(head->next, 6);

	head->next->next = push(head->next->next, 8);

	head->next->next->next = push(head->next->next->next, 30);
	head->next->next->next = push(head->next->next->next, 20);
	head->next->next->next = push(head->next->next->next, 10);


	// Flatten the list
	head = flattenList(head);

	printList();
	return 0;
}