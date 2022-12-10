#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i, j, temp, count;
    std::vector<int> v;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    for (i = 0; i < v.size(); i++)
    {
        count = 0;
        for (j = i + 1; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                v.erase(v.begin() + j);
                count++;
                j--;
            }
        }
        if (count != 0)
        {
            v.erase(v.begin() + i);
            i--;
        }
    }

    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
