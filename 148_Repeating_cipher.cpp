#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s, s1;
    cin >> s;
    for (int i = 0, j = 0; j < n; i++, j = i + j)
    {
        s1 = s1 + s[j];
    }
    cout << s1 << endl;

    return 0;
}