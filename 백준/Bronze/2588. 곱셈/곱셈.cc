#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int i,j;
	int rank = 1;
	int result=0;

	cin >> a;
	cin >> b;

	for (i = 0; i < 3; i++)
	{
		cout << a*(b / rank % 10) << endl;
		result = result + (a * (b / rank % 10) * rank);
		rank = rank * 10;
	}
	cout << result;
}