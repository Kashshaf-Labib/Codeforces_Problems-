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
        string s, ans;
        cin >> s;
        map<int, int> vowel;
        vowel['a'] = 1;
        vowel['e'] = 1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' or s[i] == 'e')
            {
                ans.push_back(s[i]);
                // ans.push_back('.');
                int next = i + 1;
                if (next == s.size() - 1)
                {
                    ans.push_back(s[next]);
                    break;
                }
                else if (next + 1 <= s.size() - 1)
                {
                    if (vowel[s[next]] == 0 and vowel[s[next + 1]] == 0)
                    {
                        ans.push_back(s[next]);
                        ans.push_back('.');
                        i = next;
                    }
                    else if (vowel[s[next]] == 0 and vowel[s[next + 1]] == 1)
                    {
                        ans.push_back('.');
                    }
                }
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}