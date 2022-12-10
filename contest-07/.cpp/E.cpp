#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, i, j, day;
    std::vector<int> days(100, 0);
    std::vector<int> friends(t, 0);

    for (i = 0; i < t; i++)
    {
        cin >> n;
        std::fill(days.begin(), days.end(), 0);

        for (j = 0; j < n; j++)
        {
            cin >> day;
            days[day - 1]++;
        }

        for (j = 0; j < 100; j++)
        {
            if (days[j] > 1)
                friends[i] += days[j] - 1;
        }

        friends[i] = n - friends[i];
    }

    for (i = 0; i < t; i++)
        cout << friends[i] << endl;

    return 0;
}
