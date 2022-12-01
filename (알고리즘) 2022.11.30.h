#pragma once
#include <iostream>

using namespace std;


int main()
{
	// 과제 안 내신 분..?
	int array[30];
	int tempArray[30];

	for (int i = 0; i < 30; i++)
	{
		array[i] = i + 1;
	}

	for (int i = 0; i < 28; i++)
	{
		cin >> tempArray[i];
	}

	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (array[i] == array[j])
			{
				array[i] = 0;
			}
		}
	}

	for (int i = 0; i < 30; i++)
	{
		if (array[i] != 0)
		{
			cout << array[i] << endl;
		}
	}

	return 0;
}


