#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, r, b, x1, x2, maxx;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }

    else
    {
        r = n % 10;
        b = n / 10;
        x1 = b;
        x2 = (n / 100) * 10 + (n % 10);
        maxx = max(x1, x2);
        cout << maxx << endl;
    }

    return 0;
}