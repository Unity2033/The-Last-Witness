#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node * prev;
	Node * next;
};

Node * head = NULL;
Node * tail = NULL;

void Insert(Node * targetNode, int value)
{
	Node * newNode = new Node;
	newNode->data = value;

	newNode->prev = targetNode;
	newNode->next = targetNode->next;

	targetNode->next->prev = newNode;
	targetNode->next = newNode;
}

void Remove(Node * targetNode)
{
	Node * deleteNode = targetNode->next;

	if (deleteNode == NULL)
	{
		return;
	}

	deleteNode->next->prev = targetNode;
	targetNode->next = deleteNode->next;

	delete deleteNode;
}

void FrontOutput()
{
	Node * currentNode = head->next;

	while (currentNode != tail)
	{
		cout << currentNode->data << endl;
		currentNode = currentNode->next;
	}
}

void BackOutput()
{
	Node * currentNode = tail->prev;

	while (currentNode != head)
	{
		cout << currentNode->data << endl;
		currentNode = currentNode->prev;
	}
}

int main()
{	
	     // 더미 노드 1 
	head = new Node;

	     // 더미 노드 2
	tail = new Node;

	head->next = tail;
	head->prev = NULL;

	tail->next = NULL;
	tail->prev = head;

	Insert(head, 10);
	Insert(head, 20);
	Insert(head, 30);

	Remove(head);

	FrontOutput();
	BackOutput();



	return 0;
}


