//INSERTION AT BEGINNING

#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
		
		node(int value)
		{
			data = value;
			next = NULL;
		}
};


void InsertAtFront(node* &head,node*& tail, int d)
{
	if(head == NULL)
	{
		node* n = new node(d);
		head = tail = n;
	}
    
	else
	{
		node *n = new node(d);
		n->next = head;
		head = n;
	}
}