#include <iostream>
#include <vector>
using namespace std;

int d(int n);

int main()
{
	int n=1;
	int temp[10026] = { 0, };
	int result;
	
	while (1)
	{
		result = d(n);
		if (result>10026)
			break;

		// cout << d(n) << '\n'; 
		// 셀프넘버가 아닌 숫자 출력 확인
		// 이 숫자들을 인덱스로 해서 셀프넘버가 아닌 숫자인 인덱스에는 1값을 주기로 하자.

		temp[result] = 1;

		n++;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (temp[i] == 0)
			cout << i << '\n';
	}
}

int d(int n)
{
	int sum = 0;
	int temp = n;

	while (1)
	{
		if (temp == 0)
			break;
		sum = sum + (temp % 10);
		temp = temp / 10;
	}

	return n + sum;
}