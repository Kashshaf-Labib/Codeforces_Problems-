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
        string s;
        ll ans = 0;
        map<char, int> freq;
        cin >> n >> k >> s;
        for (auto c : s)
        {
            freq[c]++;
        }
        for (char c = 'a'; c <= 'z'; c++)
        {
            int mn = min(freq[c], freq[c - 32]);
            ans += mn;
            freq[c] -= mn;
            freq[c - 32] -= mn;
        }
        for (char c = 'a'; c <= 'z'; c++)
        {
            int add = max(freq[c], freq[c - 32]);
            int mn = min(k, add / 2);
            k -= mn;
            ans += mn;
        }
        cout << ans << endl;
    }

    return 0;
}