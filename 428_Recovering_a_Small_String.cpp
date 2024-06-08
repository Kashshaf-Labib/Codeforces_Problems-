#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    // cout<<char(97+21-1)<<endl;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans = "";
        int temp = n;

        for (int i = 1; i <= 26; i++)
        {
            for (int j = i; j <= 26; j++)
            {
                for (int k = j; k <= 26; k++)
                {
                    temp = n;
                    string s = "";
                    s += char(96 + i);
                    temp -= i;
                    s += char(96 + j);
                    temp -= j;
                    s += char(96 + k);
                    temp -= k;
                    if (temp == 0)
                    {
                        ans = s;
                        break;
                    }
                }
                if (temp == 0)
                {
                    break;
                }
            }
            if (temp == 0)
            {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}