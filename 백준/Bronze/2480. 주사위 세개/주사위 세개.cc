#include <iostream>
using namespace std;

int main()
{
	/* 
	같은 눈이 3개가 나오면 10, 000원 + (같은 눈)×1, 000원의 상금을 받게 된다.
	같은 눈이 2개만 나오는 경우에는 1, 000원 + (같은 눈)×100원의 상금을 받게 된다.
	모두 다른 눈이 나오는 경우에는(그 중 가장 큰 눈)×100원의 상금을 받게 된다.
	*/

	int dice1, dice2, dice3;

	cin >> dice1 >> dice2 >> dice3;

	if (dice1 == dice2 && dice2 == dice3)
		cout << 10000 + dice1 * 1000;
	else if (dice1 == dice2 || dice2 == dice3 || dice1 == dice3)
	{
		if (dice1 == dice2 || dice1 == dice3)
			cout << 1000 + dice1 * 100;
		else if (dice2 == dice1 || dice2 == dice3)
			cout << 1000 + dice2 * 100;
		else
			cout << 1000 + dice3 * 100;
	}
	else
	{
		if ((dice1 > dice2 && dice2 > dice3 && dice1 > dice3) || (dice1 > dice2 && dice2 < dice3 && dice1 > dice3))
			cout << dice1 * 100;
		else if ((dice2 > dice1 && dice1 > dice3 && dice2 > dice3) || (dice2 > dice1 && dice1 < dice3 && dice2 > dice3))
			cout << dice2 * 100;
		else
			cout << dice3 * 100;
	}
}