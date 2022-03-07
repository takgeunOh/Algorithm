#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	string arr;
	int i;
	int sum = 0;

	cin >> N;
	cin >> arr;
	
	for (i = 0; i < N; i++)
	{
		// cout << arr[i] - '0' << '\n';
		sum = sum + arr[i] - '0';
	}

	cout << sum;
}