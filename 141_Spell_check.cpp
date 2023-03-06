#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string s1 = {"Timur"};
    string s2;
    sort(s1.begin(), s1.end());
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin >> s2;
        sort(s2.begin(), s2.end());
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}