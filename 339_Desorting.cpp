/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int inf = 1e9 + 9;
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (!is_sorted(arr, arr + n))
        {
            cout << 0 << endl;
            continue;
        }

        int diff[n - 1];

        for (int i = 0; i < n - 1; i++)
        {
            diff[i] = arr[i + 1] - arr[i];
        }

        // int minm = inf;

        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (diff[i] < minm)
        //     {
        //         minm = diff[i];
        //     }
        // }
        // cout << minm << endl;

        int minm = *min_element(diff, diff + n - 1);

        if (minm == 0)
        {
            cout << 1 << endl;
            continue;
        }

        int sum = 0;

        while (minm >= 0)
        {
            sum += 1;
            minm -= 2;
        }

        cout << sum << endl;
    }

    return 0;
}