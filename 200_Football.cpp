/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, c1 = 0, c2 = 0;
    cin >> n;
    string s[n], s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        s1 = s[0];
        if (s[i] != s1)
            s2 = s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s1)
            c1++;
        else
            c2++;
    }
    if (c1 > c2)
        cout << s1 << endl;
    else
        cout << s2 << endl;

    return 0;
}