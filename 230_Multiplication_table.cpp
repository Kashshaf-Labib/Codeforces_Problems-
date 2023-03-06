/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll n, x, c = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        if ((x % i == 0) && (x / i <= n))
            c++;
    }
    cout << c << endl;

    return 0;
}