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
node* kReverse(node *head, int k) {
	//base case
	if (head == NULL)
	{
		return NULL;
	}

	//reverse the first k nodes

	node* prev = NULL;
	node* current = head;
	node* temp;
	int cnt = 0;
	while (current != NULL and cnt < k )
	{
		//store next
		temp = current->next;
		//update the current
		current->next = prev;
		//prev and current
		prev = current;
		current = temp;
		cnt++;
	}
	if (temp != NULL)
	{
		head->next = kReverse(temp, k);
	}

	return prev;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node* head = NULL;
	insertAthead(head, 5);
	insertAthead(head, 4);
	insertAthead(head, 3);
	insertAthead(head, 2);
	insertAthead(head, 1);
	insertAthead(head, 0);
	printLL(head);
	head = kReverse(head, 2);
	printLL(head);
	return 0;
}

