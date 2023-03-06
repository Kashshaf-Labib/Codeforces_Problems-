/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    if (m == 0)
    {
        cout << 1 << endl;
    }
    else if (n % 2 == 0)
    {
        if (m <= n / 2)
        {
            cout << m << endl;
        }
        else if (m > n / 2)
        {
            cout << n - m << endl;
        }
    }
    else if (n % 2 != 0)
    {
        if (m <= n / 2)
        {
            cout << m << endl;
        }
        else if (m == n / 2 + 1)
        {
            cout << n / 2 << endl;
        }
        else if (m > n / 2)
        {
            cout << n - m << endl;
        }
    }

    return 0;
}