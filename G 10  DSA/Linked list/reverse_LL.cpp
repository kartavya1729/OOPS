// REVERSE LL USING ITERATIVE APPROACH

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
		
		node(int value)
		{
			data = value;
			next = NULL;
		}
};

void ReverseLL(node *&head, node*&tail)
{
	node *curr = head;
	node *prev = NULL;
	
	while(curr != NULL)
	{
		node *n = curr->next;
		curr->next = prev;
		prev = curr;
		curr = n; 
	}
	swap(head, tail);
}