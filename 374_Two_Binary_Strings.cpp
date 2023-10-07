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
        string s1, s2;
        cin >> s1 >> s2;

        bool ans = false;

        for (int i = 0; i < s1.size() - 1; i++)
        {
            if (s1[i] == '0' and s2[i] == '0' and s1[i + 1] == '1' and s2[i + 1] == '1')
            {
                ans = true;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}