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
        if (n == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            cout << "2";
            for (int i = 1; i <= n - 1; i++)
            {
                cout << "3";
            }
        }
        cout << endl;
    }

    return 0;
}