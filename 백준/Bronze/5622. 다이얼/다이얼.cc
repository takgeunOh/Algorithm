#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
    숫자 1을 걸려면 총 2초가 필요
    한 칸 옆에 있는 숫자를 걸기 위해서는 1초씩 더 걸린다.
    1 >
    2 > ABC
    3 > DEF
    4 > GHI
    5 > JKL
    6 > MNO
    7 > PQRS
    8 > TUV
    9 > WXYZ
    0
    UNUCIC = 868242
*/

int main()
{
    string input;
    int* time;
    int i;
    int sum = 0;

    cin >> input;
    time = new int[input.length()];

    for (i = 0; i < input.length(); i++)
    {
        if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
            time[i] = 3;
        else if (input[i] == 'D' || input[i] == 'E' || input[i] == 'F')
            time[i] = 4;
        else if (input[i] == 'G' || input[i] == 'H' || input[i] == 'I')
            time[i] = 5;
        else if (input[i] == 'J' || input[i] == 'K' || input[i] == 'L')
            time[i] = 6;
        else if (input[i] == 'M' || input[i] == 'N' || input[i] == 'O')
            time[i] = 7;
        else if (input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S')
            time[i] = 8;
        else if (input[i] == 'T' || input[i] == 'U' || input[i] == 'V')
            time[i] = 9;
        else if (input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z')
            time[i] = 10;
    }

    for (i = 0; i < input.length(); i++)
    {
        sum = sum + time[i];
    }
    cout << sum;
}