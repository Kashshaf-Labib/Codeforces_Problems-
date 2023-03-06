#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if(a>b)
        {
            swap(a,b);
        }
        if (2 * a >= b)
        {
            cout << 4 * a * a << endl;
        }
        else
            cout << b * b << endl;
    }

    return 0;
}