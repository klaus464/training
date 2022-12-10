#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    int i, j;
    vector<int> diagonal_sum(199, 0);
    vector<vector<int>> arr(100, vector<int>(100, 0));

    while (t--)
    {
        cin >> n;
        arr.resize(n, vector<int>(n, 0));
        std::fill(arr.begin(), arr.end(), vector<int>(n, 0));

        diagonal_sum.resize(2 * n - 1, 0);
        std::fill(diagonal_sum.begin(), diagonal_sum.end(), 0);

        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> arr[i][j];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i - j < 0)
                    diagonal_sum[n - 1 - abs(i - j)] += arr[i][j];
                else if (i - j > 0)
                    diagonal_sum[n - 1 + abs(i - j)] += arr[i][j];
                else
                    diagonal_sum[n - 1] += arr[i][j];
            }
        }

        for (i = 0; i < 2 * n - 1; i++)
            cout << diagonal_sum[i] << " ";
        cout << endl;
    }
    return 0;
}
