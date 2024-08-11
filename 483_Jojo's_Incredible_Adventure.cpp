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
        string s;
        cin >> s;

        bool allOne = true;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                allOne = false;
                break;
            }
        }

        if (!allOne)
        {
            ll maxmOne = 0, temp = 0;

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '0')
                {
                    maxmOne = max(maxmOne, temp);
                    temp = 0;
                }
                else
                {
                    temp++;
                    maxmOne = max(maxmOne, temp);
                }
            }

            ll left = 0, right = 0;

            if (s[0] == '1' and s[s.size() - 1] == '1')
            {

                for (int i = 0; i < s.size() - 1; i++)
                {
                    if (s[i] == '0')
                    {
                        break;
                    }
                    else
                    {
                        left++;
                    }
                }

                for (int i = s.size() - 1; i >= left; i--)
                {
                    if (s[i] == '0')
                    {
                        break;
                    }
                    else
                    {
                        right++;
                    }
                }
            }
            maxmOne = max(maxmOne, left + right);

            if (maxmOne == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                if (maxmOne % 2 == 1)
                {
                    cout << ((maxmOne + 1) / 2) * ((maxmOne + 1) / 2) << endl;
                }
                else
                {
                    cout << ((maxmOne + 1) / 2) * ((maxmOne + 2) / 2) << endl;
                }
            }
        }
        else
        {
            ll n = s.size();
            cout << (n * n) << endl;
        }
    }

    return 0;
}