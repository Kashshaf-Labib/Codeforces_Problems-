/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, t, c1 = 0, c2 = 0;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        t = m / n;
        while (t % 2 == 0)
        {
            t = t / 2;
            c1++;
        }
        while (t % 3 == 0)
        {
            t = t / 3;
            c2++;
        }
        if (t == 1)
        {
            cout << c1 + c2 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}