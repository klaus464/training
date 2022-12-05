#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = '@';
        for (int j = 0; j <= i; j++)
            cout << ++ch << " ";
        for (int j = i; j > 0; j--)
            cout << --ch << " ";
        cout << endl;
    }
    return 0;
}
