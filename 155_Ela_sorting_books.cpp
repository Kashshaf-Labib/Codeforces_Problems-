#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        string ans = "";
        for (int i = 1; i <= k; i++)
        {
            int length = n / k;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (length <= 0)
                {
                    ans = ans + ch;
                    break;
                }
                length--;
                if (mp[ch])
                {
                    mp[ch]--;
                }
                else
                {
                    ans = ans + ch;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
