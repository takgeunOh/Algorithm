#include <iostream>
using namespace std;

int main()
{
	int T;
	int A, B;
	int i;

	cin >> T;
	
	for (i = 0; i < T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << '\n';
	}
}