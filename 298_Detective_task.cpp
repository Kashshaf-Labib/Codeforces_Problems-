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
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                count = 1;
            }
            if (s[i] == '?')
            {
                count++;
            }
            if (s[i] == '0')
            {
                count++;
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}