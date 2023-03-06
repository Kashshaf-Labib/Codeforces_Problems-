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
        int n, maxa, maxb, c1 = 0, c2 = 0, diffofmax, diffelem;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        maxa = *max_element(a, a + n);
        maxb = *max_element(b, b + n);
        if (maxa < maxb)
        {
            c1 = 1;
        }
        else
        {
            diffofmax = maxa - maxb;
            for (int i = 0; i < n; i++)
            {
                diffelem = a[i] - diffofmax;
                if (diffelem < 0)
                    diffelem = 0;
                if (diffelem == b[i])
                {
                    c2 = 0;
                }
                else
                {
                    c2 = 1;
                    break;
                }
            }
        }
        if (c1 == 0 && c2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}