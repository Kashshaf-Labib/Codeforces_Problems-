#include <bits/stdc++.h>
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
        for (int i = 0; i < 1; i++)
        {
            if ((s[i] == 'Y' || s[i] == 'y') && (s[i + 1] == 'E' || s[i + 1] == 'e') && (s[i + 2] == 'S' || s[i + 2] == 's'))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}