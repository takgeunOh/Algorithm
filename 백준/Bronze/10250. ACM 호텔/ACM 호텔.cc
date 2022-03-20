#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	
	// 호텔 정문으로부터 가장 짧은 거리에 있는 방 선호 >> 이 거리가 가장 짧도록 방을 배정하는 프로그램 만들기

	// 호텔은 직사각형이라 가정
	// 각 층에 W개의 방이 있는 H층 건물 (1 <= H,W <= 99) (H x W 형태의 호텔)
	// 엘베는 가장 왼쪽에 있다 가정
	// 호텔의 정문은 1층 엘리베이터 바로 앞
	// 단, 정문에서 엘베까지의 거리는 무시
	// 모든 인접한 두 방 사이의 거리는 같은 거리(거리 1)
	// 호텔의 정면 쪽에만 방이 있다고 가정

	// 방 번호 : YXX or YYXX 형태 (Y는 층수, X는 엘리베이터에서부터 세었을 때의 번호)
	// 엘리베이터를 타고 이동하는 거리는 신경쓰지 않으나, 걷는 거리가 같다면 아래층 선호
	// 102호 방보다는 301호방을 더 선호 (102호는 거리 2만큼 걷고, 301호는 거리 1만큼만 걸으면 되기 때문), 102호보다 2101호를 더 선호

	// 초기에 모든 방이 비어있다고 가정하고 위와 같은 정책에 따라 N번째로 도착한 손님에게 배정될 방 번호 계산하기 (첫 손님은 101호, 두 번째 손님은 102호 등)

	int T;
	int H, W, N;			// 호텔의 층, 각 층의 방 수, 몇 번째 손님
	int i, j, k;
	int result;
	int arr[99][99] = { 0, };
	int count = 0;
	int result_H=0, result_W=0;
	int flag = 0;

	cin >> T;
	
	for (i = 0; i < T; i++) {
		cin >> H >> W >> N;
		
		for (j = 1; j <= W; j++) {
			for (k = 1; k <= H; k++) {
				count++;
				if (count == N) {
					result_W = j;
					result_H = k;
					flag = 1;
					break;
				}
			}
			// cout << count << '\n';
			if (flag == 1)
				break;
		}

		cout << result_H * 100 + result_W << '\n';
		count = 0;
		flag = 0;
	}
}