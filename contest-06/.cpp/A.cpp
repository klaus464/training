#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int temp, max;
    std::vector<int> v;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    max = v[0];
    for (i = 0; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    cout << max;
}