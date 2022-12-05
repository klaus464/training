#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int i = 0, sum = 0;
    while (i < str.length())
        sum += str[i++] - 48;

    cout << sum;
    return 0;
}
