#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;
        int c = 0;
        while (max(a, b) <= n)
        {
            if (a < b)
            {
                a = a + b;
                c++;
            }
            else
            {
                b = b + a;
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}