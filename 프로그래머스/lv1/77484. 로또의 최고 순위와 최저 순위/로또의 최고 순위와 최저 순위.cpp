#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    // 최고 순위 번호가 되려면 0인 애가 당첨번호 중에 속해있어야함.
	// 최저 순위 번호가 되려면 0인 애가 당첨번호 중에 아무것도 속해있지 않아야함.

	// 민우가 구매한 로또 번호를 담은 배열 lottos
	// 당첨 번호를 담은 배열 win_nums

	int best_count;
	int worst_count;
	int best_rank;
	int worst_rank;
	int count = 0;
	int zero_count = 0;
	vector<int> temp = win_nums;

	for (int i = 0; i < lottos.size(); i++) {
		if (lottos[i] != 0) {
			for (int j = 0; j < win_nums.size(); j++) {
				if (lottos[i] == temp[j]) {
					count++;
					temp[j] = -1;
				}
			}
		}
		else {
			zero_count++;
		}
	}

	/*for (int i = 0; i < temp.size(); i++)
		cout << temp[i] << " ";*/				// 정상 출력

	// -1, 10, 45, -1, 6, 19

	best_count = count + zero_count;
	worst_count = count;

	if (best_count == 6)
		best_rank = 1;
	else if (best_count == 5)
		best_rank = 2;
	else if (best_count == 4)
		best_rank = 3;
	else if (best_count == 3)
		best_rank = 4;
	else if (best_count == 2)
		best_rank = 5;
	else
		best_rank = 6;

	if (worst_count == 6)
		worst_rank = 1;
	else if (worst_count == 5)
		worst_rank = 2;
	else if (worst_count == 4)
		worst_rank = 3;
	else if (worst_count == 3)
		worst_rank = 4;
	else if (worst_count == 2)
		worst_rank = 5;
	else
		worst_rank = 6;


	answer = { best_rank, worst_rank };
    
    return answer;
}