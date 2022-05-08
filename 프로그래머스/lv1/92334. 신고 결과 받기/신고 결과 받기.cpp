#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

// 유저별 신고한 타 유저 리스트
map<string, set<string>> reportLog;
// 유저별 신고당한 횟수
map<string, int> reportCnt;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;

	for (string s : report) {
		int blank_idx = s.find(' ');
		string from = s.substr(0, blank_idx);
		string to = s.substr(blank_idx);

		// cout << from << ' ' << to << '\n';

		if (reportLog[from].find(to) == reportLog[from].end()) {
			// 리턴값이 v.end()인 경우 해당 원소가 존재하지 않는 것.
			// 즉, from이 to를 신고한 이력이 없는 경우
			reportCnt[to]++;		// to가 신고당한 횟수
			reportLog[from].insert(to);
		}
	}

	for (string s : id_list) {
		int count = 0;

		for (string str : reportLog[s]) {
			if (reportCnt[str] >= k)
				count++;
		}

		answer.push_back(count);
	}
    
    return answer;
}