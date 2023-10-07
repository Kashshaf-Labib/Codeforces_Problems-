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
        int n, k;
        cin >> n >> k;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        int start = 0, ans = 0;
        ll sum = 0;
        for (int end = 0; end <= n - 1; end++)
        {
            if (end > 0 and arr2[end - 1] % arr2[end] != 0)
            {
                start = end;
                sum = 0;
            }
            sum += arr1[end];
            while (sum > k and start <= end)
            {
                sum -= arr1[start];
                start++;
            }
            ans = max(ans, end - start + 1);
        }
        cout << ans << endl;
    }

    return 0;
}