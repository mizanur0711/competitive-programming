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

node* merge(node* a, node* b)
{
	//base case
	if (a == NULL) {
		return b;
	}
	if (b == NULL) {
		return a;
	}

	//rec case
	node *c;
	if (a->data < b->data)
	{
		c = a;
		c->next = merge(a->next, b);
	}
	else
	{
		c = b;
		c->next = merge(a, b->next);
	}
	return c;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node* a = NULL;
	insertAthead(a, 10);
	insertAthead(a, 7);
	insertAthead(a, 5);
	insertAthead(a, 1);

	node* b = NULL;
	insertAthead(b, 6);
	insertAthead(b, 3);
	insertAthead(b, 2);

	node* head = merge(a, b);

	printLL(head);
	return 0;
}

