/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 1 << endl;

    return 0;
}