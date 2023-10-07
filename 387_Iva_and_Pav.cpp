/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 9;
int arr[N];
int t[4 * N];

void build(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = arr[b];
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * node;
    int r = 2 * node + 1;

    build(l, b, mid);
    build(r, mid + 1, e);

    t[node] = t[l] & t[r];
}

int query(int node, int b, int e, int i, int j)
{
    if (b > j or e < i)
    {
        return INT_MAX;
    }
    if (b >= i and e <= j)
    {
        return t[node];
    }
    int mid = (b + e) / 2;
    int l = 2 * node;
    int r = 2 * node + 1;
    return query(l, b, mid, i, j) & query(r, mid + 1, e, i, j);
}
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
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        build(1, 1, n);

        int q;
        cin >> q;
        while (q--)
        {
            ll l, k;
            cin >> l >> k;
            int ans = -1;
            ll low = l, high = n;
            while (low <= high)
            {
                ll mid = low + (high - low) / 2;
                int current = query(1, 1, n, l, mid);
                if (current >= k)
                {
                    ans = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}