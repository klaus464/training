#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int n, cnt;

    cin >> t;
    while (t--)
    {
        cin >> n;
        cnt = 0;
        while (n >= 5)
            cnt += (n /= 5);
        cout << cnt << endl;
    }
    return 0;
}
