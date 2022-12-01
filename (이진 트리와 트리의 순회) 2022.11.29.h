#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* CreateNode(int value, Node* leftPtr, Node* rightPtr)
{
	Node* newNode = new Node;

	newNode->data = value;
	newNode->left = leftPtr;
	newNode->right = rightPtr;

	return newNode;
}

// 전위 순회
// 1. 자기 자신부터 출력 
// 2. 왼쪽의 자식 노드를 방문(출력)
// 3. 오른쪽의 자식 노드를 방문(출력)
void Preorder(Node* root)
{
	if (root != NULL)
	{
		// 값 출력  
		cout << root->data << " ";
		// 왼쪽 자식 노드 방문 
		Preorder(root->left);
		// 오른쪽 자식 노드 방문
		Preorder(root->right);
	}
}

// 중위 순회
// 1. 왼쪽 자식 노드 방문
// 2. 자기 자신의 노드를 출력
// 3. 오른쪽 자식 노드 방문
void Inorder(Node* root)
{
	if (root != NULL)
	{
		Inorder(root->left);
		cout << root->data << " ";
		Inorder(root->right);
	}
}

// 후위 순회
// 1. 왼쪽 자식 노드를 방문
// 2. 오른쪽 자식 노드를 방문
// 3. 자기 자신의 노드를 출력 
void Postorder(Node* root)
{
	if (root != NULL)
	{
		Postorder(root->left);
		Postorder(root->right);
		cout << root->data << " ";
	}
}

int main()
{
	// 트리 구조란?
	// 한 노드에서 시작해서 다른 정점들을
	// 순회하여 자기 자신에게 돌아오는 순환이
	// 없는 연결 그래프입니다.

	// 이진 트리
	// 최대 2개의 자식 노드를 가지는 트리입니다.

	Node* n7 = CreateNode(7, NULL, NULL);
	Node* n6 = CreateNode(6, NULL, NULL);
	Node* n5 = CreateNode(5, NULL, NULL);
	Node* n4 = CreateNode(4, NULL, NULL);

	Node* n3 = CreateNode(3, n6, n7);
	Node* n2 = CreateNode(2, n4, n5);
	Node* n1 = CreateNode(1, n2, n3);

	// Preorder(n1);
	// Inorder(n1);
	Postorder(n1);

	return 0;
}


