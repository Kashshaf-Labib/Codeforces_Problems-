#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int inn;
        inn = 180 - n;
        if (360 % inn == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}