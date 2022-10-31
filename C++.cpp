#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	// std::string 
#pragma region 문자열 관련 내용
	/*
	string name = "KimGeumSoo";
	string * name1 = new string(name);

	cout << "name 변수의 값 : " << name << endl;
	cout << "name1 변수의 값 : " << *name1 << endl;

	// append : string 객체에 가장 끝에 있는 메모리에 
	// 데이터를 추가합니다.
	name.append("11");
						
	delete name1;

	// nullptr Null 포인터란?
	// 더 이상 아무 위치를 참조하지 않는 포인터입니다.
	name1 = nullptr;

	if (name1 == nullptr)
	{
		name1 = new string("안녕하세요.");
	}

	// 나눗셈 연산
	// 곱셈 연산

	// 10 / 2 (나눗셈)
	// 10 *	0.5 (곱셈) <- 최적화에 더욱더 효과적인 연산입니다.

	cout << "name 변수의 값 : " << name << endl;
	cout << "name1 변수의 값 : " << *name1 << endl;
	*/
#pragma endregion

	// 영어 1 byte
	// 한글 2 byte
	// 특수기호 3 byte
	vector<string> data = {"←","→","↑","↓","↓"};

	// vector의 원소가 비었으면 true를 반환합니다.
	// vector의 원소가 있다면 false를 반환합니다.
	
	// resize : vector 메모리의 크기를 변경합니다. 
	//data.resize(10);

	data.push_back("a");
	data.push_back("a");
	data.push_back("a");
	data.push_back("a");
	data.push_back("a");
	data.push_back("a");
	data.push_back("a");

	// size() 
	// 현재의 원소의 갯수를 반환합니다.
	cout << data.size() << endl;
	
	// capacity()
	// 할당된 메모리 공간의 크기를 반환합니다.
	// 공간 할당의 기준은 점점 커지면서 capacity를 할당하게 됩니다.
	// 기존 메모리의 1.5배를 증가시키게 됩니다. 
	// 이렇게 메모리를 할당 이유는 push_back이 일어날 때마다 동적할당을 하게 되면
	// 비효율적이기 때문에 미리 정해둔 만큼 동적할당을 한번에 하는 것입니다.
	cout << data.capacity() << endl;

	//while (!data.empty())
	//{
	//	if (GetAsyncKeyState(VK_SPACE))
	//	{
	//		data.pop_back();
	//	}

	//	// [0] [1] [2] [3]
	//	// "←","→","↑","↓"
	//	for (string element : data)
	//	{
	//		cout << element << " ";
	//	}

	//	Sleep(500); // 0.5초 대기
	//	system("cls");
	//}


}


