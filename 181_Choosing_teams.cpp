/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d = 0;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        cin >> c;
        if (5 - b >= c)
            d++;
    }
    cout << d / 3;
    return 0;

    return 0;
}