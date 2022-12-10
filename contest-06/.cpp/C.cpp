#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    long long int temp;
    std::vector<long long int> v;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    for (i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}
