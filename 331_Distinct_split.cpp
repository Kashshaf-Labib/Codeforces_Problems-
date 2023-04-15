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
        string s;
        cin >> s;
        vector<int> pref(n, 0), suff(n, 0);
        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
            pref[i] = st.size();
        }
        st.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            st.insert(s[i]);
            suff[i] = st.size();
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, pref[i] + suff[i + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}