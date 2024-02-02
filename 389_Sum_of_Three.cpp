/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        ll n;
        cin >> n;
        if (n <= 6 or n == 9)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (n % 3 == 0)
            {
                cout << "YES" << endl;
                cout << 1 << " " << 4 << " " << (n - 5) << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << 1 << " " << 2 << " " << (n - 3) << endl;
            }
        }
    }
    return 0;
}