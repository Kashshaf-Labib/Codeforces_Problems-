/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int allup = 1, allup1 = 1;
    string s;
    cin >> s;
    int len = s.length();
    if (len == 1)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] = toupper(s[0]);
            cout << s << endl;
        }
        else
        {
            s[0] = tolower(s[0]);
            cout << s << endl;
        }
    }
    else if (len > 1)
    {
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                allup = 0;
                break;
            }
        }
        if (allup == 1)
        {
            for (int i = 0; i < len; i++)
            {
                s[i] = tolower(s[i]);
            }
            cout << s << endl;
        }
        else if (allup == 0)
        {
            if (s[0] >= 'a' && s[0] <= 'z')
            {
                for (int i = 1; i < len; i++)
                {
                    if (s[i] >= 'a' && s[i] <= 'z')
                    {
                        allup1 = 0;
                        break;
                    }
                }
                if (allup1 == 0)
                    cout << s << endl;
                else if (allup1 == 1)
                {
                    for (int i = 0; i < len; i++)
                    {
                        if (i == 0)
                            s[0] = toupper(s[0]);

                        else
                            s[i] = tolower(s[i]);
                    }
                    cout << s << endl;
                }
            }
            else
                cout << s << endl;
        }
    }

    return 0;
}