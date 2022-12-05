#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll a = 0, b = 1, num = 0, n;

    cin >> n;
    while (n--)
    {
        num = a + b;
        a = b;
        b = num;
    }

    cout << a << endl;
    return 0;
}
