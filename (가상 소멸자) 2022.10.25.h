#pragma once
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

// 가상 소멸자
/*
// 가상 소멸자는 존재하지만, 가상 생성자는 존재하지 않습니다.
class A
{
public :
	A()
	{
		cout << "A 클래스 생성" << endl;
	}
	virtual ~A()
	{
		cout << "A 클래스 소멸" << endl;
	}

};

class B : public A
{
public:
	B()
	{
		cout << "B 클래스 생성" << endl;
	}
	virtual ~B()
	{
		cout << "B 클래스 소멸" << endl;
	}
};
*/

// 프렌드
/*
// 클래스의 멤버 함수는 아니지만, 클래스에 friend 라고 선언하게 되면
// 클래스의 멤버 함수처럼 private 멤버에 접근할 수 있는 기능입니다.
class PeopleA
{
private :
	int age;
	// 친구로 선언할 클래스의 이름을 선언합니다.

	friend void Information(PeopleA a) // <- 전역 함수로 선언
	{
		cout << "PeopleA 클래스 정보" << endl;
	}

	// friend 키워드는 public, private, protected
	// 어디에서든 사용가능합니다.
	friend class PeopleB;
public :
	PeopleA(int age)
	{
		this->age = age;
	}
};

class PeopleB
{
public :
	void FriendInformation(PeopleA people)
	{
		cout << people.age << endl;
	}
};
*/

int main()
{
	// 가상 소멸자
	/*
	// 가상 소멸자가 호출되면 상속 구조의 맨 아래에 있는 하위 클래스의
	// 소멸자가 대신 호출되면서 상위 클래스의 소멸자가 순서대로 호출됩니다.
	A * aptr = new B();

	delete aptr;
	*/

	// 프렌드
	/*
	PeopleA a(10);
	Information(a);
	PeopleB b;
	b.FriendInformation(a);
	*/

	// 곱셈
	/*
	int number1 = 0;
	int number2 = 0;

	cin >> number1 >> number2;

	cout << number2 % 10 * number1 << endl;
	cout << number2 / 10 % 10 * number1 << endl;
	cout << number2 / 100 * number1 << endl;
	cout << number1 * number2 << endl;
	*/

	// 중복되지 않는 랜덤값
	// 1.배열을 생성합니다.
	// 2.배열에 순차적으로 값을 저장합니다.
	// [5][4][3][2][1]

	int array[10];
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 10 + 1;

		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}