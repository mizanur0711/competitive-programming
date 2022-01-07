#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int data)
	{
		this->data = data;
		next = NULL;
	}
};
void insertAthead(node * &head, int data)
{
	if (head == NULL)
	{
		head =  new node(data);
		return;
	}
	node * n = new node(data);
	n->next = head;
	head = n;
}
void printLL(node * head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

node* recReverse(node *head)
{
	if (head->next == NULL || head == NULL)
	{
		return head;
	}

	node* sHead = recReverse(head->next);
	head->next->next = head;
	head->next = NULL;
	return sHead;
}



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node* head = NULL;
	insertAthead(head, 4);
	insertAthead(head, 3);
	insertAthead(head, 2);
	insertAthead(head, 1);
	printLL(head);
	head = recReverse(head);
	printLL(head);
	return 0;
}

