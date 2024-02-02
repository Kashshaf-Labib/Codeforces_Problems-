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
        string s;
        cin >> s;
        int prev = 1, sum = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            int curr = s[i] - '0';
            if (s[i] == '0')
            {
                curr = 10;
            }
            sum += abs(prev - curr);
            prev = curr;
        }

        cout << sum << endl;
    }

    return 0;
}