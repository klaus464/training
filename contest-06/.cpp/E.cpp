#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    std::vector<int> v(n);

    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                cout << v[i];
                return 0;
            }
        }
    }
}
