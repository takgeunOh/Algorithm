#include <iostream>
using namespace std;

int main()
{
	int N;
	int i, j;
	int min, max;
	int* arr;

	cin >> N;
	arr = new int[N];
	for (i = 0; i < N; i++)
		cin >> arr[i];

	min = arr[0];
	max = arr[0];

	for (i = 0; i < N; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	cout << min << " " << max;
}