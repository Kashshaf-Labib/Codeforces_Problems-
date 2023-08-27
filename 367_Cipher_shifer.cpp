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
        string s;
        cin >> s;
        vector<char> v;
        char c = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == c)
            {
                v.push_back(s[i]);
                c = s[i + 1];
                i++;
            }
        }
        for (auto i : v)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}