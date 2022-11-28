#pragma once
#include <iostream>

using namespace std;

int main()
{
	// 삽입 정렬 
	/*
	// 배열의 모든 요소를 앞에서부터 차례대로
	// 이미 정렬된 배열 부분과 비교하여, 자신의
	// 위치를 찾아 삽입함으로써 정렬을 완성하는 알고리즘입니다.
	int array[5] = { 5, 3, 7, 1, 2 };
	int j = 0;
	int key = 0;

	for (int i = 1; i < 5; i++)
	{
	 //  3       3
		key = array[i];

		// j가 0일 때도 반복이됩니다.

		for (j = i - 1; j >= 0 && array[j] > key; j--)
		{
			array[j + 1] = array[j];
		}

		// j가 -1이 되어있겠죠?
		// j(-1) + 1 = 0;
		array[j + 1] = key;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
	*/

	// 단어공부
	string Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	int array[26] = { 0, };
	int max = 0;
	int temp = 0;
	char character = NULL;

	string data;

	cin >> data;

	for (int i = 0; i < data.length(); i++)
	{
		for (int j = 0; j < Alphabet.length(); j++)
		{
			if (Alphabet[j] == data[i] || alphabet[j] == data[i])
			{
				array[j]++;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			character = Alphabet[i];
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == array[i])
		{
			temp++;
		}
	}

	if (temp == 1)
	{
		cout << character << endl;
	}
	else
	{
		cout << "?" << endl;
	}

	return 0;
}


