#include <bits/stdc++.h>
using namespace std;

bool IsPrime(long int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (long int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
    long int input;
    cin >> input;

    if (IsPrime(input))
        cout << "Yes";
    else
        cout << "No";
}