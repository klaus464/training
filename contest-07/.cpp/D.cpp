#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, sum;
    int matches[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int requiredsticks;

    while (t--)
    {
        cin >> a >> b;
        sum = a + b;
        requiredsticks = 0;

        while (sum != 0)
        {
            requiredsticks += matches[sum % 10];
            sum /= 10;
        }
        cout << requiredsticks << endl;
    }

    return 0;
}
