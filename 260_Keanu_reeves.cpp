/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, one = 0, zero = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    if (one == zero)
    {
        cout << 2 << endl;
        for (int i = 0; i < n - 1; i++)
        {
            cout << s[i];
        }
        cout << " " << s[n - 1] << endl;
    }
    else
    {
        cout << 1 << endl
             << s << endl;
    }
    return 0;
}