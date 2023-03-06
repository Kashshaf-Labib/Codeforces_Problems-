/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length())
    {
        cout << "No" << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u')
                {
                    continue;
                }
                else
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
            else if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
            {
                if (t[i] == 'b' || t[i] == 'c' || t[i] == 'd' || t[i] == 'f' || t[i] == 'g' || t[i] == 'h' || t[i] == 'j' || t[i] == 'k' || t[i] == 'l' || t[i] == 'm' || t[i] == 'n' || t[i] == 'p' || t[i] == 'q' || t[i] == 'r' || t[i] == 's' || t[i] == 't' || t[i] == 'v' || t[i] == 'w' || t[i] == 'x' || t[i] == 'y' || t[i] == 'z')
                {
                    continue;
                }
                else
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}