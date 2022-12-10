#include <bits/stdc++.h>
using namespace std;

void insert_into_vector(int a, vector<int> &v)
{
    if (v.empty())
        v.push_back(a);
    else if (a <= v.front())
        v.insert(v.begin() + 0, a);
    else if (a >= v.back())
        v.push_back(a);
    else
    {
        for (long unsigned int i = 0; i < v.size() - 1; i++)
        {
            if (a >= v[i] && a <= v[i + 1])
            {
                v.insert(v.begin() + i + 1, a);
                return;
            }
        }
    }
}

void create_subsets(vector<int> arr, vector<vector<int>> &result_arr, long unsigned int n, long unsigned int pow_set)
{
    long unsigned int i, j;
    for (i = 0; i < pow_set; i++)
    {
        vector<int> subset;
        for (j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                subset.push_back(arr[j]);
            }
        }
        if (i != 0)
            result_arr.push_back(subset);
    }
}

int main()
{
    int t;
    cin >> t;

    long unsigned int n;
    long unsigned int i, j;

    int temp;
    long unsigned int pow_set;

    vector<int> arr;
    vector<vector<int>> result_arr;

    while (t--)
    {
        arr.clear();
        result_arr.clear();
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> temp;
            insert_into_vector(temp, arr);
        }
        pow_set = pow(2, n);
        create_subsets(arr, result_arr, n, pow_set);

        sort(result_arr.begin(), result_arr.end());
        for (i = 0; i < result_arr.size(); i++)
        {
            for (j = 0; j < result_arr[i].size(); j++)
                cout << result_arr[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
