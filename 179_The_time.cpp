/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    char c;
    int h, m, x, xm, xh, hdigit = 0, mdigit = 0;
    cin >> h >> c >> m >> x;
    xh = x / 60;
    xm = x % 60;
    int nh, nm;
    nm = (m + xm) % 60;
    int xtrahour = (m + xm) / 60;
    nh = (xtrahour + h + xh) % 24;
    cout << setw(2) << setfill('0') << nh << ":";
    cout << setw(2) << setfill('0') << nm;

    return 0;
}