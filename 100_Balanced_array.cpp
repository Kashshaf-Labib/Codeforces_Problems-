#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x = n / 2, i, j;
        if (x % 2 != 0)
            cout << "NO" << endl;
        else if (x % 2 == 0)
        {
            cout << "YES" << endl;
            for (i = 2; i <= n; i = i + 2)
            {
                cout << i << " ";
            }
            for (j = 1; j < (n - 2); j = j + 2)
            {
                cout << j << " ";
            }
            cout << (j + x) << endl;
        }
    }

    return 0;
}