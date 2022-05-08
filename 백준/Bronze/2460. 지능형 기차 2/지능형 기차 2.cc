#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
	
	// 기차 안에 사람이 가장 많을 때의 수 계산
	int total=0;
	int max=0;
	int i;
	int in, out;

	for (i = 0; i < 10; i++) {
		cin >> out >> in;
		total = total + in - out;
		if (total > max) {
			max = total;
		}
		// cout << total;
	}

	cout << max;
}