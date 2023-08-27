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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int first = -1, last = -1;
        bool cross = true;
        string ans = "";

        for (int i = 0; i < n; i++)
        {
            if (cross)
            {
                if (first == -1)
                {
                    ans += '1';
                    first = v[i];
                    last = v[i];
                }
                else if (v[i] >= last)
                {
                    last = v[i];
                    ans += '1';
                }
                else if (v[i] <= first)
                {
                    last = v[i];
                    ans += '1';
                    cross = false;
                }
                else
                {
                    ans += '0';
                }
            }
            else
            {
                if (v[i] >= last and v[i] <= first)
                {
                    last = v[i];
                    ans += '1';
                }
                else
                {
                    ans += '0';
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}