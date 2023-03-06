#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        long long n, cons = 1, c0 = 0, c1 = 0, sum = 0, maxcons = 1;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                c0++;
            if (s[i] == '1')
                c1++;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cons++;
                if (cons > maxcons)
                {
                    maxcons = cons;
                }
            }
            else
                cons = 1;
        }
        sum = c1 * c0;
        if (sum < (maxcons * maxcons))
            cout << (maxcons * maxcons) << endl;
        else
            cout << sum << endl;
    }

    return 0;
}