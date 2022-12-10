#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    int i, j, input, count;
    std::vector<int> v;
    std::vector<int> a(n);
    std::vector<int> b(n);

    for (i = 0; i < n; i++)
    {
        cin >> m;
        count = 0;
        v.resize(m - 2, 0);

        for (j = 0; j < m; j++)
        {
            cin >> input;

            if (v[input - 1] == 0)
                v[input - 1] = input;
            else if (count == 0)
            {
                a[i] = input;
                count++;
            }
            else
                b[i] = input;
        }

        v.clear();
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            cout << a[i] << " " << b[i] << endl;
        else
            cout << b[i] << " " << a[i] << endl;
    }

    return 0;
}
