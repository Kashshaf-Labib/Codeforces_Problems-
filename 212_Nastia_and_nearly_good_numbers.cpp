/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b == 1)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << (a * b) << " " << a << " " << (b + 1) * a << endl;
        }
    }

    return 0;
}