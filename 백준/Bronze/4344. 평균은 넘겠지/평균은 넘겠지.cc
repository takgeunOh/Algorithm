#include <iostream>
using namespace std;

int main()
{
	int c;
	int i, j;
	int N;
	int* arr;
	int sum = 0;
	float avg;
	int count = 0;

	cin >> c;
	for (i = 0; i < c; i++)
	{
		cin >> N;
		arr = new int[N];
		for (j = 0; j < N; j++)
		{
			cin >> arr[j];
			sum = sum + arr[j];
		}
		avg = (float)sum / N;

		for (j = 0; j < N; j++)
		{
			if (arr[j] > avg)
				count++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (float)count / N * 100 << "%" << '\n';
		count = 0;
		sum = 0;
		delete[] arr;
	}
}