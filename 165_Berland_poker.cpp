#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, n, m, k, percard;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        percard = (n / k);
        int leftjok = 0;
        if (m == 0)
        {
            cout << m << endl;
        }
        else if (percard >= m)
        {
            cout << m << endl;
        }
        else
        {
            leftjok = m - percard;
            cout << percard - ceil((1.0 * leftjok) / (k - 1)) << endl;
        }
    }

    return 0;
}