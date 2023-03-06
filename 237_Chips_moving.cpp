/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll odd = 0, even = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 != 0)
            odd++;
        else
            even++;
    }
    if (odd <= even)
            cout << odd << endl;
        else
            cout << even;

    return 0;
}