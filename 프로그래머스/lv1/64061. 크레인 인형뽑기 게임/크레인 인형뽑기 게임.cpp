#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;
    int i, j;
    int flag = 0;

    // move해서 최초로 만나는 애를 집고 바구니에 담기
    for (i = 0; i < moves.size(); i++) {
        for (j = 0; j < board.size(); j++) {
            if (board[j][moves[i] - 1] != 0) {
                // 움직여서 인형이 집히면
                // cout << board[j][moves[i] - 1];
                basket.push_back(board[j][moves[i] - 1]);

                // 인형이 집히면 board 갱신하고 곧바로 탐색 종료
                board[j][moves[i] - 1] = 0;
                break;
            }
        }
    }

    while (1) {
        flag = 0;
        if (basket.size() == 0)
            break;
        for (i = 0; i < basket.size()-1; i++) {
            if (basket[i] == basket[i + 1]) {
                answer = answer + 2;
                basket.erase(basket.begin() + i);
                basket.erase(basket.begin() + i);
               /* for (j = 0; j < basket.size(); j++)
                    cout << basket[j] << '\n';
                cout << '\n';*/
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    return answer;
}