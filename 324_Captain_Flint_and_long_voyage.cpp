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
        int n, x;
        cin >> n;
        if (n % 4)
        {
            x = n / 4 + 1;
        }
        else if (!(n % 4))
        {
            x = n / 4;
        }
        for (int i = 0; i < n - x; i++)
        {
            cout << "9";
        }
        for (int i = 0; i < x; i++)
        {
            cout << "8";
        }
        cout << endl;
    }

    return 0;
}