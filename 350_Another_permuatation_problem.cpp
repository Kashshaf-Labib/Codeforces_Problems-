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
        int n;
        cin >> n;
        ll ans = 0;
        int arr[n+1];
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }
        ll prev_sum = 0;
        int index = 0;
        for (int c = 1; c <= n; c++)
        {
            index++;
            ll sum = 0;
            int x = 0;
            for (int i = 1; i <= index; i++)
            {
                swap(arr[n - c + x], arr[n - c + 1 + x]);
                ++x;
            }
            int max = 0;
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] * i > max)
                {
                    max = arr[i] * i;
                }
                sum += (arr[i] * i);
            }
            if (sum - max <= prev_sum)
            {
                ans = prev_sum;
                break;
            }
            else
            {
                prev_sum = sum - max;
            }
        }
         cout << ans << endl;
    }

    return 0;
}