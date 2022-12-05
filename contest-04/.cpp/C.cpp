#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length, breadth;
    cin >> breadth >> length;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= breadth; j++)
        {
            if (i == 1 || i == length || j == 1 || j == breadth)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}