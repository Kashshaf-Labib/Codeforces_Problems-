#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '5' && s[i] <= '9')
        {
            if (i == 0 && s[i] == '9')
            {
                continue;
                ;
            }
            else
            {
                s[i] = 57 - s[i] + 48;
            }
        }
        else
        {
            continue;
        }
    }
    cout << s << endl;

    return 0;
}