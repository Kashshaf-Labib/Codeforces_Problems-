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
        int n;
        cin >> n;
        int sev, ten;
        sev = n % 7;
        ten = n % 10;
        if (sev <= ten)
        {
            cout << n - sev << endl;
        }
        else
            cout << n + 7 - sev << endl;
    }

    return 0;
}