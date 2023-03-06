/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
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
        string s;
        cin >> s;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            vector<int> occur(10, 0);
            int dc = 0, maxfreq = 0;
            for (int j = i; j <= (i + 99) && j < n; j++)
            {
                if (occur[s[j] - '0'] == 0)
                    dc++;
                occur[s[j] - '0']++;
                maxfreq = max(maxfreq, occur[s[j] - '0']);
                if (dc >= maxfreq)
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}