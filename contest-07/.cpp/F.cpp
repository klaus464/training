#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, k, x, y, sum, girls_impressed;
    std::vector<int> no_of_girls;

    while (t--)
    {
        cin >> n >> k;
        no_of_girls.clear();
        no_of_girls.resize(n, 0);

        for (x = 0; x < n; x++)
            cin >> no_of_girls[x];

        girls_impressed = 0;
        for (x = 0; x < n - k + 1; x++)
        {
            sum = 0;
            for (y = x; y < x + k; y++)
            {
                sum += no_of_girls[y];
                girls_impressed = max(girls_impressed, sum);
            }
        }

        cout << girls_impressed << endl;
    }

    return 0;
}
