#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int i, j, temp, sum;

    for (i = 0; i < n; i++)
    {
        sum = 0;
        for (j = 0; j < m; j++)
        {
            cin >> temp;
            sum += temp;
        }

        cout << sum << endl;
    }

    return 0;
}
