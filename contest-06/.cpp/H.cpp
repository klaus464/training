#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i, count;
    std::vector<int> inputs(n), binary(32);
    for (i = 0; i < n; i++)
    {
        cin >> inputs[i];
    }

    for (int input : inputs)
    {
        count = 0;
        for (i = 1; i <= input; i = i * 2)
        {
            if ((input & i) == 0)
                binary[count++] = 0;
            else
                binary[count++] = 1;
        }

        if (input == 0)
            cout << 0;
        else
        {
            for (i = count - 1; i >= 0; i--)
                cout << binary[i];
        }
        cout << "\n";
    }

    return 0;
}