#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    int i, j;
    long long int temp, sum[n];
    for (i = 0; i < n; i++)
    {
        cin >> m;
        sum[i] = 0;
        for (j = 0; j < m; j++)
        {
            cin >> temp;
            sum[i] += temp;
        }
    }

    for (i = 0; i < n; i++)
        cout << sum[i] << endl;

    return 0;
}
