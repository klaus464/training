#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = 0, d = n - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << i + k << " ";
            k += d--;
            if (i == j)
            {
                cout << "\n";
            }
        }
    }

    return 0;
}