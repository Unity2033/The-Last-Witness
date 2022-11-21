#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node * next;
};

int main()
{	
	// 연결리스트

	// 1. 단방향 연결 리스트
    Node * head = NULL;

	//	00B056A2 <- 00B056A2
    Node * node1 = new Node;
	head = node1;

	head->data = 10;

	//  00AD15D8 <- 00AD15D8
	Node * node2 = new Node;
	
	head->next = node2;
	node2->data = 20;

	Node * node3 = new Node;
	head->next = node3;
	node3->data = 30;

	node3->next = NULL;

	Node * currentPtr = head;

	while (currentPtr != NULL)
	{
		cout << currentPtr->data << endl;
		currentPtr = currentPtr->next;
	}


	// 2. 원형 연결 리스트

	// 3. 양방향 연결 리스트

	
	return 0;
}


