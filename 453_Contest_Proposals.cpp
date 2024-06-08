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
        int n;
        cin >> n;
        deque<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                a.pop_back();
                a.push_front(b[i]);
                sort(a.begin(), a.end());
                i = -1;
                cnt++;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " " << b[i] << endl;
        // }

        cout << cnt << endl;
    }

    return 0;
}