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
        string s;
        cin >> s;
        int arr1[k], arr2[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr1[i];
            arr1[i]--;
        }
        for (int i = 0; i < k; i++)
        {
            cin >> arr2[i];
            arr2[i]--;
        }

        int q;
        cin >> q;
        int cnt[n + 1] = {0};
        while (q--)
        {
            int x;
            cin >> x;
            cnt[x - 1]++;
        }
        string ans = "";

        for (int i = 0; i < k; i++)
        {
            int l = arr1[i];
            int r = arr2[i];
            string s1 = s.substr(l, r - l + 1);
            int sum = 0;
            for (int j = l; j <= (l + r) / 2; j++)
            {
                sum += cnt[j] + cnt[r + l - j];
                if (sum % 2 != 0)
                {
                    swap(s1[j - l], s1[r - j]);
                }
            }
            ans += s1;
        }

        cout << ans << endl;
    }

    return 0;
}