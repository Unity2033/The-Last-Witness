#include <iostream>

using namespace std;

int main()
{	
	// 회문 판별 알고리즘
	string word;

	bool check = true;

	cin >> word;

	for (int i = 0; i < word.length() / 2; i++)
	{
		     // 1      		  5 - 1 - 1 (3)
		if (word[i] != word[word.length() - 1 - i])
		{
			check = false;
		}
	}

	if (check == true)
	{
		cout << "회문입니다." << endl;
	}
	else
	{
		cout << "회문이 아닙니다." << endl;
	}


	return 0;
}


