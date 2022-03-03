#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int N;

	cin >> N;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N-i-1; j++)
			cout << " ";
		for (j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
}