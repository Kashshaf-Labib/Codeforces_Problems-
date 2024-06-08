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
        int x, maxx = -1;
        cin >> x;
        for (int i = 1; i < x; i++)
        {
            if (__gcd(x, i) + i >= maxx)
            {
                maxx = i;
            }
        }

        cout << maxx << endl;
    }

    return 0;
}