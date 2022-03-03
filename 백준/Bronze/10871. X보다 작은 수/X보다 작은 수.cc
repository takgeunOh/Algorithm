#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int N;
	int* A;
	int X;

	cin >> N >> X;
	A = new int[N];

	for (i = 0; i < N; i++)
		cin >> A[i];

	for (i = 0; i < N; i++)
	{
		if (A[i] < X)
			cout << A[i] << " ";
	}
}