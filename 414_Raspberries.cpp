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
        int n, k;
        cin >> n >> k;
        int arr[n];
        int minOpp = INT_MAX, cntEven = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % k == 0)
            {
                minOpp = 0;
            }
            if (arr[i] % 2 == 0)
            {
                cntEven++;
            }
            minOpp = min(minOpp, (k - (arr[i]) % k));
        }
        if (k == 4)
        {
            if (cntEven >= 2)
            {
                cout << 0 << endl;
            }
            else if (cntEven == 1)
            {
                cout << min(minOpp, 1) << endl;
            }
            else
            {
                cout << min(2, minOpp) << endl;
            }
        }
        else
        {
            cout << minOpp << endl;
        }
    }

    return 0;
}