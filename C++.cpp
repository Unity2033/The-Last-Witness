#include <iostream>

using namespace std; 

// 깊은 복사
// 참조값이 아닌 인스턴스를 새로 복사하여 실제값을 복사하는 방법입니다.
/*
class Object
{
// 속성
private :
    // m(멤버)_변수이름
    int m_position;
    float m_size;
    int * m_memory;
public :
   // 생성자는 public으로 해주셔야 합니다.
    Object(int postion, float size)
    {
        m_position = postion;
        m_size = size;

        m_memory = new int(10);

        cout << "memory 값 : " << *m_memory << endl;
        cout << "position 값 : " << m_position << endl;
        cout << "size 값 : " << m_size << endl;
    }

    // 복사 생성자
    // 같은 클래스의 객체로부터 '복사'해서 새로운 객체를
    // 생성하는 생성자입니다.

    // 복사 생성자에 인수로 &(레퍼런스)를 받는 이유
    // 새로운 객체를 생성할 때 생기는 오버헤드 현상을 
    // 방지하기 위해 선언합니다.

    // const 복사된 데이터를 보호하기 위해 상수화를 합니다.
    Object(const Object & copyObject)
    {
        m_memory = new int(*copyObject.m_memory);
        m_position = copyObject.m_position;
        m_size = copyObject.m_size;

        cout << "memory 값 : " << *m_memory << endl;
        cout << "position 값 : " << m_position << endl;
        cout << "size 값 : " << m_size << endl;
    }

    // 객체가 소멸될 때 동적으로 할당한 메모리 공간을
    // 해제합니다.
    ~Object()
    {
        delete m_memory;
    }
};
*/

// 기본 생성자
// 프로그래머가 정의한 생성자가 없는 경우
// 컴파일러가 자동으로 생성하는 생성자입니다.
class Book
{
public :
    int page;
    string name;

    // 기본 생성자의 경우 생성자가 하나라도 선언되어 있다면
    // 기본 생성자가 자동으로 생성되지 않습니다.
    // Book() {}; <- 생성자가 없는 기본 생성자를 생성합니다.

    Book()
    {
        cout << "생성자 호출" << endl;
    }
};

class Cover : Book
{

};

int main()
{
    // 얕은 복사란?
    /*
    // 값을 복사하는데 인스턴스가 메모리에 새로 생성되지 않는 형태입니다.
    // 그렇기 때문에 값 자체를 복사하는 것이 아니라 주소값을 복사하여 
    // 같은 메모리를 가리키게 하는 복사입니다.
  
    int * a = new int(10); // 동적으로 메모리 공간을 할당합니다.
    int * b = new int(20);

    cout << "a의 값 : " << *a << endl;
    cout << "b의 값 : " << *b << endl;

    // 얕은 복사가 발생합니다. 
    a = b;
    
    *b = 100;

    cout << "a의 값 : " << *a << endl;
    cout << "b의 값 : " << *b << endl;

    delete a;
    delete b;
  
    // 생성자에 매개변수가 있다면 클래스를 인스턴스(메모리 할당)할 때
    // 클래스에 인수를 넣어주어야 합니다.
    Object cat1(10,5.5);

    Object cat2 = cat1;
    */

    Book book1;
    Cover cover;

    return 0;
}

