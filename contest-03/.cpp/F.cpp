#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll n, fact = 1, cnt = 1;

    cin >> n;
    while (n--)
    {
        fact *= cnt;
        cnt++;
    }

    cout << fact << endl;
    return 0;
}
