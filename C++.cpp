#include <iostream>
using namespace std;

// 함수의 오버라이딩이란?
/*
// 이미 정의된 함수를 무시하고, 같은 이름의 함수를 새롭게
// 정의하는 기능입니다.

class Parent 
{
public :
	virtual void Talk()
	{
		cout << "Parent 클래스 Talk 함수" << endl;
	}

	void Information()
	{
		cout << "Parent 클래스입니다." << endl;
	}
};

class Child : public Parent
{
public:
	// 오버라이딩할 때 상위 클래스의 함수 이름과
	// 동일하게 만들어주어야 합니다.
	void Information()
	{
		cout << "Child 클래스입니다." << endl;
    }

	void Talk()
	{
		cout << "Child 클래스 Talk 함수" << endl;
	}
};
*/

// 상속 관계일 때 생성자와 소멸자 호출 순서
/*
class Fruit 
{
public :
	Fruit()
	{
		cout << "Fruit 클래스 생성" << endl;
	}

	~Fruit()
	{
		cout << "Fruit 클래스 소멸" << endl;
	}
};

class Apple : public Fruit
{
public :
	Apple()
	{
		cout << "Apple 클래스 생성" << endl;
	}

	~Apple()
	{
		cout << "Apple 클래스 소멸" << endl;
	}
};
*/

// 순수 가상 함수
// 선언만 있고 구현이 없는 가상 함수입니다.
class Pen
{
public :
	// 순수 가상 함수는 함수에 0을 넣어주면 됩니다.
	// 하위 클래스에서 재정의할 것으로 예상되는 함수에 대해
	// 미리 호출 계획을 세워 두기 위해 정의합니다.
	virtual void Draw() = 0;
	virtual void Color() = 0;
};

class Circle : public Pen
{
public:
	// 순수 가상 함수는 무조건 하위 클래스에서 
	// 재정의를 해야합니다.
	void Draw()
	{
		cout << "동그라미" << endl;
	}

	void Color()
	{
		cout << "빨간색" << endl;
	}
};

class Rectangle : public Pen
{
public:
	void Draw()
	{
		cout << "네모" << endl;
	}

	void Color()
	{
		cout << "파란색" << endl;
	}
};

int main()
{
	// 가상 함수 테이블
	/*
	Parent *  parent = new Parent;
	Child * child = new Child;
	
	parent->Talk();	// 가상 함수
	parent->Information(); // 일반 함수

	parent = child;

	// parent 포인터의 참조를 child의 메모리 공간을 
	// 가리키도록 변경하였습니다.

	// 가상 함수 테이블이란?
	// 함수 포인터 배열이며, 이 포인터를 따라가서 가상 함수로
	// 선언된 멤버 함수들의 주소에 배열 형태로 접근하여 호출하는 테이블입니다.

	// 가상 함수 테이블이 실제 호출되어야 할 함수의 위치를 저장하고 있습니다.

	parent->Talk();	// 가상 함수
	parent->Information(); // 일반 함수
	*/

	// 상속 관계일 때 생성자와 소멸자 호출 순서
	/*
	Apple apple;

	// 상속관계에서 하위 클래스는 상위 클래스의 생성자를
	// 먼저 호출한 뒤 그 다음에 하위 클래스의 생성자를 호출합니다.

	// 소멸자는 생성자의 역순으로 호출됩니다.
	*/

	// 추상 클래스
	// 일부 함수가 구현되지 않고, 선언만 되어있는 클래스입니다. 
	// 추상 클래스는 객체를 생성할 수 없습니다.

	// 상속받은 클래스에서도 순수 가상함수들을 모두 다 재정의해야만
	// 생성할 수 있습니다.

	// 필요한 모든 클래스가 구현될 수 있도록하여 안정성을 높이는데 
	// 큰 효과를 줍니다.

	Circle circle;
	circle.Draw();

	Rectangle rectangle;
	rectangle.Draw();

	return 0;
}