#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    // 배포되어야 하는 순서대로 작업의 진도가 적힌 progresses
    // 각 작업의 개발 속도가 적힌 speeds
    vector<int> answer;
    int i,j;
    int temp;
    vector<int> day;
    int countDay=0;
    int count=1;
    queue<int> q;
    int save;
    int flag=0;
    queue<int> temp_q;
    
    for(i=0;i<progresses.size();i++) {
        temp = progresses[i];
        while(temp<100) {
            temp = temp + speeds[i];
            countDay++;
        }
        day.push_back(countDay);            // day는 정상 저장
        countDay=0;
    }
    
    // 7 3 9 -> 2 1
    // 5 10 1 1 20 1 -> 1 3 2
    // 큐 냄새 난다.
    // 앞에꺼 나갈 때 바로 뒤에 있는 애가 앞에 나간 애보다 작으면 걔도 나가면서 카운트하고 다음으로 넘어가기
    // 앞에꺼 나갈 떄 바로 뒤에 있는 애가 앞에 나간 애보다 크면 다음으로 넘어가기
    for(i=0;i<day.size();i++) {
        q.push(day[i]);                 // 큐도 정상 저장
    }
    
    
    while(!q.empty()) {
        save = q.front();
        q.pop();
        if(q.size()==0) {
            answer.push_back(count);
            break;
        }
        else if(save >= q.front()) {
            temp_q = q;
            while(!temp_q.empty()) {
                if(save>=temp_q.front()) {
                    count++;
                    temp_q.pop();
                } else {
                    q=temp_q;
                    break;
                }
                q=temp_q;
            }
            answer.push_back(count);
        } else if (save < q.front()) {
            answer.push_back(count);
        }
        
        count=1;
    }
    
    return answer;
}