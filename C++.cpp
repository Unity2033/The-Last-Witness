#include <iostream>

using namespace std;

int buffer[5] = { 0, };

class Queue
{
private:
	int rear = -1;
	int front = -1;
public:

	void BufferPrint()
	{
		for (int i = 0; i < 5; i++)
		{
			cout << buffer[i] << endl;
		}
	}

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

	bool IsFull()
	{
		if (rear == 4)
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
		if (IsFull() == true)
		{	// 데이터가 다 차있는 상태라면 데이터를 못 넣도록 해야합니다.
			cout << "데이터를 넣을 수 없습니다." << endl;
		}
		else
		{
			buffer[++rear] = value;
		}
	}

	int Pop()
	{
		if (Empty() == true)
		{
			cout << "큐가 비었습니다." << endl;
			return 0;
		}
		else
		{
			// 출력할 값을 잠깐 보관하는 단계입니다.
			int temp = buffer[++front];	

			buffer[front] = 0;

			return temp; // return 값을 반환하는 기능도 하면서 
			             // 함수를 종료시켜 줍니다.
		}
		// 컨테이너에 데이터가 없다면 데이터를 못 꺼내도록 해야합니다.
	}

	// push	== Enqueue
	// pop == Dequeue

};


int main()
{	
	// 큐 
	// FIFO (first in first out)
	// 먼저 들어온 데이터가 먼저 나가는 구조입니다.

	// 선형 큐 
	// 선형 큐의 문제점
	// 데이터를 추가할 때 index의 값을 감소하지 않고 증가만 시키기 때문에 
	// 실제로 앞에 있는 데이터가 없을 때도 큐에 데이터를 저장할 수 없는 형태가 나타납니다.
	Queue queue;
	queue.Push(1);
	queue.Push(2);
	queue.Push(3);
	queue.Push(4);
	queue.Push(5);

	queue.BufferPrint();

	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;
	cout << queue.Pop() << endl;

	queue.BufferPrint();

	queue.Push(10);


	// 원형 큐


	return 0;
}


