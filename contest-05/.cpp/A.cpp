#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n], c[n], i, count = 0;

    for (i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];

    for (i = 0; i < n; i++)
    {
        if (a[i] + b[i] + c[i] >= 2)
            count++;
    }

    cout << count;
    return 0;
}