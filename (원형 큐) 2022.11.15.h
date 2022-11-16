#pragma once
#include <iostream>

using namespace std;

int buffer[6];

class CircleQueue
{
private:
	int front = 6 - 1; // 배열의 최대 크기 - 1
	int rear = 6 - 1; // 배열의 최대 크기 - 1
public:
	bool Empty()
	{
		if (front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isFull()
	{
		if ((rear + 1) % 6 == front)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Push(int value)
	{
		if (isFull() == true)
		{
			cout << "현재 큐에 데이터를 넣을 수 없습니다." << endl;
		}
		else
		{
			rear = (rear + 1) % 6;
			buffer[rear] = value;
		}
	}

	int Pop()
	{
		if (Empty() == true)
		{
			cout << "데이터가 비어있습니다." << endl;
		}
		else
		{
			front = (front + 1) % 6;
			int temp = buffer[front];

			buffer[front] = 0;
			return temp;
		}
	}
};


int main()
{
	// 원형 큐는 배열의 마지막 인덱스를 비워주어야 합니다.
	CircleQueue Queue;
	Queue.Push(10);
	Queue.Push(20);
	Queue.Push(30);
	Queue.Push(40);
	Queue.Push(50);

	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;
	cout << Queue.Pop() << endl;

	Queue.Push(10);
	Queue.Push(20);
	Queue.Push(30);
	Queue.Push(40);
	Queue.Push(50);

	return 0;
}


