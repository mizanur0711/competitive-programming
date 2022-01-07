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
void reverse(node *&head)
{
	node* prev = NULL;
	node* current = head;
	node* temp;
	while (current != NULL)
	{
		temp = current->next;

		current->next = prev;

		prev = current;
		current = temp;
	}
	head = prev;
	return;

}



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node* head = NULL;
	insertAthead(head, 4);
	insertAthead(head, 3);
	insertAthead(head, 2);
	insertAthead(head, 0);
	printLL(head);
	reverse(head);
	printLL(head);
	return 0;
}

