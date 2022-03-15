#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
1 > 1
~7 > 2
~19 > 3
~37 > 4
~61 > 5

6
12
18
24
.
.
.*/
int main()
{
	int N;
	int count = 1;		//  벌집 개수 1부터
	int i;
	int count2=1;		// 반복 횟수

	cin >> N;

	while (N > count)
	{
		count = count + 6 * count2;
		count2++;
	}

	cout << count2;
}