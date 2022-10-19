#include <iostream>

using namespace std; 

// 레퍼런스 연산자의 경우 
/*
// 포인터를 이용하여 메모리 연산을 허용하지 않습니다.
void Function(int & x) // <- 1000 mb 
{  
    x = 100;
}
*/

// 인라인 함수
/*
// 함수를 호출하는 대신 함수가 호출되는 위치마다
// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.
inline void Function()
{
    cout << "공격" << endl;
}
*/

// 캡슐화
/*
class cellPhone 
{
private :
    int brightness;
    int volume;

    bool power;
public :
    // 값을 접근하는 함수 (Setter)
    // 값을 읽는 함수 (Getter)

    // Setter() 함수
    void SetVolume(int x)
    {
        volume = x;
    }

    // Getter() 함수
    int GetVolume()
    {
        return volume;
    }
};
*/

int main()
{
    // 참조자란?
    /*
    // 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름입니다.

    // 하나의 메모리 공간에 2개에 이름이 존재하는 형태가 되는 것입니다.
    int a = 10;
    int & tvalue = a;
    int & ref = tvalue;

    // 참조자는 초기화를 하지 않으면 사용할 수 없습니다.
    // 참조자는 NULL로도 초기화를 할 수 없습니다.

    // int & va = NULL;
    Function(a);

    cout << a << endl;
    */

    // 인라인 함수
    /*
    // 함수 안에 있는 내용이 간단할 때 사용해야 합니다.

    // 함수가 여러 번 호출되는 함수일 경우 인라인 함수를 사용하면 
    // 컴파일 크기가 커지게 됩니다.
    Function();
    */

    // 객체 지향 프로그래밍이란?
    // 여러 개의 객체들끼리 상호작용을 통해 
    // 로직을 구성하는 프로그래밍 방법입니다.

    // 캡슐화
    /*
    // 클래스의 속성(변수)과 기능(함수)를 하나로 묶은 다음
    // 실제 구현 내용의 일부를 내부에 감추어 은닉하는 속성입니다.
   
 
    cellPhone iPhone;
    iPhone.SetVolume(10);

    cout << iPhone.GetVolume() << endl;
    */

    return 0;
}

