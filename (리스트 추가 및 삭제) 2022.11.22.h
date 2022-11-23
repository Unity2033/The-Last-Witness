#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

void Insert(Node* targetNode, int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = targetNode->next;

	targetNode->next = newNode;
}

void Remove(Node* originNode)
{
	Node* targetNode = originNode->next;
	originNode->next = targetNode->next;
	delete targetNode;
}


int main()
{
	Node* head = new Node();
	head->next = NULL;

	Insert(head, 10);
	Insert(head, 20);
	Insert(head, 30);
	Remove(head);

	Node* currentNode = head->next;

	while (currentNode != NULL)
	{
		cout << currentNode->data << endl;
		currentNode = currentNode->next;
	}

	return 0;
}


