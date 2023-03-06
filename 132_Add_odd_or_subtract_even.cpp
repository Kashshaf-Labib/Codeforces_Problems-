#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b, x1, x2;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a == b)
            cout << "0" << endl;
        else if (a > b)
        {
            x1 = a - b;
            if (x1 % 2 == 0)
            {
                cout << "1" << endl;
            }
            else if (x1 % 2 != 0)
            {
                cout << "2" << endl;
            }
        }
        else if (a < b)
        {
            x2 = b - a;
            if (x2 % 2 != 0)
            {
                cout << "1" << endl;
            }
            else if (x2 % 2 == 0)
            {
                cout << "2" << endl;
            }
        }
    }

    return 0;
}