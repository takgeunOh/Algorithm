#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    
    int answer=1;
    int i;
    queue<char> doc;
    queue<int> prior;
    char find;
    char temp_ch;
    int temp_prior;
    queue<char> temp_doc_q;
    queue<int> temp_prior_q;
    int flag=0;
    queue<char> result_q;
    
    for(i=0;i<priorities.size();i++) {
        doc.push('A'+i);
        prior.push(priorities[i]);
        if(i==location)
            find = doc.back();
    }
    
    while(!doc.empty()) {
        temp_ch = doc.front();
        doc.pop();
        temp_prior = prior.front();
        prior.pop();
        
        temp_prior_q = prior;
        while(!temp_prior_q.empty()) {
            if(temp_prior<temp_prior_q.front()) {
                doc.push(temp_ch);
                prior.push(temp_prior);
                flag=1;
                break;
            }
            temp_prior_q.pop();
        }
        if(flag==0)
            result_q.push(temp_ch);
        flag=0;
    }
    
    while(!result_q.empty()) {
        if(find==result_q.front()) {
            break;
        }
        result_q.pop();
        answer++;
    }
    
    
    return answer;
}