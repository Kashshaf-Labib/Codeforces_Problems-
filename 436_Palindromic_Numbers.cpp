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
        if (s[0] != '9')
        {
            for (int i = 0; i < n; i++)
            {
                int dig = s[i] - '0';
                int add = 9 - dig;
                cout << add;
            }
            cout << endl;
        }
        else if (s[0] == '9')
        {
            string ans = "";
            int carry = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                int dig = s[i] - '0';
                dig += carry;
                if (dig > 1)
                {
                    int num = 11 - dig;
                    carry = 1;
                    ans += (num + '0');
                }
                else
                {
                    int num = 1 - dig;
                    carry = 0;
                    ans += (num + '0');
                }
            }
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
        }
    }
    return 0;
}