#include <iostream>
using namespace std;

int main()
{
	int A, B;
	int i = 0;

	while (!(cin >> A >> B).eof()) {
		cout << A + B << "\n";
	}
}