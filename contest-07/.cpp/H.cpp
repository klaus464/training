#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int i, j;
    int n, temp, dom, count;
    vector<int> v(1000, 0);

    for (i = 0; i < t; i++)
    {
        cin >> n;
        std::fill(v.begin(), v.end(), 0);

        for (j = 0; j < n; j++)
        {
            cin >> temp;
            v[temp - 1]++;
        }

        dom = 0;
        count = 0;
        for (j = 0; j < 1000; j++)
        {
            if (v[j] > dom)
            {
                dom = v[j];
                count = 1;
            }
            else if (v[j] == dom)
                count = 2;
        };

        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}