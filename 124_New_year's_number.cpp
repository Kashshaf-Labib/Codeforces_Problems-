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
        int n, c = 0;
        cin >> n;
        while (n % 2020 != 0)
        {
            if (n % 2021 == 0)
            {
                c++;
                break;
            }
            n = n - 2021;
            if (n < 2020)
            {
                c = -1;
                break;
            }
        }
        if (c == -1)
            cout << "NO" << endl;
        else if (c >= 0)
            cout << "YES" << endl;
    }

    return 0;
}