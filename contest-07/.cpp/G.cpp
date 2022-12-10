#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, i, j;
    double result, input;
    std::vector<double> flasks;

    for (i = 0; i < t; i++)
    {
        cin >> n;
        flasks.clear();

        for (j = 0; j < n; j++)
        {
            cin >> input;
            flasks.push_back(input);
        }

        std::sort(flasks.begin(), flasks.end());
        result = flasks[n - 1];

        for (j = n - 2; j >= 0; j--)
            result = (result + flasks[j]) / 2;

        cout << fixed << setprecision(8) << result << endl;
    }

    return 0;
}
