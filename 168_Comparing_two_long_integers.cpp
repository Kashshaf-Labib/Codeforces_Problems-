#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    string x(a.length(), '0'), y(b.length(), '0');
    x = x + b;
    y = y + a;
    if (x > y)
    {
        cout << "<" << endl;
    }
    else if (x < y)
    {
        cout << ">" << endl;
    }
    else
        cout << "=" << endl;

    return 0;
}