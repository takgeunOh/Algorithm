#include <iostream>
using namespace std;

int main()
{
	int tc;
	int i, j;
	string arr;
	int score = 0;
	int sum = 0;

	cin >> tc;
	for (i = 0; i < tc; i++)
	{
		cin >> arr;
		for (j = 0;; j++)
		{
			if (arr[j] == '\0')
				break;

			if (arr[j] == 'O')
				score++;
			else if (arr[j] == 'X')
				score = 0;
			sum = sum + score;
		}
		cout << sum << '\n';
		sum = 0;
		score = 0;
	}
}