#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> v(101);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int a = 0;
    int b = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (v[i])
        {
            v[i]--;
        }
        else
        {
            a = i;
            break;
        }
    }
    for (int i = 0; i <= 100; i++)
    {
        if (v[i])
        {
            v[i]--;
        }
        else
        {
            b = i;
            break;
        }
    }
    cout << a + b << endl;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}