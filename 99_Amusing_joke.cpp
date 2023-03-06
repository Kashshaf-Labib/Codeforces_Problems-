#include <bits/stdc++.h>
using namespace std;
// String sorting library function:
void sortString(string &str)
{
    sort(str.begin(), str.end());
}
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a + b;
    sortString(c);
    sortString(d);
    if (c == d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}