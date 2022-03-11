#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    int i,j,k;
    string input;
    int count = 0;
    int flag = 0;

    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> input;
        for (j = 1; j < input.length(); j++)
        {
            for (k = 0; k < j; k++)
            {
                if (input[j] == input[k] && input[j]!=input[j-1])
                    flag = 1;
            }
        }
        // cout << flag;
        if (flag == 0)
            count++;
        flag = 0;
    }
    cout << count;
}