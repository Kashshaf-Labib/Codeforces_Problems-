/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
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
        ll x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        ll dig1 = 0, dig2 = 0;
        ll num;
        num = x1;
        while (num)
        {
            dig1++;
            num = num / 10;
        }
        num = x2;
        while (num)
        {
            dig2++;
            num = num / 10;
        }
        if ((dig1 + p1) > (dig2 + p2))
        {
            cout << ">" << endl;
            continue;
        }
        if ((dig1 + p1) < (dig2 + p2))
        {
            cout << "<" << endl;
            continue;
        }
        while (dig1 < dig2)
        {
            x1 = x1 * 10;
            dig1++;
        }
        while (dig1 > dig2)
        {
            x2 = x2 * 10;
            dig2++;
        }
        if (x1 > x2)
        {
            cout << ">" << endl;
        }
        else if (x1 < x2)
        {
            cout << "<" << endl;
        }
        else
            cout << "=" << endl;
    }
    return 0;
}