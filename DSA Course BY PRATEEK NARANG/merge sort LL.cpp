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


node* midPoint(node *head)
{
	node * slow = head;
	node * fast = head->next;
	while (fast != NULL and fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
node* mergeSort(node * head) {
	//base case
	if (head == NULL || head->next == NULL)
	{
		return head;
	}

	//rec case
	node * mid = midPoint(head);

	//break at mid point
	node * a = head;
	node * b = mid->next;
	mid->next = NULL;

	//recursive sort

	a = mergeSort(a);
	b = mergeSort(b);

	//Merge

	return merge(a, b);

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
	insertAthead(a, 11);
	insertAthead(a, 3);
	insertAthead(a, 17);
	printLL(a);
	a = mergeSort(a);
	printLL(a);
	return 0;
}

