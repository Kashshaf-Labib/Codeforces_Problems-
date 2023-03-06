/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.length();)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i = i + 3;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i = i + 2;
        }
        else if (s[i] == '1')
        {
            i = i + 1;
        }
        else
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        cout << "YES" << endl;
    else if (c == 1)
        cout << "NO" << endl;

    return 0;
}