// INSERTION AT ANY POSITION
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


void InsertAtMiddle(node*&head, node*&tail, int d, int pos)
{
	node *temp = head;
	
	for(int i=1;i<=pos-1;i++)
	temp = temp->next;
	
	node *n = new node(d);
	n->next = temp->next;
	temp->next = n;
}