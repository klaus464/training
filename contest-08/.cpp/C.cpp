#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int i, j, temp;
    vector<vector<int>> arr(n, vector<int>(m, 0));

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> arr[i][j];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> temp;
            arr[i][j] += temp;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }

    return 0;
}
