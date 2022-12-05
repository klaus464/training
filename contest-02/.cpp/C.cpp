#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n, sum = 0;
    while (temp != 0)
    {
        sum += pow(temp % 10, 3);
        temp /= 10;
    }

    if (sum == n)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
