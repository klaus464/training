#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0, sum = 0;
    string str = to_string(n);

    while (i < str.length())
        sum += str[i++] - 48;

    if (n % sum == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
