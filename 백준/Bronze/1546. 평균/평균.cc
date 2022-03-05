#include <iostream>
using namespace std;

int main()
{
	int m;	// 자기 점수 중 최댓값
	int n;
	int i;
	int* arr;
	float* new_arr;
	float sum = 0;
	float avg;

	cin >> n;
	arr = new int[n];
	new_arr = new float[n];

	for (i = 0; i < n; i++)
		cin >> arr[i];

	m = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > m)
			m = arr[i];
	}
	// cout << m << '\n';

	for (i = 0; i < n; i++)
	{
		new_arr[i] = (float)arr[i] / m * 100;
		sum = sum + new_arr[i];
		// cout << new_arr[i] << " ";
	}

	avg = sum / n;
	cout << avg;

	delete[] arr;
}