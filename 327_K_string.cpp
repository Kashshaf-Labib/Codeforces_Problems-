/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int k;
    string s1, s2;
    cin >> k >> s1;
    sort(s1.begin(), s1.end());
    for (int i = 0; i < s1.length(); i += k)
    {
        if (s1[i] == s1[i + k - 1])
        {
            s2 += s1[i];
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    while (k--)
    {
        cout << s2;
    }
    cout << endl;

    return 0;
}