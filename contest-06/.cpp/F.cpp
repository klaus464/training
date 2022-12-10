#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &v, int key)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n >> key;
    int i, j, temp;
    std::vector<int> v;

    for (i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    cout << search(v, key);
    return 0;
}
