#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string S;
	int* result;
	int i, j;
	int index = 0;
	int flag = 0;

	cin >> S;
	// 알파벳은 소문자로만
	// cout << S.length();
	/* for (i = 'a'; i < 'z'; i++)
		count++;
	cout << count;
	알파벳 25개
	*/
	result = new int[25];
	
	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < S.length(); j++)
		{
			if (S[j] == i)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			result[i-'a'] = -1;
		else
			result[i-'a'] = j;
		flag = 0;
	}

	for (i = 'a'; i <= 'z'; i++)
		cout << result[i-'a'] << " ";
}