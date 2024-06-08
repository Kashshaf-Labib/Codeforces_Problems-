/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <iostream>
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
        int cnt = 0;
        for (int i = 0; i < n;)
        {
            if (i < n - 1 and s[i + 1] == '@')
            {
                cnt++;
                i++;
            }
            else if (i < n - 2 and s[i + 2] == '@')
            {
                cnt++;
                i += 2;
            }
            else if (i < n - 1 and s[i + 1] == '.')
            {
                i++;
            }
            else if (i < n - 2 and s[i + 2] == '.')
            {
                i += 2;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
