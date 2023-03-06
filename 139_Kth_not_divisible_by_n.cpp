#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k;
        if (k < n)
        {
            cout << k << endl;
        }
        else
        {
            x = k + (k / (n - 1));
            if (x % n == 0)
            {
                x--;
            }
            cout << x << endl;
        }
    }

    return 0;
}