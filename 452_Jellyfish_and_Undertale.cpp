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
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll sum = b;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > a - 1)
            {
                v[i] = a - 1;
            }
            sum += v[i];
        }

        cout << sum << endl;
    }

    return 0;
}