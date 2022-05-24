#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int flag=0;
    
    for(int i=0;i<=9;i++) {
        for(int j=0;j<numbers.size();j++) {
            if(i==numbers[j]) {
                flag=1;
                break;
            }
        }
        if(flag==0)
            answer = answer + i;
        flag=0;
    }
    return answer;
}