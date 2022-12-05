#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll cnt = 99, sum = 0, input;

    while (cnt--)
    {
        cin >> input;
        sum += input;
    }

    cout << 5050 - sum << endl;
    return 0;
}
