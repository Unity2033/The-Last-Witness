#include <iostream>

using namespace std;

struct Node
{
	int key;
	int value;
	Node * next;
};

struct Bucket
{
	Node * head;
	int size;
};


Node * CreateNode(int key, int value)
{
	Node * newNode = new Node;
	newNode->key = key;
	newNode->value = value;
	newNode->next = NULL;

	return newNode;
}

int HashFunction(int key)
{
	return key % 5;
}

void Insert(int key, int value)
{
	//      0           10 % 5
	int hashIndex = HashFunction(key);
    
	// 방금 생성한 새로운 노드의 주소가 반환됩니다.
	struct Node * newNode = CreateNode(key, value);
	


 
}

int main()
{	
	// 해시 테이블
	// 해시함수를 사용해서 변환한 값을
	// index로 삼아서 key와 value를 저장하는
	// 자료구조입니다.
	Bucket * hash = new Bucket[5];

	return 0;
}


