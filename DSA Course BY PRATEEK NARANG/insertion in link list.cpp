#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node* next;

	node(int data) {
		this->data = data;
		next = NULL;
	}

};

void inserrtAthead(node * &head, int data)
{
	if (head == NULL)
	{
		head =  new node(data);
		return;
	}
	node *  n = new node(data);
	n->next = head;
	head = n;
}

void printLL(node * head)
{
	while (head != NULL )
	{
		cout << head->data << "-->";
		head = head->next;
	}
	cout << endl;
}
void insertInMiddle(node* &head, int data, int pos) {
	if (pos == 0)
	{
		inserrtAthead(head, data);
	}
	else
	{
		node * temp = head;
		for (int jump = 1; jump <= pos - 1; jump++)
		{
			temp = temp->next;
		}

		node * n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node* head = NULL;
	inserrtAthead(head, 5);
	inserrtAthead(head, 4);
	inserrtAthead(head, 3);
	inserrtAthead(head, 2);
	inserrtAthead(head, 1);
	insertInMiddle(head, 20, 3);
	printLL(head);

	return 0;
}