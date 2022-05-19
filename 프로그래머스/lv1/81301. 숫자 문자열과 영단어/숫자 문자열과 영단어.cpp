#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int r=1;
    string temp="";
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            temp = temp + s[i];
        }
        else {
            if (s[i] == 'z') {
                temp = temp + '0';
                i = i + 3;
            }
            else if (s[i] == 'o') {
                temp = temp + '1';
                i = i + 2;
            }
            else if (s[i] == 't') {
                if (s[i + 1] == 'w') {
                    temp = temp + '2';
                    i = i + 2;
                }
                else {
                    temp = temp + '3';
                    i = i + 4;
                }
            }
            else if (s[i] == 'f') {
                if (s[i + 1] == 'o') {
                    temp = temp + '4';
                    i = i + 3;
                }
                else {
                    temp = temp + '5';
                    i = i + 3;
                }
            }
            else if (s[i] == 's') {
                if (s[i + 1] == 'i') {
                    temp = temp + '6';
                    i = i + 2;
                }
                else {
                    temp = temp + '7';
                    i = i + 4;
                }
            }
            else if (s[i] == 'e') {
                if (s[i + 1] == 'i') {
                    temp = temp + '8';
                    i = i + 4;
                }
            }
            else {
                temp = temp + '9';
                i = i + 3;
            }
        }
    }

    for (int i = 0; i < temp.length(); i++) {
        answer = answer + (temp[temp.length() - i - 1]-'0') * r;
        r = r * 10;
    }
    
    return answer;
}