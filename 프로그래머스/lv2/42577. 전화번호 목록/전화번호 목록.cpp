#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    
    // 전화번호부에 적힌 전화번호를 담은 배열 phone_book
    bool answer = true;
    int i;
    
    sort(phone_book.begin(), phone_book.end());
    
    for(i=0;i<phone_book.size()-1;i++) {
        if(phone_book[i]==phone_book[i+1].substr(0, phone_book[i].size()))
            return false;
    }
    return true;

}