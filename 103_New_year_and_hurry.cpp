#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c = 0, x = 0, y = 0;
    cin >> n >> k;
    l = 240 - k;
    for (int j = 1;; j++)
    {
        if (l <= 0)
        {
            break;
        }
        y = (5 * j);
        if (l >= y)
            c++;
        l = l - y;
    }
    if (c <= n)
        cout << c << endl;
    else
        cout << n;

    return 0;
}