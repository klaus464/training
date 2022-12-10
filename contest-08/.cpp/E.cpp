#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int i, j, limit = n * m, count = 0;
    vector<vector<int>> arr(n, vector<int>(m, 0));

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> arr[i][j];

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (arr[i][j] == 0)
                count++;

    if (count > (n * m) / 2)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
