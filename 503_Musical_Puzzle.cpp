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

        set<string> st;

        string temp = "";
        temp += s[0];
        temp += s[1];

        st.insert(temp);

        temp = "";

        for (int i = 2; i < n; i++)
        {
            temp += s[i - 1];
            temp += s[i];
            st.insert(temp);
            temp = "";
        }

        // for (auto x : st)
        // {
        //     cout << x << endl;
        // }

        cout << st.size() << endl;
    }

    return 0;
}