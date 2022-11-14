#pragma once
#include <iostream>
#include <stack>
#include <unordered_map>
#include <queue>

using namespace std;

// 스택 구현하기
/*
int stackArray[5];
int top = -1;

int Empty()
{
	if (top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Push(int x)
{
	stackArray[++top] = x;
}

int Size()
{
	return top + 1;
}

int Top()
{
	if (top == -1)
		return -1;
	else
		return stackArray[top];
}

int Pop()
{
	return stackArray[top--];
}
*/

int main()
{
	// 스택 구현하기
	/*
	std::stack<int> Stack;
	//Stack.push(10);
	//Stack.pop();
	//cout << Stack.top() << endl;
	//cout << Stack.empty() << endl;

	Push(1);
	Push(2);
	Push(3);

	cout << "가장 위에 있는 값 : " << Top() << endl;
	cout << "스택의 크기 : " << Size() << endl;
	cout << "스택이 비어있나요? : " << Empty() << endl;

	cout << Pop() << endl;
	cout << Pop() << endl;
	cout << Pop() << endl;

	cout << "스택의 크기 : " << Size() << endl;
	cout << "스택이 비어있나요? : " << Empty() << endl;

	// 1. pop
	// 2. push (O)
	// 3. size : 현재 컨테이너에 들어있는 데이터의 갯수
	// 4. empty (O) : Stack에 데이터 비어있다면 1을 반환합니다.
	//                Stack에 데이터가 있다면 0을 반환합니다.
	// 5. top
	*/

	// unordered_map 선언
	/*
	unordered_map<int, string> uMap;

	uMap.insert(make_pair(10, "Ten"));
	uMap.insert(make_pair(1, "One"));
	uMap.insert(make_pair(7, "Seven"));
	uMap.insert(make_pair(2, "Two"));

	for (auto iter = uMap.begin(); iter != uMap.end(); iter++)
	{
		cout << "uMap의 key : " << iter->first << endl;
		cout << "uMap의 value : " << iter->second << endl;
	}
	*/

	// 우선 순위 큐
	// 큐 컨테이너에 있는 원소 중 가장 큰 값이 TOP 위치에 유지되도록
	// 설정되어 있는 자료구조입니다.

	// 우선 순위 큐의 경우 내부적으로 힙(Heap)이라는 자료구조로 
	// 구성되어 있습니다. 

	// 우선 순위 큐를 선언합니다.
	priority_queue<int> pQueue;

	pQueue.push(3);
	pQueue.push(1);
	pQueue.push(7);
	pQueue.push(5);
	pQueue.push(2);

	cout << "큐의 사이즈 : " << pQueue.size() << endl;

	// pQueue.empty() = 0 (false)
	// pQueue.empty() = 1 (true)
	while (pQueue.empty() == false)	// pQueue.empty가 true가 될 때까지 반복합니다.
	{
		cout << pQueue.top() << endl; // 제일 위에 있는 값을 출력합니다.
		pQueue.pop(); // 제일 위에 있는 원소를 뺍니다.
	}

	return 0;
}

