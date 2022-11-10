#include <iostream>
#include <deque>
#include <set>

using namespace std;

int main()
{
	// deque 
	/*
	// 데이터가 들어오는 위치와 나가는 위치가 가장 뒤에 있고,
	// 데이터가 나가는 위치와 들어오는 위치가 가장 앞에 있는 선형 컨테이너입니다.
	std::deque<int> dequeData;

	dequeData.push_back(1);
	dequeData.push_back(2);
	dequeData.push_front(10);
	dequeData.push_back(3);
	dequeData.push_back(4);

	// insert : 내가 삽입하고자 하는 위치, 해당 위치 들어갈 값
	dequeData.insert(dequeData.begin() + 2, 500);

	// erase : 내가 삭제하고 있는 원소의 위치
	dequeData.erase(dequeData.begin());

	for (int i = 0; i < dequeData.size(); i++)
	{
		cout << dequeData.at(i) << endl;

		// [ ] 인덱스로 접근하여 출력하는 부분이 성능상 유리합니다.
		cout << dequeData[i] << endl;
	}
	*/

    // multi_set
	/*
	// set과 다르게 중복된 원소를 컨테이너에 저장할 수 있는 자료구조입니다.
	std::multiset<int> mSet;

	mSet.insert(11);
	mSet.insert(12);
	mSet.insert(56);
	mSet.insert(44);
	mSet.insert(33);
	mSet.insert(36);
	mSet.insert(70);
	mSet.insert(94);

	for (auto iter = mSet.begin(); iter != mSet.end(); iter++)
	{
		cout << *iter << endl;
	}

	// mSet.count(?) : 현재 컨테이너에 ?라는 값이 몇개 존재하는지 출력해주는 함수입니다.
	cout << "mSet에 7이라는 값은 현재 몇 개 존재하나요? : " << mSet.count(7) << endl;

	// 4가 처음으로 나온 부분은 어디일까요?
	multiset<int>::iterator start;
	
	start = mSet.lower_bound(36);
	cout << "4가 처음으로 나온 부분 : " << *start << endl;
	 */


	return 0;
}


