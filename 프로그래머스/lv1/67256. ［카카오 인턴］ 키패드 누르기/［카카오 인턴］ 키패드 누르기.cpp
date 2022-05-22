#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int keypad[4][3] = {{1,2,3},{4,5,6},{7,8,9},{-1,0,-2}};
    int l_x=0, l_y=3;
    int r_x=2, r_y=3;
    int l_d = 0, r_d=0;
    
    for(int i=0;i<numbers.size();i++) {
        if(numbers[i]==1 || numbers[i]==4 || numbers[i]==7) {
            answer = answer + 'L';
            if(numbers[i]==1) {
                l_x=0;
                l_y=0;
            } else if(numbers[i]==4) {
                l_x=0;
                l_y=1;
            } else {
                l_x=0;
                l_y=2;
            }
        }
        else if (numbers[i]==3 || numbers[i]==6 || numbers[i]==9) {
            answer = answer + 'R';
            if(numbers[i]==3) {
                r_x=2;
                r_y=0;
            } else if(numbers[i]==6) {
                r_x=2;
                r_y=1;
            } else {
                r_x=2;
                r_y=2;
            }
        }
        else {
            if(numbers[i]==2) {
                l_d = abs(1-l_x) + abs(0-l_y);
                r_d = abs(1-r_x) + abs(0-r_y);
                if(l_d<r_d) {
                    answer = answer + 'L';
                    l_x=1;
                    l_y=0;
                } else if(l_d>r_d) {
                    answer = answer + 'R';
                    r_x=1;
                    r_y=0;
                } else {
                    if(hand=="left") {
                        answer = answer + 'L';
                        l_x=1;
                        l_y=0;
                    } else {
                        answer = answer + 'R';
                        r_x=1;
                        r_y=0;
                    }
                }
            } else if(numbers[i]==5) {
                l_d = abs(1-l_x) + abs(1-l_y);
                r_d = abs(1-r_x) + abs(1-r_y);
                if(l_d<r_d) {
                    answer = answer + 'L';
                    l_x=1;
                    l_y=1;
                } else if(l_d>r_d){
                    answer = answer + 'R';
                    r_x=1;
                    r_y=1;
                } else {
                    if(hand=="left") {
                        answer = answer + 'L';
                        l_x=1;
                        l_y=1;
                    } else {
                        answer = answer + 'R';
                        r_x=1;
                        r_y=1;
                    }
                }
            } else if(numbers[i]==8) {
                l_d = abs(1-l_x) + abs(2-l_y);
                r_d = abs(1-r_x) + abs(2-r_y);
                if(l_d<r_d) {
                    answer = answer + 'L';
                    l_x=1;
                    l_y=2;
                } else if(l_d>r_d){
                    answer = answer + 'R';
                    r_x=1;
                    r_y=2;
                } else {
                    if(hand=="left") {
                        answer = answer + 'L';
                        l_x=1;
                        l_y=2;
                    } else {
                        answer = answer + 'R';
                        r_x=1;
                        r_y=2;
                    }
                }
            } else if(numbers[i]==0) {
                l_d = abs(1-l_x) + abs(3-l_y);
                r_d = abs(1-r_x) + abs(3-r_y);
                if(l_d<r_d) {
                    answer = answer + 'L';
                    l_x=1;
                    l_y=3;
                } else if(l_d>r_d){
                    answer = answer + 'R';
                    r_x=1;
                    r_y=3;
                } else {
                    if(hand=="left") {
                        answer = answer + 'L';
                        l_x=1;
                        l_y=3;
                    } else {
                        answer = answer + 'R';
                        r_x=1;
                        r_y=3;
                    }
                }
            }
        }
        
    }
        
    return answer;
}