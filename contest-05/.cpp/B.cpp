#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = 0;

    if (a == b)
        count++;
    else if (a == c)
        count++;
    else if (a == d)
        count++;

    if (b == c)
        count++;
    else if (b == d)
        count++;

    if (c == d)
        count++;

    cout << count;
    return 0;
}