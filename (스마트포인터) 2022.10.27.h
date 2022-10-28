#pragma once
#include <iostream>
#include <memory>

using namespace std;

// 스마트 포인터란?
/*
// 포인터처럼 동작하는 클래스 템플릿으로 사용이 끝난 메모리를
// 자동으로 해제하는 포인터입니다.

class Player
{
public :
	Player()
	{
		cout << "Player 생성" << endl;
	}

	~Player()
	{
		cout << "Player 소멸" << endl;
	}
};
*/

class Person
{
public:
	// shared_ptr로 선언할 경우 순환 참조가 발생합니다.
	// weak_ptr로 선언할 경우 순환 참조를 예방할 수 있습니다.
	weak_ptr<Person> person;

	Person()
	{
		cout << "생성" << endl;
	}

	~Person()
	{
		cout << "소멸" << endl;
	}
};


int main()
{
	// shared_ptr 포인터
	/*
	// 어떤 하나의 객체를 참조하는 스마트 포인터의 갯수를 참조하는 포인터입니다.
	// 참조하고 있는 스마트 포인터의 갯수를 참조 카운트라고 합니다.

	// 참조 카운트란?
	// 해당 메모리를 참조하는 포인터가 몇개가 있는지 나타내는 값입니다.
	// 참조하는 포인터가 추가되면 1씩 증가하고 참조하는 포인터가 끊어지면 1씩 감소합니다.

	// 첫번째로 초기화하는 방법
	// shared_ptr<int>	ptr1(new int(5));
	// 두번째로 초기화하는 방법
	// shared_ptr<int>	ptr1 = make_shared<int>(5);

	// shared_ptr에서 참조 카운트를 확인하는 방법
	// ptr1.use_count()

	shared_ptr<Player> ptr1(new Player());

	cout << "ptr1 참조 카운트 : " << ptr1.use_count() << endl;

	shared_ptr<Player> ptr2 = ptr1;

	cout << "ptr1 참조 카운트 : " << ptr2.use_count() << endl;
	*/

	// unique_ptr 포인터
	/*
	// 하나의 스마트 포인터만 가리킬 수 있는 포인터입니다.
	// shared_ptr 참조 카운트를 1 이상 넘길 수 없습니다.

	unique_ptr<Player> ptr1(new Player());

	// ptr1이 가지고 있던 메모리 소유권(동적으로 할당한 메모리)를
	// ptr2에게 메모리 소유권을 넘겨주는 과정입니다.

	unique_ptr<Player> ptr2 = move(ptr1);

	// reset : 메모리 영역을 삭제할 수 있는 함수
	ptr2.reset();

	// unique_ptr<int> ptr3 = ptr1;	ERROR
	*/

	// weak_ptr 포인터
	// 하나 이상의 shared_ptr 인스턴스가 소유하는 객체에 대한 접근을
	// 제공하지만, 참조 카운트에 포함되지 않는 스마트 포인터입니다.

	// 만약에 서로가 상대를 가리키는 shared_ptr을 가지고 있다면,
	// 참조 횟수는 절대 1 이하로 떨어지지 않습니다.
	// shared_ptr이 해제가 되지 않는 문제가 발생합니다.

	// 순환 참조
	// 서로 상대를 참조하는 상황입니다.

	// shared_ptr 인스턴스 사이에 순환 참조를 제거하기 위해 사용하는
	// 스마트포인터입니다.

	shared_ptr<Person> obj1(new Person());
	shared_ptr<Person> obj2(new Person());

	cout << "obj1 참조 카운트 : " << obj1.use_count() << endl;
	cout << "obj2 참조 카운트 : " << obj2.use_count() << endl;

	obj1->person = obj2;
	obj2->person = obj1;

	cout << "obj1 참조 카운트 : " << obj1.use_count() << endl;
	cout << "obj2 참조 카운트 : " << obj2.use_count() << endl;

	return 0;
}