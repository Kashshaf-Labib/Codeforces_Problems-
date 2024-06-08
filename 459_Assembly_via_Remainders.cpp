/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
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

        ll x[n - 1];

        for (int i = 0; i < n - 1; i++)
        {
            cin >> x[i];
        }

        ll arr[n];
        arr[n - 1] = x[n - 2];

        ll big = 1e9;

        for (int i = n - 2; i >= 0; i--)
        {
            arr[i] = big;
            big -= x[i - 1];
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}