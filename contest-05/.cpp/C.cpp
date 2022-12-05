#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n >> i;

    i = pow(2, i);
    cout << boolalpha << ((n & i) == i);
    return 0;
}
