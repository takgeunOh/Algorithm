#include <iostream>
using namespace std;

int main()
{
	int i;
	int* arr = new int[9];
	int max;
	int index;

	for (i = 0; i < 9; i++)
		cin >> arr[i];

	max = arr[0];
	index = 0;

	for (i = 1; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}

	cout << max << '\n' << index+1;

	delete[] arr;
}