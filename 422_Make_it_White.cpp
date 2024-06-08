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

        int f = -1, l = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                f = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                l = i;
                break;
            }
        }

        cout << l - f + 1 << endl;
    }

    return 0;
}