#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = (num - i); j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}