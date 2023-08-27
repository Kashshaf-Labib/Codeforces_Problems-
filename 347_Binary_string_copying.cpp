/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 9;

vector<int> pref(N, 0);
vector<int> prev0(N, 0), prev1(N, 0);
vector<int> next0(N, 0), next1(N, 0);

bool isOkay(int l, int r)
{
    int ones = pref[r] - pref[l - 1];
    if (ones == 0 or ones == r - l + 1)
    {
        return true;
    }
    if (pref[r] - pref[r - ones] == ones)
    {
        return true;
    }

    return false;
}
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        s = '#' + s;

        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + (s[i] - '0');
        }

        int zero = -1, one = -1;
        for (int i = 1; i <= n; i++)
        {
            prev0[i] = zero;
            prev1[i] = one;
            if (s[i] == '0')
            {
                zero = i;
            }
            else
            {
                one = i;
            }
        }

        zero = -1, one = -1;

        for (int i = n; i >= 1; i--)
        {
            next0[i] = zero;
            next1[i] = one;
            if (s[i] == '0')
            {
                zero = i;
            }
            else
            {
                one = i;
            }
        }

        set<pair<int, int>> st;

        for (int i = 1; i <= m; i++)
        {
            int l, r;
            cin >> l >> r;
            if (isOkay(l, r))
            {
                st.insert({-1, -1});
            }
            else
            {
                int left, right;
                if (next0[r] == -1)
                {
                    right = n;
                }
                else
                {
                    right = next0[r] - 1;
                }
                if (prev1[l] == -1)
                {
                    left = 1;
                }
                else
                {
                    left = prev1[l] + 1;
                }

                st.insert({left, right});
            }
        }
        cout << st.size() << endl;
        pref.clear();
        prev0.clear();
        prev1.clear();
        next0.clear();
        next1.clear();
    }

    return 0;
}