#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int i;
    int flag = 0;

    for (i = 0; i < n; i++)
    {
        if (flag == 0)
        {
            answer.append("수");
            flag = 1;
        }
        else if (flag == 1)
        {
            answer.append("박");
            flag = 0;
        }
    }
    return answer;
}