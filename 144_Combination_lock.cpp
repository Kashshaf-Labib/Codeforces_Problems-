#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    int n, a1, a2, ans = 0;
    cin >> n;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        a1 = abs(int(s1[i]) - int(s2[i]));
        a2 = 10 - a1;
        if (a1 > a2)
            c = c + a2;
        else if (a1 <= a2)
            c = c + a1;
        ans = ans + c;
    }
    cout << ans << endl;

    return 0;
}