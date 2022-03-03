#include <iostream>
using namespace std;

int main()
{
	int A, B;
	int C;

	cin >> A >> B;
	cin >> C;

	if (B + C < 60)
	{
		cout << A << " " << B + C;
	}
	else
	{
		if((A+(B+C)/60)%24!=0)
			cout << (A + (B + C) / 60) % 24 << " " << (B + C) % 60;
		else
			cout << 0 << " " << (B + C) % 60;
	}
}