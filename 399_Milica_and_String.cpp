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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cntB = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                cntB++;
            }
        }

        if (cntB == k)
        {
            cout << 0 << endl;
        }
        else
        {
            if (cntB < k)
            {
                int cnt = 0;
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == 'A')
                    {
                        cnt++;
                    }
                    if (cnt == k - cntB)
                    {
                        cout << 1 << endl;
                        cout << i + 1 << " " << 'B' << endl;
                        break;
                    }
                }
            }
            else
            {
                int cnt = 0;
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == 'B')
                    {
                        cnt++;
                    }
                    if (cnt == cntB - k)
                    {
                        cout << 1 << endl;
                        cout << i + 1 << " " << 'A' << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}