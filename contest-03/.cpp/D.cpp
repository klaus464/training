#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll a, b;
    cin >> a >> b;

    if (b == 0 || a == 1)
    {
        cout << 1;
        exit(0);
    }
    else
        b--;

    ll c = a;
    while (b--)
        a *= c;

    cout << a;
    return 0;
}
