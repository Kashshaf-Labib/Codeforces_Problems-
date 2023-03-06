/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        ll odd = 0;
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        if (r % 2 != 0)
            odd++;
        if (g % 2 != 0)
            odd++;
        if (b % 2 != 0)
            odd++;
        if (w % 2 != 0)
            odd++;
        if ((odd >= 3 && (r == 0 || g == 0 || b == 0)) || odd == 2)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}