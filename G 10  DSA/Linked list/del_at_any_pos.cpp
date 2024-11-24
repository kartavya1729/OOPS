// DELETE AT ANY POSITION 

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


void DeleteMiddle(node *&head, node*&tail, int pos)
{
	node *t = head;
	for(int i=1;i<=pos-1;i++)
	{
		t = t->next;
	}
	node *n = t->next;
	t->next = n->next;
	delete n;
}