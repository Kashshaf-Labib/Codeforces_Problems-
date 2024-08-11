/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
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
        string s;
        cin >> s;

        set<char> st;

        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }

        string str;

        for (auto it = st.begin(); it != st.end(); it++)
        {
            str += *it;
        }

        sort(str.begin(), str.end());

        map<char, char> mp;

        for (int i = 0; i < str.size() / 2; i++)
        {
            mp[str[i]] = str[str.size() - 1 - i];
            mp[str[str.size() - 1 - i]] = str[i];
        }
        if (str.size() % 2 != 0)
        {
            mp[str[str.size() / 2]] = str[str.size() / 2];
        }

        for (int i = 0; i < n; i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                cout << mp[s[i]];
            }
        }
        cout << endl;
    }

    return 0;
}