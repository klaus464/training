#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j = 0;
    cin >> n;

    for (int i = 1; i <= 10; i++)
        cout << n << " "
             << "*"
             << " " << i << " "
             << "="
             << " " << n * i << "\n";

    return 0;
}