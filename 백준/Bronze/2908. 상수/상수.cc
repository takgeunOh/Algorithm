#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
	int a, b;
	int i;
	int ra = 0 , rb = 0;
	int tempa, tempb;
	int r = 100;

	cin >> a >> b;

	for (i = 0; i < 3; i++) {
		tempa = a % 10;
		tempb = b % 10;

		ra = ra + tempa * r;
		rb = rb + tempb * r;

		r = r / 10;
		a = a / 10;
		b = b / 10;
	}

	// cout << ra << ", " << rb;

	if (ra > rb)
		cout << ra;
	else
		cout << rb;
}