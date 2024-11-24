// REVERSE LL USING RECURSION

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

void Helper(node*curr, node*prev)
{
	//base case
	if(curr == NULL)
	return;
	
	node *n = curr->next;
	curr->next = prev;
	
	Helper(n,curr);
}
void ReverseRec(node *&head, node *&tail)
{
	Helper(head, NULL);
	swap(head, tail);
}


int main()
{
	node *head, *tail;
	
	//pointers mei kabhi bhi garbage value nhi rkhte
	head = tail = NULL;
	
	InsertAtStart(head, tail, 1);
	InsertAtStart(head, tail, 2);
	InsertAtStart(head, tail, 3);
	
//	PrintLL(head);
	cout<<endl;
	
	InsertAtEnd(head, tail, 4);
	InsertAtEnd(head, tail, 5);
	InsertAtEnd(head, tail, 6);
	
//	PrintLL(head);
	cout<<endl;
	
	InsertAtMiddle(head, tail, 7, 3);
	
	cout<<"Before Deletion: "<<endl;
	PrintLL(head);
	cout<<endl;
	
	cout<<endl;
	
//	cout<<"Length of a Linked List is: "<<LengthLL(head)<<endl;
    
//	cout<<"After Delete First Node: "<<endl;
//	DeleteFront(head, tail);
//	PrintLL(head);
//	cout<<endl;  
//	
//	cout<<"After Delete Last Node: "<<endl;
//	DeleteLast(head, tail);
//	PrintLL(head);
//	cout<<endl;  
//	
//	cout<<"After Delete Middle element: "<<endl;
//	DeleteMiddle(head, tail, 2);
//	PrintLL(head);
//	cout<<endl;
	
//	ReverseLL(head, tail);
//	PrintLL(head);

	cout<<endl;
	ReverseRec(head, tail);
	PrintLL(head);
	cout<<endl;
	
	return 0;
}