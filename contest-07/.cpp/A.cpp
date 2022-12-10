#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, k;
    vector<int> needs_to_get_shot(t, 0);
    vector<int> no_of_people;

    while (t--)
    {
        cin >> n >> k;
        no_of_people.resize(n, 0);

        while (n--)
            cin >> no_of_people[n];

        n = no_of_people.size();
        while (n--)
        {
            if (no_of_people[n] > k)
                needs_to_get_shot[t]++;
        }
    }

    t = needs_to_get_shot.size();
    while (t--)
        cout << needs_to_get_shot[t] << endl;
}