#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, temp;
    long int sum;
    std::vector<int> v;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    for (i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            v.erase(v.begin() + i);
            i--;
        }
    }

    sum = 0;
    for (i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    cout << sum;
    return 0;
}
