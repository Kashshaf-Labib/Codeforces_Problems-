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

        if (n == 2)
        {
            cout << stoll(s) << endl;
        }
        else if (n == 3)
        {
            string x = s.substr(0, 2);
            ll ans = stoll(x);
            ans += s[2] - '0';
            ans = min(ans, stoll(x) * (s[2] - '0'));

            string y = s.substr(1, 2);
            ll ans2 = stoll(y);
            ans2 += s[0] - '0';
            ans2 = min(ans2, stoll(y) * (s[0] - '0'));

            cout << min(ans, ans2) << endl;
        }
        else
        {
            bool zeroFound = false;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    zeroFound = true;
                    break;
                }
            }

            if (zeroFound)
            {
                cout << 0 << endl;
            }
            else
            {
                ll ans = LONG_LONG_MAX;
                for (int i = 0; i < n - 1; i++)
                {
                    vector<ll> v;
                    for (int j = 0; j < n; j++)
                    {
                        if (j == i)
                        {
                            v.push_back(stoll(s.substr(j, 2)));
                            j++;
                        }
                        else
                        {
                            v.push_back(s[j] - '0');
                        }
                    }

                    ll temp = 0;

                    for (int i = 0; i < v.size(); i++)
                    {
                        if (v[i] != 1)
                        {
                            temp += v[i];
                        }
                        else
                        {
                            temp *= 1;
                        }
                    }
                    ans = min(ans, temp);
                }

                cout << ans << endl;
            }
        }
    }
    return 0;
}