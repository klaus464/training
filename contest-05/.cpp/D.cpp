#include <bits/stdc++.h>
using namespace std;

long int getHCF(long int a, long int b)
{
    return b == 0 ? a : getHCF(b, a % b);
}

int main()
{
    int n, i;
    cin >> n;
    long long int a[n], b[n], hcf, lcm;

    for (i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    for (i = 0; i < n; i++)
    {
        hcf = getHCF(a[i], b[i]);
        lcm = a[i] * b[i] / hcf;
        cout << lcm << " " << hcf << endl;
    }
    return 0;
}