#include <iostream>
using namespace std;

int main()
{
	int N;
	int i;

	cin >> N;

	for (i = N; i > 0; i--)
		cout << i << '\n';
	// endl 사용 시 시간초과 발생
	/* 
	cout, cin, endl 은 C언어의 printf, scanf, \n 보다 연산속도가 오래걸리므로
	시간 초과로 인한 문제는 cout, cin, endl 중 일부를 printf, scanf, \n로 수정하는 방법으로 해결 가능하다.
	*/
}