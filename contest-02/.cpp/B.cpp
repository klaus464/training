#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num;
    cin >> num;

    bool is_negative = false;
    if (num < 0)
    {
        is_negative = true;
        num *= -1;
    }

    long long int rev_num = 0;
    while (num)
    {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }

    if (is_negative)
        rev_num *= -1;
    cout << rev_num;
    return 0;
}