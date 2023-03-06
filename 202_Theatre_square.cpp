/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, m, a;
    cin >> n >> m >> a;
    ll i = 0, j = 0;
    for (i = a;; i = i + a)
    {
        if (i >= n)
            break;
    }
    for (j = a;; j = j + a)
    {
        if (j >= m)
            break;
    }
    cout << (i * j) / (a * a) << endl;

    return 0;
}