#include <iostream>
#include <string>

using namespace std; 

// 이름 공간(namespace)이란?
/*
// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.
namespace ClientA
{

    void Attack()
    {
        cout << "원거리 공격" << endl;
    }
}

// ClientA의 이름 공간을 명시하지 않아도 사용하겠다는 의미입니다.
using namespace ClientA;

namespace ClientB
{
    void Attack()
    {
        cout << "근거리 공격" << endl;
    }
}

int value = 20; // 전역 변수 value
                // 데이터 영역
*/

// 기본 매개변수
/*
// 함수를 선언할 때 매개변수를 선언과 동시에 초기화하는 매개변수입니다.
// 기본 매개변수는 오른쪽에서 부터 정의해야 합니다.
void Function(int x , int y = 30, int z = 30)
{
    cout << "x의 값 : " << x << endl;
    cout << "y의 값 : " << y << endl;
}
*/

int main()
{
    // 범위 지정 연산자란?
    /*
    // 여러 범위에서 사용되는 식별자를 구분하는데 사용하는 연산자입니다.

    int value = 10; // 지역 변수 value
                    // 스택 영역

    // 컴퓨터 언어 이론 (범위 규칙)
    // 전역 변수와 같은 이름의 지역 변수가 선언되었을 때
    // 가장 가까운 범위에 존재하는 변수의 이름을 사용하는 규칙입니다.
    cout << "value의 값 : " << value << endl;

    cout << "전역 변수 value 값 : " << ::value << endl;

    Attack(); // using namespace를 사용하기 때문에
              // ClientA:: 

    ClientB::Attack();
    */

    // 기본 매개변수
    /*
    // 기본 매개변수를 선언하게 되면 함수의 인수를 
    // 전달하지 않아도 사용할 수 있습니다.

    // 함수에 인수를 전달할 때 매개변수의 왼쪽부터 값이 들어갑니다.

    Function(5);
    */

    // getline 
    /*
    string name;

    // [k][i][m][\0][g][e][u][m]
    // 문자열은 NULL문자까지만 출력합니다.

    // cin >> name;

    // getline( ) 함수 : 표준입력을 받는 경우 Enter의 여부에
    //                   따라 입력받을 문자열을 구분합니다.
    getline(cin, name);

    cout << name;
    */

    // OX퀴즈
    int input, score, sum;
    char buffer[80];

    cin >> input;

    for (int i = 0; i < input; i++)
    {
        sum = 0;
        score = 1;

        cin >> buffer;

        //  0  1  2  3  4  5  6
        // [O][X][X][O][X][O][O] = 5

        for (int j = 0; j < strlen(buffer); j++)
        {            
            if (buffer[j] == 'O')
            {
                sum += score;
                score++;
            }

            if (buffer[j] == 'X')
            {
                score = 1;
            }
        }

        cout << sum << endl;    
    }
   

    return 0;
}

