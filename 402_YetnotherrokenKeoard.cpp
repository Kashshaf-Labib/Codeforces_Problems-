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
        string s;
        cin >> s;
        stack<int> upperStk, lowerStk;
        map<int, char> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (!upperStk.empty())
                {
                    int top = upperStk.top();
                    upperStk.pop();
                    mp.erase(top);
                }
            }
            else if (s[i] == 'b')
            {
                if (!lowerStk.empty())
                {
                    int top = lowerStk.top();
                    lowerStk.pop();
                    mp.erase(top);
                }
            }
            else
            {
                mp[i] = s[i];
                if (isupper(s[i]))
                {
                    upperStk.push(i);
                }
                else
                {
                    lowerStk.push(i);
                }
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (mp.count(i))
            {
                cout << mp[i];
            }
        }
        cout << endl;
    }

    return 0;
}