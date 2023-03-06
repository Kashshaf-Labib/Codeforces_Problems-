/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c;
    cin >> a >> b >> c;
    ll a1, a2, a3;
    a1 = sqrt((a * b) / c);
    a2 = sqrt((b * c) / a);
    a3 = sqrt((c * a) / b);
    cout << (4 * a1) + (4 * a2) + (4 * a3) << endl;

    return 0;
}