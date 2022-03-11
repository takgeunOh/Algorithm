#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string input;
    string list[8] = { {"c="},{"c-"},{"dz="},{"d-"},{"lj"},{"nj"},{"s="},{"z="} };         // 크로아티아 알파벳 리스트
    int i;
    int count = 0;
    int flag1 = 0;          // 2글자 전용
    int flag2 = 0;          // 3글자 전용

    cin >> input;

    /*
    for (i = 0; i < 8; i++)
    {
        cout << list[i];
    } // 크로아티아 알파벳 리스트 출력 확인
    */


    // abcc-c=dd-dz=efghijklljmnnjoprss=tuvzz=dzempersljjlljnjjnnjjdzz=d-z > 52 반례 확인할 것

    for (i = 0; i < input.length(); i++)
    {
        if (input[i] == 'c' && input[i+1]=='=' || input[i]=='c' && input[i+1]=='-')
        {
            count++;
            flag1 = 1;
        }
        else if (input[i + 1] != '\0' && input[i] == 'd' && input[i + 1] == 'z' && input[i+2]=='=')           // 잘못된 메모리 접근을 막기 위해
        {
            count++;
            flag2 = 1;
        }
        else if (input[i] == 'd' && input[i + 1] == '-')
        {
            count++;
            flag1 = 1;
        }
        else if (input[i] == 'l' && input[i + 1] == 'j')
        {
            count++;
            flag1 = 1;
        }
        else if (input[i] == 'n' && input[i + 1] == 'j')
        {
            count++;
            flag1 = 1;
        }
        else if (input[i] == 's' && input[i + 1] == '=')
        {
            count++;
            flag1 = 1;
        }
        else if (input[i] == 'z' && input[i + 1] == '=')
        {
            count++;
            flag1 = 1;
        }
        else
            count++;

        if (flag1 == 1)
            i++;
        if (flag2 == 1)
            i = i + 2;
        flag1 = 0;
        flag2 = 0;
    }

    cout << count;
}