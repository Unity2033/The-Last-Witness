#pragma once
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	// 큐 (FIFO) First In First Out
	/*
	// 먼저 들어온 데이터가 가장 먼저 나가는 구조의 컨테이너입니다.
	std::queue<int> Queue;

	// [ [10] [20] [30] ]
	// Queue.push(값) : 큐 컨테이너에 데이터를 넣어주는 함수입니다.
	Queue.push(10); // [10]
	Queue.push(20);	// [10] [20]
	Queue.push(30);	// [10] [20] [30]

	int value = Queue.size();

	while (Queue.empty() == 0)
	{
		cout << Queue.front() << endl;
		Queue.pop(); // [20] [30]
	}

	// 큐 컨테이너에 데이터가 다 빠진 상태 front() 라던지
	// pop() 함수를 사용하게 되면 큐 언더플로우가 발생합니다.

	// Queue.pop() : 큐 컨테이너에서 데이터를 꺼내는 함수입니다.
	// Queue.pop(); // [20] [30]

	// Queue.front() : 큐 컨테이너에 저장되어 있는 원소중에서 가장 앞에 있는
	// 값을 출력하는 함수입니다.
	// cout << Queue.front() << endl;

	// Queue.size() : 큐 컨테이너의 크기를 출력하는 함수입니다.
	cout << Queue.size() << endl;

	// Queue.Empty() : 큐 컨테이너가 비어있는지 확인하는 함수입니다.
	cout << Queue.empty() << endl;
	*/

	// 스택 (LIFO) Last In First Out
	/*
	// 가장 마지막에 들어온 데이터가 가장 먼저 나가는 구조의 컨테이너입니다.
	std::stack<int> Stack;
	std::stack<int> otherStack;

	otherStack.push(-100); // -100
	otherStack.push(-200); // -200 -100
	otherStack.push(-300); // -300 -200 -100

	Stack.push(10); // 10
	Stack.push(20);	// 20 10
	Stack.push(30);	// 30 20 10

	// swap() : 두 스택의 내용을 바꿀 수 있는 함수입니다.
	swap(Stack, otherStack);

	// Stack.top() : 가장 위에 있는 원소를 출력하는 함수입니다.
	cout << Stack.top() << endl;

	// Stack.pop() : 가장 위에 있는 원소를 빼는 함수입니다.
	Stack.pop();

	// Stack.size() : 스택 컨테이너에 들어있는 크기를 반환하는 함수입니다.
	cout << Stack.size() << endl;
	*/

	int number = 0;
	int array[100] = { 0, };
	int selectNumber = 0;
	int result = 0;

	cin >> number;

	for (int i = 0; i < number; i++)
	{
		cin >> array[i];
	}

	cin >> selectNumber;

	for (int i = 0; i < number; i++)
	{
		// 우리가 selectNumber에 입력한 값과
		// 배열 안에 있는 값이 같다면
		if (array[i] == selectNumber)
		{
			result++;
		}
	}

	cout << result << endl;




	return 0;
}


