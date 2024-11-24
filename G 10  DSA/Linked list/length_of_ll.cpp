// LENGTH OF LL
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


int LengthLL(node *&head)
{
	node* temp =head;
	int ans = 0;
	while(temp != NULL)
	{
		ans++;
		temp = temp->next;
	}
	return ans;
	
}