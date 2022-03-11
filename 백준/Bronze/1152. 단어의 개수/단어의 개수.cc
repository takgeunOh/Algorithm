#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*

영어 대소문자와 공백으로 이루어진 문자열이 주어진다.이 문자열에는 몇 개의 단어가 있을까 ? 
이를 구하는 프로그램을 작성하시오.단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
단어는 공백 하나로 구분.
공백이 연속해서 나오는 케이스는 없음.
문자열은 공백으로 시작하거나 끝날 수 있음을 유념.

*/
int main()
{
    string input;
    int i;
    int count = 0;
    int flag1 = 0;
    int flag2 = 0;

    getline(cin, input);
    
    // 음.. 해당 자리가 공백이 끝나고 다음 자리에 단어가 오면 카운트해보자. (마지막 문자열은 어차피 끝에 '\0' 있으니까..)
    for (i = 0; i < input.length(); i++)
    {
        // cout << input[i];
        if (input[i] == ' ' && input[i+1]!=' ')
        {
            if (input[0] == ' ')
                flag1 = 1;
            if (input[i + 1] == '\0')
                flag2 = 1;
            count++;
        }
    }

    if (flag1 == 0 && flag2 == 0)     // 양끝에 공백이 없는 경우 count+1해서 출력
        cout << count + 1;
    else if (flag1 == 1 && flag2 == 0)// 처음에 공백이 있고 끝에 공백이 없는 경우 count 해서 출력
        cout << count;
    else if (flag1 == 0 && flag2 == 1)// 처음에 공백이 없고 끝에 공백이 있는 경우 count 출력
        cout << count;
    else if (flag1 == 1 && flag2 == 1)  // 양끝에 공백이 있는 경우 count-1해서 출력
        cout << count - 1;
}