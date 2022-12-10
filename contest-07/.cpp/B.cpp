#include <bits/stdc++.h>
using namespace std;

int main()
{
    int target_reached = 0;
    std::vector<int> p(4, 0);
    cin >> p[0] >> p[1] >> p[2] >> p[3];

    for (int score : p)
        if (score >= 10)
            target_reached++;

    cout << target_reached;
    return 0;
}