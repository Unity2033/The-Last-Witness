#pragma once
#include <iostream>

// 상속
// 기존에 정의되어 있는 (상위)클래스의 모든 멤버 변수와
// 멤버 함수를 물려 받아, 하위 클래스가 사용할 수 있는 것입니다.

// 상위 클래스는 상속을 물려 주는 클래스입니다.
// 하위 클래스는 상속을 물려 받는 클래스입니다.

class Phone
{
public:
    // 생성자는 자신의 클래스 이름으로 만들어주면 됩니다.
    // 생성자는 반환형이 존재하지 않습니다.
    Phone()
    {
        std::cout << "핸드폰이 생성되었습니다." << std::endl;
    }

    // 소멸자는 자신의 클래스 이름 앞에 ~를 사용해서 만들어주면 됩니다.
    ~Phone()
    {
        std::cout << "핸드폰이 파괴되었습니다." << std::endl;
    }

    std::string name;

    void Message()
    {
        std::cout << "문자 보내기" << std::endl;

        // 상위 클래스는 하위 클래스에서 정의한 함수를 사용할 수 없습니다.
        // Touch();
    }

protected:
    void Call()
    {
        std::cout << "전화 걸기" << std::endl;
    }
};

// 상속하는 방법
// (하위)클래스 : (Phone) <- 상위 클래스 이름을 넣어주면 됩니다.
class SmartPhone : Phone
{
public:
    void Touch()
    {
        Call();
    }
};

int main()
{
    // C++ 동적 할당
    /*
    // new (힙 영역에 할당할 메모리 공간의 크기)
    int * ptr = new int;

    *ptr = 100;

    std::cout << *ptr << std::endl;
    std::cout << ptr << std::endl;

    // delete : new로 동적 할당한 메모리 공간을 해제합니다.
    delete ptr;


    int * arrptr = new int[5];

    // 4 byte * 5 = 20 byte
    // [0] [1] [2] [3] [4]

    arrptr[0] = 20;
    arrptr[1] = 30;
    arrptr[2] = 40;
    arrptr[3] = 50;
    arrptr[4] = 60;

    for (int i = 0; i < 5; i++)
    {
        std::cout << arrptr[i] << std::endl;
    }

    delete [] arrptr;
    */

    // Phone phone; // <- 스택 

    Phone* phone = new Phone(); // <- 힙

    delete phone;
    // SmartPhone * sPhone = new SmartPhone();

    // 정적 바인딩
    // 배열의 크기는 컴파일 시점에 메모리 크기가 결정됩니다.
    // 배열[100]; <- 80~90개 메모리 공간은 낭비를 하게 되는거죠

    // 특정 시점에 배열의 크기를 100개 사용해야 되지만,
    // 그 특정 시점이 넘어가면 더이상 사용할 필요가 없을 때

    // 동적 할당은 실행 시간에 메모리 공간 확보하고 줄이고 할 수 있습니다.
    // 리스트

    // 생성자
    // 클래스의 객체가 생성되었을 때 객체를 초기화하는 
    // 목적으로 자동으로 호출되는 함수입니다.

    // 소멸자
    // 클래스의 객체가 소멸되었을 때 자동으로 호출되는 함수입니다.

    return 0;
}

