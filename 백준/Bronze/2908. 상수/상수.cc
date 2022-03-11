#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
    734 893이 입력되면 437 398 중 큰 수 출력
    두 수는 같지 않은 세 자리 수
    0이 포함되어 있지 않다
*/

int main()
{
    int A, B;
    int temp_a[3] = { 0, }, temp_b[3] = { 0, };
    int r = 1;
    int i;
    int result_a, result_b;

    cin >> A >> B;

    for (i = 0;i<3; i++)
    {
        temp_a[i] = A / r % 10;
        temp_b[i] = B / r % 10;

        r = r * 10;
    }

    result_a = temp_a[0] * 100 + temp_a[1] * 10 + temp_a[2];
    result_b = temp_b[0] * 100 + temp_b[1] * 10 + temp_b[2];

    if (result_a > result_b)
        cout << result_a;
    else
        cout << result_b;
}