#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    // 대소문자 구분 X

    string str;
    int* arr;
    int i,j;
    int temp1;
    int temp2;
    int alph_length = 0;
    int arr_index;
    int max = 0;
    int save_index = 0;
    char result;
    int flag = 0;

    // A,B,C, ... , a,b,c, ...
    /*temp1 = 'B' - 'a';
    temp2 = 'b' - 'a';
    cout << temp1 << '\n';      
    cout << temp2;              
    */

    cin >> str;
    for (i = 'a'; i <= 'z'; i++)
        alph_length++;
    //cout << alph_length;    // 26개
    arr = new int[alph_length];
    for (i = 0; i < alph_length; i++)
        arr[i] = 0;
    
    for (i = 0; i < str.length(); i++)
    {
        if (str[i]-'a'<0)
        {
            // 아스키코드상 뒤쪽에 있는 소문자로 입력값을 뺐을 때 음수가 나오면 당연히 입력값은 대문자
            arr[str[i] - 'A']++;
        }
        else if (str[i] - 'a' >= 0)
        {
            arr[str[i] - 'a']++;
        }
    }
    /*
    for (i = 0; i < alph_length; i++)
        cout << arr[i];
    cout << '\n';
    */

    // ABCCC 반례 해결할 것
    for (i = 0; i < alph_length; i++)
    {
        if (arr[i] != 0 && arr[i] > max)
        {
            max = arr[i];
            save_index = i;
        }
    }
    // cout << max << '\n' << save_index << '\n';

    for (i = 0; i < alph_length; i++)
    {
        for (j = i+1; j < alph_length; j++)
        {
            if (arr[i] == arr[j] && arr[i]==max)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag==1)
        cout << '?';
    else
    {
        result = save_index + 'A';
        cout << result;
    }
}