/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll x, c = 0;
    cin >> x;
    while (x != 0)
    {
        if (x % 2 != 0)
            c++;
        x = x / 2;
    }
    cout << c << endl;

    return 0;
}