#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* FrontInsert(Node* head, int value)
{
	Node* newNode = new Node;
	newNode->data = value;

	if (head == NULL)
	{
		head = newNode;
		newNode->next = head;
	}
	else
	{
		newNode->next = head->next;
		head->next = newNode;
	}

	return head;
}

Node* BackInsert(Node* head, int value)
{
	Node* newNode = new Node;
	newNode->data = value;

	if (head == NULL)
	{
		head = newNode;
		newNode->next = head;
	}
	else
	{
		newNode->next = head->next;
		head->next = newNode;
		head = newNode;
	}

	return head;
}

int main()
{
	// 원형 연결 리스트
	Node* head = NULL;

	head = FrontInsert(head, 100);
	head = FrontInsert(head, 200);
	head = BackInsert(head, 500);

	Node* currentNode = head->next;

	while (currentNode != head)
	{
		cout << currentNode->data << endl;
		currentNode = currentNode->next;
	}

	cout << currentNode->data << endl;


	return 0;
}


