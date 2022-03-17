#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // 1 <= B < A <= V <= 1,000,000,000
    // 낮에 A미터 올라가고, 잠을 자는 동안엔 B미터 떨어지고
    // 정상에 올라간 후에는 미끄러지지 않는당
    // 높이가 V미터인 나무 막대를 올라가려면 며칠이 걸릴까?

    // 시간초과가 되는 것을 막기 위하여 (반복문 쓰면 시간 초과....)
    // 최종적으로 가야하는 목표는 V가 아닌 V-A까지만 가면 다음날 아침에 A만큼 올라서 정상에 다다른다는 것을 이용하자.

    // 속력 = 거리/시간
    int A, B, V;
    int day;
    int height = 0;

    cin >> A >> B >> V;

    V = V - A;
    day = V / (A - B);

    //cout << day;

    if(V%(A-B)!=0)
        day = day + 1;
    day = day + 1;
    cout << day;
}