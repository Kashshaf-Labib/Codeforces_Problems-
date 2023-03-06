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
        int c = 0;
        long long n;
        cin >> n;
        if (n % 2 != 0)
        {
            c = 2;
        }
        else
        {
            while (n > 1)
            {
                n = n / 2;
                if (n % 2 != 0)
                {
                    c++;
                }
            }
        }
        if (c > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}