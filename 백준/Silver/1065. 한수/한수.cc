#include <iostream>
#include <vector>
using namespace std;

int hansoo(int n);

int main()
{
	int n;
	int count = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (hansoo(i))
			count++;
	}

	cout << count;
}

int hansoo(int n)	// 한수 조건 구현
{
	int temp = n;

	if (n < 100)
		return 1;	// 100 미만은 모두 한수 취급
	else
	{
		if ((temp / 100 - temp / 10 % 10) == (temp / 10 % 10 - temp % 10))
			return 1;
	}

	return 0;	// 위 조건 모두 불만족 시 한수 아님.
}