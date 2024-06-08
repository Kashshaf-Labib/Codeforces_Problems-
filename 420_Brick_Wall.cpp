#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if ((((y / 3) * x) + ((y % 3) / 2) * x) > (((y / 2) * x) + ((y % 2) / 2) * x))
        {
            cout << (((y / 3) * x) + ((y % 3) / 2) * x) << endl;
        }
        else
        {
            cout << (((y / 2) * x) + ((y % 2) / 2) * x) << endl;
        }
    }

    return 0;
}