#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        bool sOkay = true;
        if (n == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    sOkay = false;
                    break;
                }
            }
            if (!sOkay)
            {
                bool tOkay = true;
                for (int i = 0; i < t.size() - 1; i++)
                {
                    if (t[i] == t[i + 1])
                    {
                        tOkay = false;
                        break;
                    }
                }

                if (!tOkay)
                {
                    cout << "No" << endl;
                }
                else
                {
                    char tfirst = t[0];
                    char tlast = t[m - 1];
                    bool okay = true;
                    for (int i = 0; i < s.size() - 1; i++)
                    {
                        if (s[i] == s[i + 1] and (s[i] == tfirst or s[i + 1] == tlast))
                        {
                            okay = false;
                            break;
                        }
                    }

                    if (okay)
                    {
                        cout << "Yes" << endl;
                    }
                    else
                    {
                        cout << "No" << endl;
                    }
                }
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}