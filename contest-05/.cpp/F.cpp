#include <bits/stdc++.h>
using namespace std;

struct Point
{
    long int x, y;
};

int main()
{
    int n, i;
    cin >> n;

    Point l1, r1;
    Point l2, r2;
    long int x_dist, y_dist;
    long long int area1, area2, areai, areas[n];

    for (i = 0; i < n; i++)
    {
        cin >> l1.x >> l1.y >> r1.x >> r1.y;
        cin >> l2.x >> l2.y >> r2.x >> r2.y;

        area1 = (l1.x - r1.x) * (l1.y - r1.y);
        area2 = (l2.x - r2.x) * (l2.y - r2.y);

        x_dist = min(r1.x, r2.x) - max(l1.x, l2.x);
        y_dist = min(r1.y, r2.y) - max(l1.y, l2.y);

        areai = 0;
        if (x_dist > 0 && y_dist > 0)
        {
            areai = x_dist * y_dist;
        }
        if (area1 == 0 || area2 == 0)
        {
            areai = 0;
        }

        areas[i] = area1 + area2 - areai;
    }

    for (long long int area : areas)
        cout << area << endl;

    return 0;
}