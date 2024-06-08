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
        ll first;
        cin >> first;
        ll parity = abs(first % 2);
        ll sum = first,
           max1 = first;
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (abs(x % 2) != parity)
            {
                sum += x;
            }
            else
            {
                sum = x;
            }
            if (x > sum)
            {
                sum = x;
            }
            parity = abs(x % 2);
            max1 = max(max1, sum);
        }
        cout << max1 << endl;
    }
    return 0;
}