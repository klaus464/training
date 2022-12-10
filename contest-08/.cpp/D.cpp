#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int i, j;
    vector<vector<int>> arr(n, vector<int>(m, 0));

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> arr[i][j];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[j][i] << " ";

        cout << endl;
    }

    return 0;
}
