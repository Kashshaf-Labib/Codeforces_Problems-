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

        deque<ll> dq;
        dq.push_back(n);
        vector<ll> bitPos;

        // count the set bits:
        for (ll i = 0; i < 61; i++)
        {
            if (n & (1LL << i))
            {
                bitPos.push_back((1LL << i));
            }
        }

        for (auto bit : bitPos)
        {
            if (n - bit > 0)
            {
                dq.push_front(n - bit);
            }
        }

        cout << dq.size() << endl;

        for (auto ele : dq)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}
