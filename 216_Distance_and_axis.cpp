/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    ll n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k >= n)
            cout << abs(n - k) << endl;
        else
        {
            if ((n % 2 == 0 && k % 2 == 0) || (n % 2 != 0 && k % 2 != 0))
            {
                cout << "0" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
    }

    return 0;
}