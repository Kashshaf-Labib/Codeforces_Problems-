#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int c1 = s.find("AB");
    int c2 = s.find("BA", c1 + 2);
    int d1 = s.find("BA");
    int d2 = s.find("AB", d1 + 2);
    if (c1 != -1 && c2 != -1 || d1 != -1 && d2 != -1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}