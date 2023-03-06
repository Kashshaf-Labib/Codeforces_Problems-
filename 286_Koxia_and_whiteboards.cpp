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
        int n, m;
        cin >> n >> m;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            pq.pop();
            pq.push(x);
        }
        ll sum = 0;
        while (!pq.empty())
        {
            sum = sum + pq.top();
            pq.pop();
        }
        cout << sum << endl;
    }

    return 0;
}