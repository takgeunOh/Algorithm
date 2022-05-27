#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    int i;
    for(i=0;i<completion.size();i++) {
        if(participant[i]!=completion[i])
            break;
    }
    
    answer = participant[i];
    
    
    return answer;
}