#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int arr[10];
	int remainder[10];
	int count = 0;
	int flag = 0;

	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
		remainder[i] = arr[i] % 42;
	}

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (remainder[i] == remainder[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			count++;
		flag = 0;
	}

	cout << count;
}