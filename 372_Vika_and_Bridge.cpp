/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 9;
priority_queue<int> leap[N];
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int lastOccur[N] = {0};
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            leap[x].push(i - lastOccur[x] - 1);
            lastOccur[x] = i;
        }
        for (int i = 1; i <= k; i++)
        {
            leap[i].push(n - lastOccur[i]);
        }
        int mnm = N;
        for (int i = 1; i <= k; i++)
        {
            int x = leap[i].top();
            leap[i].pop();
            x /= 2;
            leap[i].push(x);
            mnm = min(mnm, leap[i].top());
            while (leap[i].size())
            {
                leap[i].pop();
            }
        }
        cout << mnm << endl;
    }

    return 0;
}