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
        string s;
        cin >> s;
        int sz = s.size();
        int tsz = 2 * sz;
        if (s == "()")
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            bool found = false;
            for (int i = 0; i < sz - 1; i++)
            {
                if ((s[i] == '(' and s[i + 1] == '(') or (s[i] == ')' and s[i + 1] == ')'))
                {
                    found = true;
                }
            }

            if (found)
            {
                for (int i = 0; i < sz; i++)
                {
                    cout << "()";
                }
                cout << endl;
            }
            else
            {
                for (int i = 0; i < sz; i++)
                {
                    cout << "(";
                }
                for (int i = 0; i < sz; i++)
                {
                    cout << ")";
                }
                cout << endl;
            }
        }
    }

    return 0;
}