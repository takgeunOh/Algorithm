#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int i;
	int result;
	int arr[10] = { 0, };	// 0~9 갯수 넣을 배열
	int count = 0;
	int digit;

	cin >> a;
	cin >> b;
	cin >> c;

	result = a * b * c;
	
	/* for (i = 0;; i++)
	{
		if (result == 0)
			break;
		result = result / 10;
		count++;
	}
	cout << count;
	*/

	for (;;)
	{
		if (result == 0)
			break;
		digit = result % 10;
		arr[digit] = arr[digit] + 1;
		result = result / 10;
	}

	for (i = 0; i < 10; i++)
		cout << arr[i] << '\n';
}