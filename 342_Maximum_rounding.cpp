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
        string s, ans;
        cin >> s;
        int pos = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - '0' >= 5)
            {
                pos = i;
                break;
            }
        }

        if (pos == -1)
        {
            cout << s << endl;
            continue;
        }

        else
        {
            int pos2 = -1;
            for (int i = pos - 1; i >= 0; i--)
            {
                if (s[i] - '0' != 9)
                {
                    pos2 = i;
                    break;
                }
            }
            if (s[pos2] == '4' and pos2 >= 0)
            {
                while (s[pos2] == '4' and pos2 >= 0)
                {
                    pos2--;
                }
            }
            if (pos2 == -1)
            {
                ans = "1";
                for (int i = 0; i < s.size(); i++)
                {
                    ans += '0';
                }
            }
            else
            {
                ans = s;
                ans[pos2]++;
                for (int i = pos2 + 1; i < s.size(); i++)
                {
                    ans[i] = '0';
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}