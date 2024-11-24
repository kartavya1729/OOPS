// DELETE AT FRONT

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


void DeleteFirst(node*&head, node*&tail)
{
	if(head==NULL)
	{
		return;
	}
	else if(head->next == NULL)
	{
		delete head;
		head = tail = NULL;
	}
	else
	{
		node *t = head;
		head = head->next;
		delete t;
	}
}