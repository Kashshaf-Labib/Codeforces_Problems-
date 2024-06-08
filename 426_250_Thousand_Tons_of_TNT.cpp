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
        vector<ll> prefix;
        ll sum = 0;
        prefix.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            prefix.push_back(sum);
        }
        ll maxx = -1;

        for (ll i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                vector<ll> temp;
                for (int j = i; j <= n; j += i)
                {
                    temp.push_back(prefix[j] - prefix[j - i]);
                }
                sort(temp.begin(), temp.end());
                maxx = max(maxx, temp[temp.size() - 1] - temp[0]);
            }
        }
        cout << maxx << endl;
    }

    return 0;
}