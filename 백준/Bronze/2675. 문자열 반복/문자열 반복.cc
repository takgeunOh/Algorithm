#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	int R;
	string S;
	string P;
	int i, j, k;

	cin >> T;
	for (i = 0; i < T; i++)
	{
		cin >> R >> S;
		for (j = 0; j < S.length(); j++)
		{
			for (k = 0; k < R; k++)
				cout << S[j];
		}
		cout << '\n';
	}
}