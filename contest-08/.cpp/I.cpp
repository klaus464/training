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

        for (j = 0; j < n; j++)
        {
            for (k = j; k < n - 1 - j; k++)
                cout << arr[j][k] << " ";

            for (k = j; k < n - 1 - j; k++)
                cout << arr[k][n - 1 - j] << " ";

            for (k = j; k < n - 1 - j; k++)
                cout << arr[n - 1 - j][n - 1 - k] << " ";

            for (k = j; k < n - 1 - j; k++)
                cout << arr[n - 1 - k][j] << " ";
        }

        if (n % 2 == 1)
            cout << arr[n / 2][n / 2] << " " << endl;
        else
            cout << endl;
    }

    return 0;
}
