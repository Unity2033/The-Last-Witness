#include <iostream>


// 상속
// 기존에 정의되어 있는 (상위)클래스의 모든 멤버 변수와
// 멤버 함수를 물려 받아, 하위 클래스가 사용할 수 있는 것입니다.

// 상위 클래스는 상속을 물려 주는 클래스입니다.
// 하위 클래스는 상속을 물려 받는 클래스입니다.

class Phone 
{
public :
    std::string name;

protected :
    void Call()
    {
        std::cout << "전화 걸기" << std::endl;
    }

    void Message()
    {
        std::cout << "문자 보내기" << std::endl;

        // 상위 클래스는 하위 클래스에서 정의한 함수를 사용할 수 없습니다.
        // Touch();
    }
};

// 상속하는 방법
// (하위)클래스 : (Phone) <- 상위 클래스 이름을 넣어주면 됩니다.
class SmartPhone : Phone
{
public :
    void Touch()
    {
        Call();
    }  
};

int main()
{
    // C++ 동적 할당
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


    return 0;
}

