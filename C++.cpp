#include <iostream>

using namespace std;

// const 함수
/*
// const 함수 내부에서 변수의 값을 변경할 수 없도록 선언하는 함수입니다.
class Character
{
private :
	int health;
	string name;
public:
	void SetInfo(int m_health, string m_name)
	{
		health = m_health;
		name = m_name;
	}

	void GetInfo() const
	{
		// const 함수의 역할은 함수 내에서 멤버 변수의 값을 읽기 전용으로
		// 선언하기 위해서 사용되는 기능입니다.
		// health = 300;

		cout << "health의 값 : " << health << endl;
		cout << "name의 값 : " << name << endl;
	}

};
*/

// final 
/*
// 더 이상 클래스나 가상함수를 상속받지 않고 재정의할 수 없도록
// 설정해주는 키워드입니다.
class A
{
public:
	void FunctionA()
	{
		cout << "A의 함수입니다." << endl;
	}

	virtual void FunctionB1()
	{
		cout << "A 클래스에서 호출한 B1 함수입니다." << endl;
	}
};

// 클래스에 final을 설정하게 되면 B 클래스 밑에 자식 클래스를
// 설정할 수없습니다.
class B : public  A
{
public :
	virtual void FunctionB()
	{
		cout << "B의 함수입니다." << endl;
	}

	void FunctionB1() final
	{
		cout << "B 클래스에서 호출한 B1의 함수입니다." << endl;
	}
};

class C	: public B
{
	void FunctionB()
	{
		cout << "C 클래스에서 호출한 B의 함수입니다. " << endl;
	}

	// FunctionB1 함수는 B 클래스에서 final로 선언했기 때문에
	// 자식 클래스 C에서 재정의할 수 없습니다.
	// void FunctionB1() { }	
};
*/

// 상속의 접근 지정자
/*
// 상속 private, protected, public
// private : 외부에서 접근못하도록 설정하는 제한자입니다.
// protected : 클래스 내부와 자기가 상속하는 클래스까지만 접근을 허용하는 제한자입니다.
// public : 외부에서도 접근을 허용하는 제한자입니다.
class CPU
{
public:
	void Count()
	{
		cout << "CPU Count" << endl;
	}
};

// 상속을 할 때 접근 지정자를 명시적으로 선언하지 않으면
// 기본 접근 지정자(private)로 선언됩니다.

// 상속에서 private 접근 지정자로 상속받게 되면
// 부모 클래스의 멤버를 자식 클래스에서 호출할 수 없습니다.
class ALU : public CPU
{

};
*/

// is-a 관계
// is-a 관계는 일반적인 개념과 구체적인 개념과의 관계입니다.

// has-a 관계
// 구성 관계를 의미하며 한 오브젝트(구성된 객체, 또는 부분/멤버 객체라고도 부릅니다)
// 가 다른 오브젝트(composite type이라고 부릅니다)에 "속한다(belongs to)"를 말합니다.

int main()
{
	// const 함수
	/*
	Character character;

	character.SetInfo(99, "칼리스타");

	character.GetInfo();
	*/

	// final
	/*
	C cClass;
	*/

	// 상속에서 접근 지정자
	/*
	ALU alu;
	alu.Count();
	*/

	return 0;
}


