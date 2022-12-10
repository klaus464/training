#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n1, m1;
    int n2, m2;
    int i, j;
    int x, temp;

    while (t--)
    {
        cin >> n1 >> m1;
        vector<vector<int>> arr1(n1, vector<int>(m1, 0));

        for (i = 0; i < n1; i++)
            for (j = 0; j < m1; j++)
                cin >> arr1[i][j];

        cin >> n2 >> m2;
        vector<vector<int>> arr2(n2, vector<int>(m2, 0));

        for (i = 0; i < n2; i++)
            for (j = 0; j < m2; j++)
                cin >> arr2[i][j];

        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < m2; j++)
            {
                temp = 0;
                for (x = 0; x < m1; x++)
                {
                    temp += arr1[i][x] * arr2[x][j];
                }
                cout << temp << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
