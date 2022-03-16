#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int X;
	int i, j;
	int left_value=1, right_value=1;
	int repeat = 0;
	int flag1 = 0, flag2 = 0;
	int left_direction = 1;
	int right_direction = 1;
	int count = 0;

	cin >> X;

	for (i = 0;; i++)
	{
		if (count >= X)
			break;

		if ((i + 1) % 2 == 0)
		{
			// 짝수일 때 분자는 증가, 분모는 감소
			left_value = 1;
			right_value = i + 1;
			flag1 = 1;
		}
		else
		{
			// 홀수일 때 분자는 감소, 분모는 증가
			left_value = i + 1;
			right_value = 1;
			flag2 = 1;
		}

		for (j = 0; j <= i; j++)
		{
			count++;
			if (count == X)
				break;
			//cout << left_value << "/" << right_value << '\n';

			if (flag1 == 1)
			{
				left_value++;
				right_value--;
			}
			if (flag2 == 1)
			{
				right_value++;
				left_value--;
			}
		}
		//cout << "----------------------------------" << '\n';
		flag1 = 0;
		flag2 = 0;
	}
	
	cout << left_value << '/' << right_value;

}