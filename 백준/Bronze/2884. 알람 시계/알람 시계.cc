#include <iostream>
using namespace std;

int main()
{
	int h, m;

	cin >> h >> m;

	if (h > 0)
	{
		if (m >= 45)
			cout << h << " " << (m - 45);
		else
			cout << (h - 1) << " " << 60 + (m - 45);
	}
	else
	{
		if (m >= 45)
			cout << h << " " << (m - 45);
		else
			cout << 23 << " " << 60 + (m - 45);
	}
}