#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, i, j, k;
    vector<vector<int>> arr(100, vector<int>(100, 0));

    for (i = 0; i < t; i++)
    {
        cin >> n;

        for (j = 0; j < n; j++)
            for (k = 0; k < n; k++)
                cin >> arr[j][k];

        cout << "Test Case #" << i + 1 << ":" << endl;

        for (j = 0; j < n; j++)
        {
            for (k = n - 1; k >= 0; k--)
                cout << arr[k][j] << " ";

            cout << endl;
        }
    }

    return 0;
}
