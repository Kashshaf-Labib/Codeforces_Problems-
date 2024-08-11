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
        int n, k, m;
        cin >> n >> k >> m;
        string s, temp;
        cin >> s;

        set<char> st1, st2;

        char start = 'a';

        for (int i = 0; i < k; i++)
        {
            st1.insert(start);
            start++;
        }

        st2 = st1;

        vector<string> v;
        int count = 0;

        for (int i = m - 1; i >= 0; i--)
        {
            if (st1.find(s[i]) != st1.end())
            {
                st1.erase(s[i]);
            }
            temp += s[i];

            if (st1.size() == 0)
            {
                reverse(temp.begin(), temp.end());
                v.push_back(temp);
                temp = "";
                st1 = st2;
                count++;
            }
        }

        reverse(v.begin(), v.end());

        if (count >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            string notFound = "";
            notFound += *st1.begin();
            for (int i = 0; i < v.size(); i++)
            {
                notFound += v[i][0];
            }

            while (notFound.size() < n)
            {
                notFound += 'a';
            }

            cout << notFound << endl;
        }
    }

    return 0;
}