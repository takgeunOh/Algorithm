#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    // 아이디 길이는 3자 이상 15자 이하
	// 알파벳 소문자, 숫자, -, _, . 문자만 사용 가능
	// .는 처음과 끝에 사용 불가하며 연속으로도 사용 불가

	string answer = "";
	int count = 0;
	int i;

	for (i = 0; i < new_id.length(); i++) {
		// 1단계
		if (new_id[i] >= 'A' && new_id[i] <= 'Z') {
			count = new_id[i]-'A';
			new_id[i] = 'a' + count;
		}
	}

	// cout << "1단계 후" + new_id << '\n';

	for (i = 0; i < new_id.length(); i++) {
		// 2단계
		if (!((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9') || (new_id[i] == '-')
			|| (new_id[i] == '_') || (new_id[i] == '.'))) {
			string temp = new_id.substr(0, i);
			temp = temp + new_id.substr(i + 1, new_id.size() - (i + 1));
			new_id = temp;
			i--;
		}
	}

	// cout << "2단계 후" + new_id << '\n';


	for (i = 0; i < new_id.length(); i++) {
		// 3단계
		if (new_id.length() >= 2) {
			if (new_id[i] == '.' && new_id[i + 1] == '.') {
				string temp = new_id.substr(0, i);
				temp = temp + new_id.substr(i + 1, new_id.size() - (i + 1));
				new_id = temp;
				i--;
			}
		}
	}

	// cout << "3단계 후" + new_id << '\n';

	// 4단계
	if (new_id[0] == '.') {
		string temp = "";
		temp = temp + new_id.substr(1, new_id.size() - 1);
		new_id = temp;
	}
	if (new_id.length() >=2 && new_id[new_id.length() - 1] == '.') {
		new_id.pop_back();
		// i--;
	}

	// cout << "4단계 후" + new_id << '\n';

	if (new_id.length() == 0)
		new_id = new_id + 'a';

	// cout << "5단계 후" + new_id << '\n';


	// 6단계
	while (new_id.length() >= 16)
		new_id.pop_back();
	// 만약 제거 후 마침표가 끝에 남아있으면 그것도 제거
	if (new_id.length() >= 2 && new_id[new_id.length() - 1] == '.')
		new_id.pop_back();

	// cout << "6단계 후" + new_id << '\n';


	// 7단계
	if (new_id.length() > 0 && new_id.length() <= 2) {
		while (new_id.length() < 3) {
			new_id = new_id + new_id[new_id.length() - 1];
		}
	}

	// cout << "7단계 후" + new_id << '\n';

	answer = new_id;
    return answer;
}