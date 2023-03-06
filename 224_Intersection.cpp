/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if ((a1 == 0 && b1 == 0 && c1 != 0) || (a2 == 0 && b2 == 0 && c2 != 0))
        cout << 0;
    else if (a1 * b2 == a2 * b1 && b1 * c2 == c1 * b2 && a1 * c2 == a2 * c1)
        cout << -1;
    else if (a1 * b2 == a2 * b1)
        cout << 0;
    else
        cout << 1;

    return 0;
}