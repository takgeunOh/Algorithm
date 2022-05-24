#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    
    for(int i=0;i<absolutes.size();i++) {
        if(signs[i])
            answer = answer + absolutes[i];
        else
            answer = answer - absolutes[i];
    }
    return answer;
}