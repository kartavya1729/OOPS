// DELETE AT LAST 

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

void DeleteEnd(node *&head, node*&tail)
{
	if(!head)
	return;
	else if(!head->next)
	{
		delete head;
		head= tail = NULL;
	}

	else
	{
		node *t = head;
        
		while(t->next != tail)
		{
			t = t->next;
		}

		delete tail;
		t->next = NULL;
		tail = t;
		
	}
}